
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int prompt ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int,int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(int VAR_2, int VAR_3)
{
 char VAR_4[100], *VAR_5, *VAR_6;
 int VAR_7, VAR_8 = 1, VAR_9 = -1;

 FUNC_7(VAR_4, "Enter lock password: ", sizeof(VAR_4));
 VAR_5 = FUNC_3(VAR_4, VAR_0);
 if (VAR_3) {
  FUNC_7(VAR_4, "Again: ", sizeof VAR_4);
  VAR_6 = FUNC_3(VAR_4, VAR_0);
  if (FUNC_6(VAR_5, VAR_6) != 0) {
   FUNC_1(VAR_1, "Passwords do not match.\n");
   VAR_8 = 0;
  }
  FUNC_0(VAR_6, FUNC_8(VAR_6));
  FUNC_2(VAR_6);
 }
 if (VAR_8) {
  if ((VAR_7 = FUNC_5(VAR_2, VAR_3, VAR_5)) == 0) {
   FUNC_1(VAR_1, "Agent %slocked.\n", VAR_3 ? "" : "un");
   VAR_9 = 0;
  } else {
   FUNC_1(VAR_1, "Failed to %slock agent: %s\n",
       VAR_3 ? "" : "un", FUNC_4(VAR_7));
  }
 }
 FUNC_0(VAR_5, FUNC_8(VAR_5));
 FUNC_2(VAR_5);
 return (VAR_9);
}
