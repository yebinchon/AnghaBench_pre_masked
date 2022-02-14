
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int si_note; } ;
struct TYPE_6__ {scalar_t__ kqueue_users; int m; TYPE_1__ si; int mtxname; int * ntfytq; int ntfytask; } ;
typedef TYPE_2__ NM_SELINFO_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int,char*,char const*) ;
 int * FUNC_4 (char const*,int ,int ,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int,int ,char*,char const*) ;
 int VAR_5 ;

int FUNC_7(NM_SELINFO_T *VAR_6, const char *VAR_7) {
 int VAR_8;

 FUNC_0(&VAR_6->ntfytask, 0, VAR_4, VAR_6);
 VAR_6->ntfytq = FUNC_4(VAR_7, VAR_2,
     VAR_5, &VAR_6->ntfytq);
 if (VAR_6->ntfytq == ((void*)0))
  return -VAR_0;
 VAR_8 = FUNC_6(&VAR_6->ntfytq, 1, VAR_3, "tq %s", VAR_7);
 if (VAR_8) {
  FUNC_5(VAR_6->ntfytq);
  VAR_6->ntfytq = ((void*)0);
  return VAR_8;
 }

 FUNC_3(VAR_6->mtxname, sizeof(VAR_6->mtxname), "nmkl%s", VAR_7);
 FUNC_2(&VAR_6->m, VAR_6->mtxname, ((void*)0), VAR_1);
 FUNC_1(&VAR_6->si.si_note, &VAR_6->m);
 VAR_6->kqueue_users = 0;

 return (0);
}
