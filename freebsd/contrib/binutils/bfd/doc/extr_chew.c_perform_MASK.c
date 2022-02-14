
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dict_type ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int ,char**) ;
 int VAR_1 ;
 int FUNC_7 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_8 ()
{
  VAR_4 = VAR_2;

  while (FUNC_1 (VAR_1, VAR_0))
    {

      if (FUNC_4 (VAR_1, VAR_0))
 {
   char *VAR_6;
   dict_type *VAR_7;

   (void) FUNC_6 (FUNC_0 (VAR_1, VAR_0), &VAR_6);

   VAR_7 = FUNC_5 (VAR_6);

   if (VAR_7)
     {
       FUNC_2 (VAR_7);
     }
   else
     {
       if (VAR_5)
  FUNC_3 (VAR_3, "warning, %s is not recognised\n", VAR_6);
       FUNC_7 ();
     }

 }
      else
 FUNC_7 ();
    }
}
