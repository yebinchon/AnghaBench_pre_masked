
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_6__ {TYPE_2__* std; } ;
struct cipso_v4_doi {int type; TYPE_3__ map; } ;
struct TYPE_4__ {int * cipso; } ;
struct TYPE_5__ {TYPE_1__ lvl; } ;


 int VAR_0 ;


 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct cipso_v4_doi *VAR_2, u8 VAR_3)
{
 switch (VAR_2->type) {
 case 129:
  return 0;
 case 128:
  if (VAR_2->map.std->lvl.cipso[VAR_3] < VAR_0)
   return 0;
  break;
 }

 return -VAR_1;
}
