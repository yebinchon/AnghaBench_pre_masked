
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* std; } ;
struct cipso_v4_doi {int type; TYPE_3__ map; } ;
struct TYPE_6__ {struct cipso_v4_doi* local; struct cipso_v4_doi* cipso; } ;
struct TYPE_5__ {struct cipso_v4_doi* local; struct cipso_v4_doi* cipso; } ;
struct TYPE_8__ {TYPE_2__ cat; TYPE_1__ lvl; } ;



 int FUNC_0 (struct cipso_v4_doi*) ;

void FUNC_1(struct cipso_v4_doi *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 switch (VAR_0->type) {
 case 128:
  FUNC_0(VAR_0->map.std->lvl.cipso);
  FUNC_0(VAR_0->map.std->lvl.local);
  FUNC_0(VAR_0->map.std->cat.cipso);
  FUNC_0(VAR_0->map.std->cat.local);
  break;
 }
 FUNC_0(VAR_0);
}
