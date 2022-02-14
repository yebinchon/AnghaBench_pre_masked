
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void
FUNC_8 (int VAR_4)
{
  int VAR_5;

  if (! VAR_4 && VAR_2 != ((void*)0))
    {
      FUNC_2 (FUNC_0(".ln pseudo-op inside .def/.endef: ignored."));
      FUNC_3 ();
      return;
    }

  VAR_5 = FUNC_5 ();



  if (VAR_4 || VAR_1 == ((void*)0))
    FUNC_7 ((char *) ((void*)0), VAR_5 - 1);
  else
    FUNC_1 (VAR_3, FUNC_4 (), VAR_5);


  {
    extern int VAR_6;

    if (VAR_6)
      {
 if (! VAR_4)
   VAR_5 += VAR_0 - 1;
 FUNC_6 (VAR_5);
      }
  }


  FUNC_3 ();
}
