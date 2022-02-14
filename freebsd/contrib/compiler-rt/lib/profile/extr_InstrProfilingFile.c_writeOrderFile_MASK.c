
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int FILE ;


 int * VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int VAR_1 ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(const char *VAR_2) {
  int VAR_3;
  FILE *VAR_4;

  VAR_4 = FUNC_3(VAR_2, "w");

  if (!VAR_4) {
    FUNC_0("can't open file with mode ab: %s\n", VAR_2);
    return -1;
  }

  VAR_0 = &VAR_1;
  FUNC_5();
  const uint32_t *VAR_5 = FUNC_1();
  VAR_3 = FUNC_4(VAR_4, VAR_5);

  FUNC_2(VAR_4);
  return VAR_3;
}
