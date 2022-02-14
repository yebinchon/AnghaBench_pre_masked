
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*,char const*) ;
 int * FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int,char*,char const*) ;

FILE *
FUNC_3(const char *VAR_0, const char *VAR_1)
{
 FILE *VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  FUNC_0)(1, "Cannot open `%s'", VAR_0);
 return VAR_2;
}
