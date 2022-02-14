
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (char*,char*) ;

int
FUNC_7(int VAR_3, char *VAR_4[])
{
 int VAR_5, VAR_6;

 while ((VAR_5 = FUNC_1(VAR_3, VAR_4, "pv")) != -1)
  switch(VAR_5) {
  case 'p':
   VAR_1 = 1;
   break;
  case 'v':
   VAR_2 = 1;
   break;
  case '?':
  default:
   FUNC_5();
  }
 VAR_3 -= VAR_0;
 VAR_4 += VAR_0;

 if (VAR_3 == 0)
  FUNC_5();

 for (VAR_6 = 0; *VAR_4; VAR_4++) {
  if (FUNC_4(*VAR_4) < 0) {
   FUNC_6("%s", *VAR_4);
   VAR_6 = 1;
  } else {
   if (VAR_2)
    FUNC_2("%s\n", *VAR_4);
   if (VAR_1)
    VAR_6 |= FUNC_3(*VAR_4);
  }
 }

 FUNC_0(VAR_6);
}
