
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

isc_result_t
FUNC_7(char *VAR_3) {
 isc_result_t VAR_4;
 char *VAR_5;
 char *VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_0(VAR_3 != ((void*)0));





 VAR_8 = FUNC_2();




 for (VAR_5 = VAR_3 + FUNC_6(VAR_3) - 1; *VAR_5 == 'X' && VAR_5 >= VAR_3;
      VAR_5--, VAR_8 /= 10)
  *VAR_5 = VAR_8 % 10 + '0';

 VAR_5++;

 do {
  VAR_7 = FUNC_5(VAR_3);
  VAR_7 = FUNC_1(VAR_3, 0700);

  if (VAR_7 == 0 || VAR_2 != VAR_0)
   break;




  VAR_6 = VAR_5;
  while (*VAR_6 != '\0') {
   if (FUNC_4(*VAR_6 & 0xff))
    *VAR_6 = 'a';
   else if (*VAR_6 != 'z')
    ++*VAR_6;
   else {



    *VAR_6++ = 'a';
    continue;
   }

   break;
  }

  if (*VAR_6 == '\0') {





   VAR_2 = VAR_0;
   break;
  }
 } while (1);

 if (VAR_7 == -1)
  VAR_4 = FUNC_3(VAR_2);
 else
  VAR_4 = VAR_1;

 return (VAR_4);
}
