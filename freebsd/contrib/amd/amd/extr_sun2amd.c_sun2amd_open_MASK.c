
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int ,char*,char const*) ;

__attribute__((used)) static FILE *
FUNC_2(const char *VAR_1, const char *VAR_2)
{
  FILE *VAR_3 = ((void*)0);

  if ((VAR_3 = FUNC_0(VAR_1,VAR_2)) == ((void*)0)) {
    FUNC_1(VAR_0,"could not open file %s",VAR_1);
  }

  return VAR_3;
}
