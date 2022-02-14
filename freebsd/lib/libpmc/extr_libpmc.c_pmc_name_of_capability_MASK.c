
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pmc_caps { ____Placeholder_pmc_caps } pmc_caps ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 char const** VAR_4 ;

const char *
FUNC_1(enum pmc_caps VAR_5)
{
 int VAR_6;





 if ((VAR_5 & (VAR_5 - 1)) || VAR_5 < VAR_1 ||
     VAR_5 > VAR_2) {
  VAR_3 = VAR_0;
  return (((void*)0));
 }

 VAR_6 = FUNC_0(VAR_5);
 return (VAR_4[VAR_6 - 1]);
}
