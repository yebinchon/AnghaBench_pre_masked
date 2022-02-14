
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hostname ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (int,char**,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,int) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 () ;

int
FUNC_10(int VAR_2, char *VAR_3[])
{
 int VAR_4, VAR_5, VAR_6;
 char *VAR_7, VAR_8[VAR_0];

 VAR_5 = 0;
 VAR_6 = 0;
 while ((VAR_4 = FUNC_3(VAR_2, VAR_3, "fsd")) != -1)
  switch (VAR_4) {
  case 'f':





   break;
  case 's':
   VAR_5 = 1;
   break;
  case 'd':
   VAR_6 = 1;
   break;
  case '?':
  default:
   FUNC_9();
  }
 VAR_2 -= VAR_1;
 VAR_3 += VAR_1;

 if (VAR_2 > 1 || (VAR_5 && VAR_6))
  FUNC_9();

 if (*VAR_3) {
  if (FUNC_5(*VAR_3, (int)FUNC_8(*VAR_3)))
   FUNC_0(1, "sethostname");
 } else {
  if (FUNC_2(VAR_8, (int)sizeof(VAR_8)))
   FUNC_0(1, "gethostname");
  if (VAR_5) {
   VAR_7 = FUNC_6(VAR_8, '.');
   if (VAR_7 != ((void*)0))
    *VAR_7 = '\0';
  } else if (VAR_6) {
   VAR_7 = FUNC_6(VAR_8, '.');
   if (VAR_7 != ((void*)0))
    FUNC_7(VAR_8, ++VAR_7);
  }
  (void)FUNC_4("%s\n", VAR_8);
 }
 FUNC_1(0);
}
