
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glob_lim {int dummy; } ;
typedef int glob_t ;
typedef scalar_t__ Char ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int *,struct glob_lim*) ;

__attribute__((used)) static int
FUNC_1(Char *VAR_2, Char *VAR_3, glob_t *VAR_4, struct glob_lim *VAR_5)
{
 Char VAR_6[VAR_1];


 if (*VAR_2 == VAR_0)
  return(0);
 return(FUNC_0(VAR_6, VAR_6+VAR_1-1,
     VAR_6, VAR_6+VAR_1-1,
     VAR_2, VAR_3, VAR_4, VAR_5));
}
