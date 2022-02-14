
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int personality; } ;
struct ecore_hwfn {TYPE_1__ hw_info; int p_dev; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,int) ;





 scalar_t__ FUNC_1 (struct ecore_hwfn*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static u32 FUNC_3(struct ecore_hwfn *VAR_8)
{
 u32 VAR_9;


 VAR_9 = VAR_1;


 if (FUNC_2(VAR_8->p_dev))
  VAR_9 |= VAR_7;
 if (FUNC_1(VAR_8))
  VAR_9 |= VAR_6;


 switch (VAR_8->hw_info.personality) {
 case 132:
  VAR_9 |= VAR_3;
  break;
 case 129:
  VAR_9 |= VAR_4;
  break;
 case 128:
  VAR_9 |= VAR_0 | VAR_5 | VAR_4;
  break;
 case 130:
  VAR_9 |= VAR_3 | VAR_4 | VAR_2;
  break;
 case 131:
  VAR_9 |= VAR_3 | VAR_0 | VAR_5 | VAR_4;
  break;
 default:
  FUNC_0(VAR_8, "unknown personality %d\n", VAR_8->hw_info.personality);
  return 0;
 }

 return VAR_9;
}
