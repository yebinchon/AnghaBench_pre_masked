
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_attr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 uintptr_t VAR_2 ;
 uintptr_t FUNC_3 (int *) ;
 int FUNC_4 () ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,uintptr_t) ;
 int FUNC_8 (int *,int *,int ,void*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,void**) ;
 int FUNC_12 () ;
 int VAR_4 ;

__attribute__((used)) static void *
FUNC_13(void *VAR_5)
{
 pthread_t VAR_6[25];
 pthread_t VAR_7;
 void *VAR_8 = ((void*)0);
 uintptr_t VAR_9;
 int VAR_10;
 pthread_attr_t VAR_11;

 VAR_7 = FUNC_12();
 VAR_10 = FUNC_11(VAR_7, ((void*)0));




 FUNC_0(VAR_10 != 0);
 FUNC_1(VAR_10, VAR_0);

 FUNC_0(FUNC_6(&VAR_11) == 0);

 for (VAR_9 = 0; VAR_9 < FUNC_3(VAR_6); VAR_9++) {

  VAR_3 = 1;

  FUNC_0(FUNC_7(&VAR_11, VAR_2 * (VAR_9 + 1)) == 0);

  VAR_10 = FUNC_8(&VAR_6[VAR_9], &VAR_11, VAR_4, (void *)VAR_9);

  FUNC_1(VAR_10, 0);




  FUNC_2(FUNC_11(VAR_6[VAR_9], &VAR_8));

  FUNC_1(VAR_3, 0);

  FUNC_0(VAR_8 != ((void*)0));
  FUNC_0(VAR_8 == (void *)(VAR_9 + 1));





  VAR_10 = FUNC_11(VAR_6[VAR_9], ((void*)0));

  FUNC_1(VAR_10, VAR_1);




  VAR_10 = FUNC_9(VAR_6[VAR_9]);

  FUNC_0(VAR_10 != 0);
 }

 FUNC_0(FUNC_5(&VAR_11) == 0);

 FUNC_10(((void*)0));

 return ((void*)0);
}
