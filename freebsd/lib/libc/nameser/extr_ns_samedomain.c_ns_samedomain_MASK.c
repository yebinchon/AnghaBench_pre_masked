
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

int
FUNC_2(const char *VAR_0, const char *VAR_1) {
 size_t VAR_2, VAR_3;
 int VAR_4, VAR_5, VAR_6;
 const char *VAR_7;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);


 if (VAR_2 != 0U && VAR_0[VAR_2 - 1] == '.') {
  VAR_6 = 0;

  for (VAR_5 = VAR_2 - 2; VAR_5 >= 0; VAR_5--)
   if (VAR_0[VAR_5] == '\\') {
    if (VAR_6)
     VAR_6 = 0;
    else
     VAR_6 = 1;
   } else
    break;
  if (!VAR_6)
   VAR_2--;
 }


 if (VAR_3 != 0U && VAR_1[VAR_3 - 1] == '.') {
  VAR_6 = 0;

  for (VAR_5 = VAR_3 - 2; VAR_5 >= 0; VAR_5--)
   if (VAR_1[VAR_5] == '\\') {
    if (VAR_6)
     VAR_6 = 0;
    else
     VAR_6 = 1;
   } else
    break;
  if (!VAR_6)
   VAR_3--;
 }


 if (VAR_3 == 0U)
  return (1);


 if (VAR_3 > VAR_2)
  return (0);


 if (VAR_3 == VAR_2)
  return (FUNC_1(VAR_0, VAR_1, VAR_3) == 0);



 VAR_4 = VAR_2 - VAR_3;






 if (VAR_4 < 2)
  return (0);






 if (VAR_0[VAR_4 - 1] != '.')
  return (0);





 VAR_6 = 0;
 for (VAR_5 = VAR_4 - 2; VAR_5 >= 0; VAR_5--)
  if (VAR_0[VAR_5] == '\\') {
   if (VAR_6)
    VAR_6 = 0;
   else
    VAR_6 = 1;
  } else
   break;
 if (VAR_6)
  return (0);


 VAR_7 = VAR_0 + VAR_4;
 return (FUNC_1(VAR_7, VAR_1, VAR_3) == 0);
}
