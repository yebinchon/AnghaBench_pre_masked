
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {size_t cipso_size; size_t* cipso; } ;
struct cipso_v4_std_map_tbl {TYPE_2__ lvl; } ;
struct TYPE_3__ {struct cipso_v4_std_map_tbl* std; } ;
struct cipso_v4_doi {int type; TYPE_1__ map; } ;


 size_t VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct cipso_v4_doi *VAR_3,
     u32 VAR_4,
     u32 *VAR_5)
{
 struct cipso_v4_std_map_tbl *VAR_6;

 switch (VAR_3->type) {
 case 129:
  *VAR_5 = VAR_4;
  return 0;
 case 128:
  VAR_6 = VAR_3->map.std;
  if (VAR_4 < VAR_6->lvl.cipso_size &&
      VAR_6->lvl.cipso[VAR_4] < VAR_0) {
   *VAR_5 = VAR_3->map.std->lvl.cipso[VAR_4];
   return 0;
  }
  return -VAR_2;
 }

 return -VAR_1;
}
