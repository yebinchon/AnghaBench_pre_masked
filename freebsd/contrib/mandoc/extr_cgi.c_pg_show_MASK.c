
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct req {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int *,char const*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct req*,int ) ;
 int FUNC_8 (struct req*,char const*) ;
 char* FUNC_9 (char const*,char) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (struct req*,char*) ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static void
FUNC_13(struct req *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 const char *VAR_4;

 if ((VAR_4 = FUNC_9(VAR_2, '/')) == ((void*)0)) {
  FUNC_3(
      "You did not specify a page to show.");
  return;
 }
 VAR_3 = FUNC_2(VAR_2, VAR_4 - VAR_2);
 VAR_4++;

 if ( ! FUNC_11(VAR_1, VAR_3)) {
  FUNC_3(
      "You specified an invalid manpath.");
  FUNC_1(VAR_3);
  return;
 }







 if (FUNC_0(VAR_3) == -1) {
  FUNC_12("chdir %s", VAR_3);
  FUNC_4();
  FUNC_1(VAR_3);
  return;
 }
 FUNC_1(VAR_3);

 if ( ! FUNC_10(VAR_4)) {
  FUNC_3(
      "You specified an invalid manual file.");
  return;
 }

 FUNC_5(200, ((void*)0), VAR_4);
 FUNC_7(VAR_1, VAR_0);
 FUNC_8(VAR_1, VAR_4);
 FUNC_6();
}
