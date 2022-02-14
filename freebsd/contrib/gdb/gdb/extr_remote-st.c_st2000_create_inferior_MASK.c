
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7 (char *VAR_2, char *VAR_3, char **VAR_4)
{
  int VAR_5;

  if (VAR_3 && *VAR_3)
    FUNC_2 ("Can't pass arguments to remote STDEBUG process");

  if (VAR_2 == 0 || VAR_1 == 0)
    FUNC_2 ("No executable file specified");

  VAR_5 = (int) FUNC_0 (VAR_1);




  FUNC_1 ();


  FUNC_3 ();



  FUNC_6 ();


  FUNC_5 ();



  FUNC_4 ((CORE_ADDR) VAR_5, VAR_0, 0);
}
