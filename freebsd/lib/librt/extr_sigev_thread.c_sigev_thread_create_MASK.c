
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigev_thread {int tn_refcount; int tn_lwpid; int tn_cv; int tn_thread; int * tn_cur; } ;
typedef int sigset_t ;


 int FUNC_0 (int *,struct sigev_thread*,int ) ;
 int FUNC_1 (struct sigev_thread*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,int ,struct sigev_thread*) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (struct sigev_thread*) ;
 struct sigev_thread* FUNC_9 (int) ;
 int FUNC_10 (int *,int ) ;
 int VAR_6 ;
 struct sigev_thread* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int *) ;
 int VAR_11 ;

__attribute__((used)) static struct sigev_thread *
FUNC_12(int VAR_12)
{
 struct sigev_thread *VAR_13;
 sigset_t VAR_14, VAR_15;
 int VAR_16;

 if (VAR_12 && VAR_7) {
  FUNC_2();
  VAR_7->tn_refcount++;
  FUNC_3();
  return (VAR_7);
 }

 VAR_13 = FUNC_9(sizeof(*VAR_13));
 VAR_13->tn_cur = ((void*)0);
 VAR_13->tn_lwpid = -1;
 VAR_13->tn_refcount = 1;
 FUNC_4(&VAR_13->tn_cv, ((void*)0));


 FUNC_2();
 FUNC_0(&VAR_10, VAR_13, VAR_11);
 FUNC_3();

 FUNC_11(&VAR_14);
 FUNC_10(&VAR_14, VAR_0);
 FUNC_10(&VAR_14, VAR_2);
 FUNC_10(&VAR_14, VAR_1);
 FUNC_10(&VAR_14, VAR_3);
 FUNC_10(&VAR_14, VAR_4);
 FUNC_7(VAR_5, &VAR_14, &VAR_15);
 VAR_16 = FUNC_6(&VAR_13->tn_thread, &VAR_6,
   VAR_9, VAR_13);
 FUNC_7(VAR_5, &VAR_15, ((void*)0));

 if (VAR_16 != 0) {
  FUNC_2();
  FUNC_1(VAR_13, VAR_11);
  FUNC_3();
  FUNC_8(VAR_13);
  VAR_13 = ((void*)0);
 } else {


  FUNC_2();
  while (VAR_13->tn_lwpid == -1)
   FUNC_5(&VAR_13->tn_cv, VAR_8);
  FUNC_3();
 }
 return (VAR_13);
}
