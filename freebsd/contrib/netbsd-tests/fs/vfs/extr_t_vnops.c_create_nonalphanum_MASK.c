
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int atf_tc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_8(const atf_tc_t *VAR_3, const char *VAR_4)
{
 char VAR_5[64];
 int VAR_6;

 FUNC_0(FUNC_3(VAR_4));

 for (VAR_6 = 0; VAR_6 < 256; VAR_6++) {
  int VAR_7;
  FUNC_7(VAR_5, sizeof(VAR_5), "%c", VAR_6);
  VAR_7 = FUNC_5(VAR_5, VAR_2|VAR_0|VAR_1, 0666);
  if (VAR_7 == -1)
   continue;
  FUNC_1(FUNC_4(VAR_7), "%d", VAR_7);
  FUNC_1(FUNC_6(VAR_5), "%s", VAR_5);
 }
 FUNC_2("\n");

 FUNC_3("/");
}
