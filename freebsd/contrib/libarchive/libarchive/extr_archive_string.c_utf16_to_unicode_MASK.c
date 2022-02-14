
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_3 (char const*) ;
 unsigned int FUNC_4 (char const*) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_6(uint32_t *VAR_2, const char *VAR_3, size_t VAR_4, int VAR_5)
{
 const char *VAR_6 = VAR_3;
 unsigned VAR_7;

 if (VAR_4 == 0)
  return (0);
 if (VAR_4 == 1) {

  *VAR_2 = VAR_1;
  return (-1);
 }

 if (VAR_5)
  VAR_7 = FUNC_3(VAR_6);
 else
  VAR_7 = FUNC_4(VAR_6);
 VAR_6 += 2;


 if (FUNC_0(VAR_7)) {
  unsigned VAR_8;

  if (VAR_4 >= 4) {
   if (VAR_5)
    VAR_8 = FUNC_3(VAR_6);
   else
    VAR_8 = FUNC_4(VAR_6);
  } else
   VAR_8 = 0;
  if (FUNC_1(VAR_8)) {
   VAR_7 = FUNC_5(VAR_7, VAR_8);
   VAR_6 += 2;
  } else {


   *VAR_2 = VAR_1;
   return (-2);
  }
 }
 if (FUNC_2(VAR_7) || VAR_7 > VAR_0) {


  *VAR_2 = VAR_1;
  return (((int)(VAR_6 - VAR_3)) * -1);
 }
 *VAR_2 = VAR_7;
 return ((int)(VAR_6 - VAR_3));
}
