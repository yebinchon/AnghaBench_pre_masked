
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 () ;

void
FUNC_5 (int VAR_1)
{
  FUNC_0 ();

  if (VAR_0)
    {
      if (!VAR_1
          || FUNC_3 ("A program is being debugged already.  Kill it? "))
 FUNC_4 ();
      else
 FUNC_1 ("Program not killed.");
    }




  if (VAR_0)
    FUNC_2 ();
}
