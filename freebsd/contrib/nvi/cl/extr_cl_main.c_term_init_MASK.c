
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (char*,int ,int*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(char *VAR_2, char *VAR_3)
{
 int VAR_4;


 FUNC_2(VAR_3, VAR_0, &VAR_4);
 switch (VAR_4) {
 case -1:
  (void)FUNC_1(VAR_1,
      "%s: No terminal database found\n", VAR_2);
  FUNC_0 (1);
 case 0:
  (void)FUNC_1(VAR_1,
      "%s: %s: unknown terminal type\n", VAR_2, VAR_3);
  FUNC_0 (1);
 }
}
