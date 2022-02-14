
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int const,char const*) ;
 char** FUNC_1 (char**,int,int,int) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1, const int VAR_2, const char *VAR_3,
    char ***VAR_4, u_int *VAR_5, const char *VAR_6)
{

 if (*VAR_5 >= VAR_0)
  FUNC_0("%s line %d: Too many %s entries", VAR_1, VAR_2, VAR_3);

 *VAR_4 = FUNC_1(*VAR_4, *VAR_5, *VAR_5 + 1, sizeof(**VAR_4));
 (*VAR_4)[*VAR_5] = FUNC_2(VAR_6);
 (*VAR_5)++;
}
