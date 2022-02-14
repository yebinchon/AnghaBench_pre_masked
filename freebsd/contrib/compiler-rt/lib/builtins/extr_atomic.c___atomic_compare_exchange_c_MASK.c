
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Lock ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*,void*,int) ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (int *) ;

int FUNC_6(int VAR_0, void *VAR_1, void *VAR_2,
                                void *VAR_3, int VAR_4, int VAR_5) {




  FUNC_0();

  Lock *VAR_6 = FUNC_2(VAR_1);
  FUNC_1(VAR_6);
  if (FUNC_3(VAR_1, VAR_2, VAR_0) == 0) {
    FUNC_4(VAR_1, VAR_3, VAR_0);
    FUNC_5(VAR_6);
    return 1;
  }
  FUNC_4(VAR_2, VAR_1, VAR_0);
  FUNC_5(VAR_6);
  return 0;
}
