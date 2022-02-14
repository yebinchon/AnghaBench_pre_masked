
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8 (char *VAR_1, char *VAR_2, char **VAR_3)
{
  int VAR_4;

  if (VAR_2 && *VAR_2)
    FUNC_3 ("Can't pass arguments to remote E7000DEBUG process");

  if (VAR_1 == 0 || VAR_0 == 0)
    FUNC_3 ("No executable file specified");

  VAR_4 = (int) FUNC_1 (VAR_0);
  FUNC_2 ();


  FUNC_4 ();



  FUNC_7 ();


  FUNC_6 ();


  FUNC_5 ((CORE_ADDR) VAR_4, -1, 0);
}
