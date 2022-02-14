
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef char u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char const) ;

__attribute__((used)) static u_int
FUNC_4(netdissect_options *VAR_0, const char *VAR_1,
    const char *VAR_2, const u_char *VAR_3, u_int VAR_4, u_int VAR_5)
{
 u_int VAR_6;
 u_int VAR_7;

 VAR_6 = VAR_4;
 while (VAR_4 < VAR_5) {
  FUNC_1(*(VAR_3+VAR_4));
  if (*(VAR_3+VAR_4) == '\n') {





   VAR_7 = VAR_4 - VAR_6;
   VAR_4++;
   goto print;
  } else if (*(VAR_3+VAR_4) == '\r') {

   if ((VAR_4+1) >= VAR_5) {

    return (0);
   }
   FUNC_1(*(VAR_3+VAR_4+1));
   if (*(VAR_3+VAR_4+1) == '\n') {





    VAR_7 = VAR_4 - VAR_6;
    VAR_4 += 2;
    goto print;
   }






   return (0);
  } else if (!FUNC_2(*(VAR_3+VAR_4)) ||
      (!FUNC_3(*(VAR_3+VAR_4)) && *(VAR_3+VAR_4) != '\t')) {





   return (0);
  }
  VAR_4++;
 }





trunc:
 VAR_7 = VAR_4 - VAR_6;
 FUNC_0((VAR_0, "%s%.*s[!%s]", VAR_2, (int)VAR_7, VAR_3 + VAR_6,
     VAR_1));
 return (0);

print:
 FUNC_0((VAR_0, "%s%.*s", VAR_2, (int)VAR_7, VAR_3 + VAR_6));
 return (VAR_4);
}
