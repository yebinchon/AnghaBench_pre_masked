
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,int) ;
 int FUNC_5 (int ,char*,char*,...) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (int ,char*,char*,char*,char*,int *) ;
 int VAR_2 ;
 int FUNC_9 (int) ;

int
FUNC_10(int VAR_3, char *VAR_4[])
{
 char VAR_5[VAR_0];
 char *VAR_6, *VAR_7, *VAR_8;
 int VAR_9;


 VAR_6 = VAR_4[0];

 if (VAR_3 != 2) {
  FUNC_5(VAR_2, "bectl %s: wrong number of arguments\n", VAR_6);
  return (FUNC_9(0));
 }

 VAR_8 = VAR_4[1];


 if ((VAR_9 = FUNC_3(VAR_8)) == -1) {
  FUNC_5(VAR_2, "bectl %s: failed to locate BE by '%s'\n", VAR_6,
      VAR_8);
  return (1);
 }

 FUNC_4(&VAR_5, VAR_0);
 VAR_7 = FUNC_7(VAR_9);
 if (FUNC_8(0, "name", VAR_7, "path", VAR_5, ((void*)0)) != VAR_9) {
  FUNC_6(VAR_7);
  FUNC_5(VAR_2,
      "bectl %s: failed to get path for jail requested by '%s'\n",
      VAR_6, VAR_8);
  return (1);
 }

 FUNC_6(VAR_7);

 if (FUNC_0(VAR_1, VAR_5, ((void*)0)) != 0) {
  FUNC_5(VAR_2, "bectl %s: jail requested by '%s' not a BE\n",
      VAR_6, VAR_8);
  return (1);
 }

 FUNC_2(VAR_5, VAR_9);
 FUNC_1(VAR_1, VAR_8, 0);

 return (0);
}
