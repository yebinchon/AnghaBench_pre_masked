
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;

__attribute__((used)) static bool
FUNC_3(const char *VAR_0, size_t VAR_1, u_int VAR_2,
    u_int *VAR_3)
{
 size_t VAR_4, VAR_5;

 VAR_4 = 0;
 VAR_5 = 0;


 if (VAR_4 >= VAR_1)
  return (0);

 if (VAR_0[VAR_4] == '-' || VAR_0[VAR_4] == '+')
  VAR_4++;


 if (VAR_4 == VAR_1)
  return (0);


 if (VAR_2 == 16 || VAR_2 == 0) {

  if (VAR_1 - VAR_4 >= 2 && VAR_0[VAR_4] == '0' &&
      (VAR_0[VAR_4+1] == 'x' || VAR_0[VAR_4+1] == 'X'))
  {
   VAR_2 = 16;
   VAR_4 += 2;
  }
 }


 if (VAR_4 == VAR_1)
  return (0);


 if (VAR_2 == 0) {
  if (VAR_0[VAR_4] == '0') {
   VAR_2 = 8;
  } else {
   VAR_2 = 10;
  }
 }


 for (; VAR_4 < VAR_1; VAR_4++) {
  u_int VAR_6;
  char VAR_7;


  VAR_7 = VAR_0[VAR_4];
  if (FUNC_0(VAR_7)) {
   VAR_6 = VAR_7 - '0';
  } else if (FUNC_2(VAR_7)) {
   if (FUNC_1(VAR_7))
    VAR_6 = (VAR_7 - 'A') + 10;
   else
    VAR_6 = (VAR_7 - 'a') + 10;
  } else {

   return (0);
  }




  if (VAR_6 >= VAR_2)
   return (0);


  VAR_5++;
 }


 if (VAR_5 == 0)
  return (0);


 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_2;
 return (1);
}
