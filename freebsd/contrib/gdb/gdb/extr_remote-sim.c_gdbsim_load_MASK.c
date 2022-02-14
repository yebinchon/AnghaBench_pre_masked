
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,char*,int *,int) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void
FUNC_4 (char *VAR_5, int VAR_6)
{
  if (FUNC_3 ())
    FUNC_1 ("gdbsim_load: prog \"%s\"\n", VAR_5);

  VAR_2 = VAR_3;




  if (FUNC_2 (VAR_1, VAR_5, ((void*)0), VAR_6) == VAR_0)
    FUNC_0 ("unable to load program");




  VAR_4 = 1;
}
