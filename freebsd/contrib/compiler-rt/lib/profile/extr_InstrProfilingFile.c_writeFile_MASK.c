
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ProfDataWriter ;
typedef int FILE ;


 int * VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int * FUNC_3 (char const*) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int) ;
 int * FUNC_9 (char const*,int*) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(const char *VAR_4) {
  int VAR_5;
  FILE *VAR_6;

  int VAR_7 = 0;
  VAR_1 = &VAR_3;
  if (FUNC_0())
    VAR_6 = FUNC_9(VAR_4, &VAR_7);
  else
    VAR_6 = FUNC_3(VAR_4);

  if (!VAR_6)
    return -1;

  VAR_0 = &VAR_2;
  FUNC_10();
  ProfDataWriter VAR_8;
  FUNC_5(&VAR_8, VAR_6);
  VAR_5 = FUNC_8(&VAR_8, FUNC_6(), VAR_7);

  if (VAR_6 == FUNC_4()) {
    FUNC_2(VAR_6);
    if (FUNC_0()) {
      FUNC_7(VAR_6);
    }
  } else {
    FUNC_1(VAR_6);
  }

  return VAR_5;
}
