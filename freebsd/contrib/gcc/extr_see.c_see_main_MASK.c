
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char*,...) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9 (void)
{
  bool VAR_6 = 0;
  int VAR_7 = 0;


  FUNC_6 ();


  VAR_6 = FUNC_8 ();

  if (VAR_6)
    {
      FUNC_2 ();


      FUNC_7 ();


      FUNC_4 ();


      FUNC_3 ();

      if (VAR_0)
 {

   FUNC_0 (VAR_0, "see_pre_extension_hash:\n");
   FUNC_1 (VAR_3, VAR_4,
          ((void*)0));

   for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
     {
        if (VAR_2[VAR_7])


  {
    FUNC_0 (VAR_0,
      "Searching register properties in bb %d\n", VAR_7);
    FUNC_1 (VAR_2[VAR_7],
       VAR_5, ((void*)0));
  }
     }
 }
    }


  FUNC_5 ();
}
