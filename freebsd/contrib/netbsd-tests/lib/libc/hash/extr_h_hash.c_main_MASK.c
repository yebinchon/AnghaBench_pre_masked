
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_5, char **VAR_6)
{
 int VAR_7;

 while ((VAR_7 = FUNC_1(VAR_5, VAR_6, "mrst")) != -1)
  switch (VAR_7) {
  case 'm':
   VAR_0 = 1;
   break;
  case 'r':
   VAR_2 = 1;
   break;
  case 's':
   VAR_3 = 1;
   break;
  case 't':
   VAR_4 = 1;
   break;
  case '?':
  default:
   FUNC_4();
  }
 VAR_5 -= VAR_1;
 VAR_6 += VAR_1;
 if (VAR_5 > 0)
  FUNC_4();

 if (!(VAR_0 || VAR_3))
  VAR_0 = 1;

 if ((VAR_0 ^ VAR_3) != 1)
  FUNC_4();

 if ((VAR_4 ^ VAR_2) != 1)
  FUNC_4();

 if (VAR_4)
  FUNC_3();

 if (VAR_2)
  FUNC_2();

 FUNC_0(0);

}
