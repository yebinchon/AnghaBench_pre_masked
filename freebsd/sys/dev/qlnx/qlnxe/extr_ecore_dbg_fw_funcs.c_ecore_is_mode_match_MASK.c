
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dbg_tools_data {int * mode_enable; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct TYPE_2__ {scalar_t__ ptr; } ;


 size_t VAR_0 ;



 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct ecore_hwfn *VAR_3,
        u16 *VAR_4)
{
 struct dbg_tools_data *VAR_5 = &VAR_3->dbg_info;
 bool VAR_6, VAR_7;
 u8 VAR_8;


 VAR_8 = ((u8 *)VAR_2[VAR_0].ptr)[(*VAR_4)++];

 switch (VAR_8) {
 case 129:
  return !FUNC_0(VAR_3, VAR_4);
 case 128:
 case 130:
  VAR_6 = FUNC_0(VAR_3, VAR_4);
  VAR_7 = FUNC_0(VAR_3, VAR_4);
  return (VAR_8 == 128) ? (VAR_6 || VAR_7) : (VAR_6 && VAR_7);
 default: return VAR_5->mode_enable[VAR_8 - VAR_1] > 0;
 }
}
