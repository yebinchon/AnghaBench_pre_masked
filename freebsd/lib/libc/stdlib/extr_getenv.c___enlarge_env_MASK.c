
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct envVars {int dummy; } ;


 struct envVars* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct envVars* FUNC_0 (struct envVars*,int,int) ;

__attribute__((used)) static inline bool
FUNC_1(void)
{
 int VAR_3;
 struct envVars *VAR_4;

 VAR_2++;
 if (VAR_2 > VAR_1) {
  VAR_3 = VAR_2 * 2;
  VAR_4 = FUNC_0(VAR_0, VAR_3,
      sizeof(*VAR_0));
  if (VAR_4 == ((void*)0)) {
   VAR_2--;
   return (0);
  }
  VAR_1 = VAR_3;
  VAR_0 = VAR_4;
 }

 return (1);
}
