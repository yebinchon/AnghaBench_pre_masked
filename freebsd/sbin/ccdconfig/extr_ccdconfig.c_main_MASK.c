
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,int) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_7 () ;
 int VAR_3 ;
 int FUNC_8 (char*) ;

int
FUNC_9(int VAR_4, char *VAR_5[])
{
 int VAR_6, VAR_7 = 0, VAR_8 = 132;

 while ((VAR_6 = FUNC_4(VAR_4, VAR_5, "cCf:guUv")) != -1) {
  switch (VAR_6) {
  case 'c':
   VAR_8 = 132;
   ++VAR_7;
   break;

  case 'C':
   VAR_8 = 131;
   ++VAR_7;
   break;

  case 'f':
   VAR_0 = VAR_1;
   break;

  case 'g':
   VAR_8 = 130;
   break;

  case 'u':
   VAR_8 = 129;
   ++VAR_7;
   break;

  case 'U':
   VAR_8 = 128;
   ++VAR_7;
   break;

  case 'v':
   VAR_3 = 1;
   break;

  default:
   FUNC_7();
  }
 }
 VAR_4 -= VAR_2;
 VAR_5 += VAR_2;

 if (VAR_7 > 1)
  FUNC_7();

 if (FUNC_6("g_ccd") < 0) {

  if (FUNC_5("geom_ccd") < 0 || FUNC_6("g_ccd") < 0)
   FUNC_8("geom_ccd module not available!");
 }

 switch (VAR_8) {
  case 132:
  case 129:
   FUNC_3(FUNC_1(VAR_4, VAR_5, VAR_8));


  case 131:
  case 128:
   FUNC_3(FUNC_0(VAR_8));


  case 130:
   FUNC_3(FUNC_2(VAR_4, VAR_5));

 }

 return (0);
}
