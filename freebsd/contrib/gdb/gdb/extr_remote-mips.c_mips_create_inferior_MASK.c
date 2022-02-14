
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_2, char *VAR_3, char **VAR_4)
{
  CORE_ADDR VAR_5;

  if (VAR_3 && *VAR_3)
    {
      FUNC_5 ("Can't pass arguments to remote MIPS board; arguments ignored.");


      FUNC_2 ("set args", 0);
    }

  if (VAR_2 == 0 || VAR_1 == 0)
    FUNC_1 ("No executable file specified");

  VAR_5 = (CORE_ADDR) FUNC_0 (VAR_1);

  FUNC_3 ();



  FUNC_4 (VAR_5, VAR_0, 0);
}
