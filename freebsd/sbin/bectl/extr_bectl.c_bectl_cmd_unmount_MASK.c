
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (int,char**,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(int VAR_5, char *VAR_6[])
{
 char *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11;


 VAR_8 = VAR_6[0];

 VAR_10 = 0;
 while ((VAR_11 = FUNC_2(VAR_5, VAR_6, "f")) != -1) {
  switch (VAR_11) {
  case 'f':
   VAR_10 |= VAR_0;
   break;
  default:
   FUNC_1(VAR_4, "bectl %s: unknown option '-%c'\n",
       VAR_8, VAR_3);
   return (FUNC_3(0));
  }
 }

 VAR_5 -= VAR_2;
 VAR_6 += VAR_2;

 if (VAR_5 != 1) {
  FUNC_1(VAR_4, "bectl %s: wrong number of arguments\n", VAR_8);
  return (FUNC_3(0));
 }

 VAR_7 = VAR_6[0];

 VAR_9 = FUNC_0(VAR_1, VAR_7, VAR_10);

 switch (VAR_9) {
 case 128:
  break;
 default:
  FUNC_1(VAR_4, "failed to unmount bootenv %s\n", VAR_7);
 }

 return (VAR_9);
}
