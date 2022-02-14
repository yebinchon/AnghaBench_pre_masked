
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct roff*,int,char const*,int*,int*,int) ;
 int FUNC_1 (char const*,int*,int*,int) ;

__attribute__((used)) static int
FUNC_2(struct roff *VAR_1, int VAR_2,
 const char *VAR_3, int *VAR_4, int *VAR_5, int VAR_6)
{

 if ('(' != VAR_3[*VAR_4])
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);

 (*VAR_4)++;
 if ( ! FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 | VAR_0))
  return 0;







 if (')' == VAR_3[*VAR_4])
  (*VAR_4)++;
 else if (((void*)0) == VAR_5)
  return 0;

 return 1;
}
