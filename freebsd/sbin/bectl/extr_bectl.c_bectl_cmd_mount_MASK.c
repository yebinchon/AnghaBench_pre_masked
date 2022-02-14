
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,int,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,char*,char*) ;
 int VAR_3 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(int VAR_4, char *VAR_5[])
{
 char VAR_6[VAR_0];
 char *VAR_7, *VAR_8;
 int VAR_9, VAR_10;


 VAR_10 = VAR_1;
 if (VAR_4 < 2) {
  FUNC_1(VAR_3, "bectl mount: missing argument(s)\n");
  return (FUNC_3(0));
 }

 if (VAR_4 > 3) {
  FUNC_1(VAR_3, "bectl mount: too many arguments\n");
  return (FUNC_3(0));
 }

 VAR_7 = VAR_5[1];
 VAR_8 = ((VAR_4 == 3) ? VAR_5[2] : ((void*)0));

 VAR_9 = FUNC_0(VAR_2, VAR_7, VAR_8, VAR_10, VAR_6);

 switch (VAR_9) {
 case 128:
  FUNC_2("successfully mounted %s at %s\n", VAR_7, VAR_6);
  break;
 default:
  FUNC_1(VAR_3,
      (VAR_4 == 3) ? "failed to mount bootenv %s at %s\n" :
      "failed to mount bootenv %s at temporary path %s\n",
      VAR_7, VAR_8);
 }

 return (VAR_9);
}
