
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int dtrace_probe_t ;
struct TYPE_10__ {int dthb_len; int * dthb_chain; struct TYPE_10__* dthb_next; } ;
typedef TYPE_1__ dtrace_hashbucket_t ;
struct TYPE_11__ {int dth_mask; int dth_nbuckets; int dth_size; TYPE_1__** dth_tab; } ;
typedef TYPE_2__ dtrace_hash_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int *) ;
 int ** FUNC_2 (TYPE_2__*,int *) ;
 int ** FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_1__* FUNC_6 (int,int ) ;

__attribute__((used)) static void
FUNC_7(dtrace_hash_t *VAR_1, dtrace_probe_t *VAR_2)
{
 int VAR_3 = FUNC_4(VAR_1, VAR_2);
 int VAR_4 = VAR_3 & VAR_1->dth_mask;
 dtrace_hashbucket_t *VAR_5 = VAR_1->dth_tab[VAR_4];
 dtrace_probe_t **VAR_6, **VAR_7;

 for (; VAR_5 != ((void*)0); VAR_5 = VAR_5->dthb_next) {
  if (FUNC_1(VAR_1, VAR_5->dthb_chain, VAR_2))
   goto add;
 }

 if ((VAR_1->dth_nbuckets >> 1) > VAR_1->dth_size) {
  FUNC_5(VAR_1);
  FUNC_7(VAR_1, VAR_2);
  return;
 }

 VAR_5 = FUNC_6(sizeof (dtrace_hashbucket_t), VAR_0);
 VAR_5->dthb_next = VAR_1->dth_tab[VAR_4];
 VAR_1->dth_tab[VAR_4] = VAR_5;
 VAR_1->dth_nbuckets++;

add:
 VAR_6 = FUNC_2(VAR_1, VAR_2);
 FUNC_0(*VAR_6 == ((void*)0) && *(FUNC_3(VAR_1, VAR_2)) == ((void*)0));
 *VAR_6 = VAR_5->dthb_chain;

 if (VAR_5->dthb_chain != ((void*)0)) {
  VAR_7 = FUNC_3(VAR_1, VAR_5->dthb_chain);
  FUNC_0(*VAR_7 == ((void*)0));
  *VAR_7 = VAR_2;
 }

 VAR_5->dthb_chain = VAR_2;
 VAR_5->dthb_len++;
}
