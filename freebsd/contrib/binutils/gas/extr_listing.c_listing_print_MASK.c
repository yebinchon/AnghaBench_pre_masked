
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char*,int ) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_4 () ;
 int VAR_8 ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 int FUNC_6 (int ) ;

void
FUNC_7 (char *VAR_13)
{
  int VAR_14;

  VAR_12 = "";
  VAR_11 = "";

  if (VAR_13 == ((void*)0))
    {
      VAR_7 = VAR_10;
      VAR_14 = 1;
    }
  else
    {
      VAR_7 = FUNC_3 (VAR_13, VAR_1);
      if (VAR_7 != ((void*)0))
 VAR_14 = 0;
      else
 {
   FUNC_1 (FUNC_0("can't open %s: %s"), VAR_13, FUNC_6 (VAR_5));
   VAR_7 = VAR_10;
   VAR_14 = 1;
 }
    }

  if (VAR_8 & VAR_3)
    VAR_9 = 0;

  if (VAR_8 & VAR_2)
    FUNC_5 (VAR_13);

  if (VAR_8 & VAR_4)
    FUNC_4 ();

  if (! VAR_14)
    {
      if (FUNC_2 (VAR_7) == VAR_0)
 FUNC_1 (FUNC_0("can't close %s: %s"), VAR_13, FUNC_6 (VAR_5));
    }

  if (VAR_6)
    FUNC_2 (VAR_6);
}
