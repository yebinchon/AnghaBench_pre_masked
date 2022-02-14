
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef enum message_verbosity { ____Placeholder_message_verbosity } message_verbosity ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char,int ) ;
 char* VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_7(enum message_verbosity VAR_3, const char *VAR_4, va_list VAR_5)
{
 if (VAR_3 <= VAR_2) {
  FUNC_4();

  FUNC_3(0);





  FUNC_1(VAR_1, FUNC_0("%s: "), VAR_0);
  FUNC_6(VAR_1, VAR_4, VAR_5);
  FUNC_2('\n', VAR_1);

  FUNC_5();
 }

 return;
}
