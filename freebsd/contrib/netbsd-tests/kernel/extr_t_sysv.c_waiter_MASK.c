
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sembuf {int sem_op; void* sem_flg; scalar_t__ sem_num; } ;


 void* VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int,int ) ;
 int VAR_1 ;
 int FUNC_4 (int,struct sembuf*,int) ;
 int FUNC_5 (int) ;

void
FUNC_6(void)
{
 struct sembuf VAR_2;
 int VAR_3;

 if ((VAR_3 = FUNC_3(VAR_1, 1, 0)) == -1)
  FUNC_0(1, "waiter: semget");




 VAR_2.sem_num = 0;
 VAR_2.sem_op = -1;
 VAR_2.sem_flg = VAR_0;

 if (FUNC_4(VAR_3, &VAR_2, 1) == -1)
  FUNC_0(1, "waiter: semop -1");

 FUNC_2("WOO!  GOT THE SEMAPHORE!\n");
 FUNC_5(1);




 VAR_2.sem_num = 0;
 VAR_2.sem_op = 1;
 VAR_2.sem_flg = VAR_0;

 if (FUNC_4(VAR_3, &VAR_2, 1) == -1)
  FUNC_0(1, "waiter: semop +1");

 FUNC_1(0);
}
