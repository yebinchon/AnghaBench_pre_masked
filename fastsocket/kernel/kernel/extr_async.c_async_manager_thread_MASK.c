
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int *,char*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_12(void *VAR_8)
{
 FUNC_0(VAR_7, VAR_4);
 FUNC_2(&VAR_2, &VAR_7);

 while (!FUNC_6()) {
  int VAR_9, VAR_10;

  FUNC_11(VAR_1);

  VAR_9 = FUNC_4(&VAR_6);
  FUNC_9();
  VAR_10 = FUNC_4(&VAR_5);

  while (VAR_9 < VAR_10 && VAR_9 < VAR_0) {
   if (FUNC_1(FUNC_5(VAR_3, ((void*)0), "async/%i",
            VAR_9))) {
    FUNC_7(100);
    continue;
   }
   if (!FUNC_3(&VAR_6, 1, VAR_0))



    break;
   VAR_9++;
  }

  FUNC_10();
 }
 FUNC_8(&VAR_2, &VAR_7);

 return 0;
}
