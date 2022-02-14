
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct msgring_thread {int needed; struct thread* thread; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct thread*) ;
 int FUNC_1 (struct thread*) ;
 int * VAR_3 ;
 struct msgring_thread* VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long long) ;
 int FUNC_4 (struct thread*,int ) ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (struct thread*) ;

__attribute__((used)) static int
FUNC_7(void *VAR_7)
{
 struct msgring_thread *VAR_8;
 struct thread *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2();
 VAR_8 = &VAR_4[VAR_10];
 VAR_3[VAR_10]++;
 VAR_9 = VAR_8->thread;


 FUNC_3(1ULL << VAR_1);


 VAR_8->needed = 1;
 FUNC_5(VAR_9);
 if (FUNC_0(VAR_9)) {
  VAR_6[VAR_10]++;
  FUNC_1(VAR_9);
  FUNC_4(VAR_9, VAR_2);
 } else
  VAR_5[VAR_10]++;

 FUNC_6(VAR_9);

 return (VAR_0);
}
