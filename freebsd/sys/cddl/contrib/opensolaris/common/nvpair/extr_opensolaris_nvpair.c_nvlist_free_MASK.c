
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nvp_stat; scalar_t__ nvl_priv; TYPE_3__* nvp_list; } ;
typedef TYPE_1__ nvpriv_t ;
typedef int nvpair_t ;
typedef TYPE_1__ nvlist_t ;
struct TYPE_10__ {struct TYPE_10__* nvi_next; int nvi_nvp; } ;
typedef TYPE_3__ i_nvp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(nvlist_t *VAR_1)
{
 nvpriv_t *VAR_2;
 i_nvp_t *VAR_3;

 if (VAR_1 == ((void*)0) ||
     (VAR_2 = (nvpriv_t *)(uintptr_t)VAR_1->nvl_priv) == ((void*)0))
  return;




 VAR_3 = VAR_2->nvp_list;
 while (VAR_3 != ((void*)0)) {
  nvpair_t *VAR_4 = &VAR_3->nvi_nvp;
  VAR_3 = VAR_3->nvi_next;

  FUNC_3(VAR_4);
  FUNC_2(VAR_1, VAR_4);
 }

 if (!(VAR_2->nvp_stat & VAR_0))
  FUNC_1(VAR_2, VAR_1, FUNC_0(sizeof (nvlist_t)));
 else
  VAR_1->nvl_priv = 0;

 FUNC_4(VAR_2);
 FUNC_1(VAR_2, VAR_2, sizeof (nvpriv_t));
}
