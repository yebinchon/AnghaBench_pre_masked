
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char*,char const*) ;
 int VAR_0 ;
 char const** VAR_1 ;
 char** FUNC_1 (char const**,int) ;

__attribute__((used)) static void
FUNC_2 (const char *VAR_2)
{
  if (VAR_2[0] == 0)
    return;
  VAR_0++;
  VAR_1 = FUNC_1 (VAR_1,
       VAR_0 * sizeof (*VAR_1));




  VAR_1[VAR_0 - 1] = VAR_2;
}
