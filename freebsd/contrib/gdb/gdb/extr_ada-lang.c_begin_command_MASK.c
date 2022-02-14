
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;
struct cleanup {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct minimal_symbol*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct minimal_symbol* FUNC_7 (int ,int *,int *) ;
 struct cleanup* FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9 (char *VAR_3, int VAR_4)
{
  struct minimal_symbol *VAR_5;
  CORE_ADDR VAR_6;
  char VAR_7[1024];
  struct cleanup *VAR_8 = FUNC_8 (VAR_2, ((void*)0));
  VAR_1 = 2;


  if (!FUNC_5 () && !FUNC_6 ())
    FUNC_3 ("No symbol table is loaded.  Use the \"file\" command.");
  VAR_5 = FUNC_7 (VAR_0, ((void*)0), ((void*)0));

  if (VAR_5 != ((void*)0))
    {
      VAR_6 = FUNC_0 (VAR_5);
      if (VAR_6 == 0)
 FUNC_3 ("Invalid address for Ada main program name.");


      FUNC_4 (VAR_6, VAR_7);


      FUNC_2 ("tbreak ", VAR_7, 0);
      FUNC_2 ("run ", VAR_3, 0);
    }
  else
    {
      FUNC_2 ("tbreak adainit", 0);
      FUNC_2 ("run ", VAR_3, 0);
      FUNC_2 ("up", 0);
      FUNC_2 ("tbreak +2", 0);
      FUNC_2 ("continue", 0);
      FUNC_2 ("step", 0);
    }

  FUNC_1 (VAR_8);
}
