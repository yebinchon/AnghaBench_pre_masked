
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int si_note; } ;
struct TYPE_5__ {int m; TYPE_1__ si; int * ntfytq; int ntfytask; } ;
typedef TYPE_2__ NM_SELINFO_T ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(NM_SELINFO_T *VAR_1)
{
 if (VAR_1->ntfytq == ((void*)0)) {
  return;
 }
 FUNC_3(VAR_1->ntfytq, &VAR_1->ntfytask);
 FUNC_4(VAR_1->ntfytq);
 VAR_1->ntfytq = ((void*)0);
 FUNC_0(&VAR_1->si.si_note, VAR_0, 0);
 FUNC_1(&VAR_1->si.si_note);

 FUNC_2(&VAR_1->m);
}
