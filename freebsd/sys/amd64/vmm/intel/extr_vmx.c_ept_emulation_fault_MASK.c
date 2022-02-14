
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool
FUNC_0(uint64_t VAR_5)
{
 int VAR_6, VAR_7;


 if (VAR_5 & VAR_3)
  return (0);


 VAR_6 = VAR_5 & VAR_0 ? 1 : 0;
 VAR_7 = VAR_5 & VAR_1 ? 1 : 0;
 if ((VAR_6 | VAR_7) == 0)
  return (0);






 if ((VAR_5 & VAR_2) == 0 ||
     (VAR_5 & VAR_4) == 0) {
  return (0);
 }

 return (1);
}
