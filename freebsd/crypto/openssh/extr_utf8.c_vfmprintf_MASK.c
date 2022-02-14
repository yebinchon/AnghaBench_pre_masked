
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,int ,int *,char const*,int ) ;

int
FUNC_3(FILE *VAR_2, const char *VAR_3, va_list VAR_4)
{
 char *VAR_5;
 int VAR_6;

 if ((VAR_6 = FUNC_2(&VAR_5, VAR_1, ((void*)0), VAR_3, VAR_4)) < 0)
  return -1;
 if (FUNC_0(VAR_5, VAR_2) == VAR_0)
  VAR_6 = -1;
 FUNC_1(VAR_5);
 return VAR_6;
}
