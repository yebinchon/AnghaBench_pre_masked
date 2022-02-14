
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char**,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int) ;
 int VAR_4 ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_5, char **VAR_6)
{
 int VAR_7 = 0, VAR_8;
 int VAR_9;

 VAR_4 = 1;
 while ((VAR_9 = FUNC_2(VAR_5, VAR_6, "CfFnpy")) != -1) {
  switch (VAR_9) {
  case 'C':
   break;
  case 'f':
   VAR_4 = 0;
   break;
  case 'F':
   FUNC_1(5);
  case 'n':
   VAR_0 = 1;
   VAR_1 = 0;
   break;
  case 'y':
   VAR_1 = 1;
   VAR_0 = 0;
   break;

  case 'p':
   VAR_3 = 1;
   break;

  default:
   FUNC_4();
   break;
  }
 }
 VAR_5 -= VAR_2;
 VAR_6 += VAR_2;

 if (!VAR_5)
  FUNC_4();

 while (--VAR_5 >= 0) {
  FUNC_3(*VAR_6, VAR_3);
  VAR_8 = FUNC_0(*VAR_6++);
  if (VAR_8 > VAR_7)
   VAR_7 = VAR_8;
 }

 return VAR_7;
}
