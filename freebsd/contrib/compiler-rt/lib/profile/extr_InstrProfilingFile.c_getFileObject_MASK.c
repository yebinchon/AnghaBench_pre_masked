
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char const*,char*) ;
 int * FUNC_1 () ;

__attribute__((used)) static FILE *FUNC_2(const char *VAR_0) {
  FILE *VAR_1;
  VAR_1 = FUNC_1();
  if (VAR_1 != ((void*)0)) {
    return VAR_1;
  }

  return FUNC_0(VAR_0, "ab");
}
