
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, char *VAR_3[])
{
 char *VAR_4, *VAR_5;
 int VAR_6;

 if (VAR_2 < 3) {
  FUNC_1(VAR_1, "bectl rename: missing argument\n");
  return (FUNC_2(0));
 }

 if (VAR_2 > 3) {
  FUNC_1(VAR_1, "bectl rename: too many arguments\n");
  return (FUNC_2(0));
 }

 VAR_5 = VAR_3[1];
 VAR_4 = VAR_3[2];

 VAR_6 = FUNC_0(VAR_0, VAR_5, VAR_4);

 switch (VAR_6) {
 case 128:
  break;
 default:
  FUNC_1(VAR_1, "failed to rename bootenv %s to %s\n",
      VAR_5, VAR_4);
 }

 return (0);
}
