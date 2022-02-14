
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_mutexattr_t ;
typedef int pthread_mutex_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int VAR_7 ;
 int FUNC_9 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int * FUNC_10 (int ) ;
 int VAR_13 ;

void
FUNC_11(void)
{
 static int VAR_14 = 0;
 pthread_mutexattr_t VAR_15;
 int VAR_16;

 FUNC_7(&VAR_15);
 FUNC_8(&VAR_15, VAR_2);
 VAR_12 = FUNC_9(sizeof(pthread_mutex_t));
 FUNC_5(VAR_12, &VAR_15);
 FUNC_6(&VAR_15);

 for (VAR_16 = 0; VAR_16 < VAR_0; ++VAR_16)
  FUNC_0(&VAR_11[VAR_16]);
 FUNC_0(&VAR_8);
 FUNC_0(&VAR_13);
 VAR_10 = ((void*)0);
 if (VAR_7 == 0) {
  FUNC_1(
   VAR_6,
   VAR_5,
   VAR_4);
  VAR_7 = 1;
 }
 if (!VAR_14) {
  FUNC_2(&VAR_9);
  FUNC_4(&VAR_9,
   VAR_3);
  FUNC_3(&VAR_9,
   VAR_1);
  VAR_14 = 1;
 }
 VAR_10 = FUNC_10(0);
}
