
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {TYPE_1__* std; } ;
struct cipso_v4_doi {int type; TYPE_3__ map; } ;
struct TYPE_5__ {size_t local_size; size_t* local; } ;
struct TYPE_4__ {TYPE_2__ lvl; } ;


 size_t VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct cipso_v4_doi *VAR_3,
     u32 VAR_4,
     u32 *VAR_5)
{
 switch (VAR_3->type) {
 case 129:
  *VAR_5 = VAR_4;
  return 0;
 case 128:
  if (VAR_4 < VAR_3->map.std->lvl.local_size &&
      VAR_3->map.std->lvl.local[VAR_4] < VAR_0) {
   *VAR_5 = VAR_3->map.std->lvl.local[VAR_4];
   return 0;
  }
  return -VAR_2;
 }

 return -VAR_1;
}
