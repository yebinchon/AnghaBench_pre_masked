
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int tbl ;


 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;
 int VAR_0 ;
 int VAR_1 ;

size_t
FUNC_2(const char * __restrict VAR_2, const char * __restrict VAR_3)
{




 const char *VAR_4;
 u_long VAR_5;
 u_long VAR_6[(VAR_1 + 1) / VAR_0];
 int VAR_7;

 if(*VAR_2 == '\0')
  return (0);





 for (VAR_6[0] = VAR_7 = 1; VAR_7 < sizeof(VAR_6) / sizeof(VAR_6[0]); VAR_7++)
  VAR_6[VAR_7] = 0;

 for (; *VAR_3 != '\0'; VAR_3++) {
  VAR_7 = FUNC_1(*VAR_3);
  VAR_5 = FUNC_0(*VAR_3);
  VAR_6[VAR_7] |= VAR_5;
 }

 for(VAR_4 = VAR_2; ; VAR_4++) {
  VAR_7 = FUNC_1(*VAR_4);
  VAR_5 = FUNC_0(*VAR_4);
  if ((VAR_6[VAR_7] & VAR_5) != 0)
   break;
 }
 return (VAR_4 - VAR_2);
}
