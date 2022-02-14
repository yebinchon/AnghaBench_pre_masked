
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct msgring_thread {struct thread* thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*,int *,struct thread**,int ,int,char*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct msgring_thread* VAR_5 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct thread*,int ) ;
 int FUNC_4 (struct thread*) ;
 int FUNC_5 (struct thread*) ;

__attribute__((used)) static void
FUNC_6(int VAR_6)
{
 struct msgring_thread *VAR_7;
 struct thread *VAR_8;
 int VAR_9;

 VAR_7 = &VAR_5[VAR_6];
 VAR_9 = FUNC_0(VAR_4, (void *)(uintptr_t)VAR_6,
     &VAR_3, &VAR_8, VAR_1, 2, "msgrngproc",
     "msgthr%d", VAR_6);
 if (VAR_9)
  FUNC_1("kproc_kthread_add() failed with %d", VAR_9);
 VAR_7->thread = VAR_8;

 FUNC_4(VAR_8);
 FUNC_3(VAR_8, VAR_0);
 FUNC_2(VAR_8, VAR_2);
 FUNC_5(VAR_8);
}
