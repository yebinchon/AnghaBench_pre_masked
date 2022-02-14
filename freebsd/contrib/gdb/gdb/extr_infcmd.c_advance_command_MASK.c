
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char**) ;
 scalar_t__ FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_2, int VAR_3)
{
  int VAR_4 = 0;

  if (!VAR_1)
    FUNC_1 ("The program is not running.");

  if (VAR_2 == ((void*)0))
    FUNC_2 ("a location");


  if (VAR_2 != ((void*)0))
    VAR_4 = FUNC_3 (&VAR_2);



  if (VAR_0 && VAR_4 && !FUNC_4 ())
    FUNC_1 ("Asynchronous execution not supported on this target.");



  if (VAR_0 && !VAR_4 && FUNC_4 ())
    {

      FUNC_0 ();
    }

  FUNC_5 (VAR_2, VAR_3, 1);
}
