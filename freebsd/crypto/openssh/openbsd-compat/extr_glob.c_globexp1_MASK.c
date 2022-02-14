
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glob_lim {int dummy; } ;
typedef int glob_t ;
typedef scalar_t__ Char ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__ const*,scalar_t__ const) ;
 int FUNC_1 (scalar_t__ const*,int *,struct glob_lim*) ;
 int FUNC_2 (scalar_t__ const*,scalar_t__ const*,int *,struct glob_lim*) ;

__attribute__((used)) static int
FUNC_3(const Char *VAR_3, glob_t *VAR_4, struct glob_lim *VAR_5)
{
 const Char* VAR_6 = VAR_3;


 if (VAR_3[0] == VAR_1 && VAR_3[1] == VAR_2 && VAR_3[2] == VAR_0)
  return FUNC_1(VAR_3, VAR_4, VAR_5);

 if ((VAR_6 = (const Char *) FUNC_0(VAR_6, VAR_1)) != ((void*)0))
  return FUNC_2(VAR_6, VAR_3, VAR_4, VAR_5);

 return FUNC_1(VAR_3, VAR_4, VAR_5);
}
