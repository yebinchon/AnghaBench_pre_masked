
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_7, int VAR_8)
{
   if (FUNC_0 (VAR_3, "on"))
   {
      VAR_6 = VAR_5;
      VAR_0 = VAR_2;
   }
   else if (FUNC_0 (VAR_3, "off"))
   {
      VAR_6 = VAR_4;
      VAR_0 = VAR_2;
   }
   else if (FUNC_0 (VAR_3, "auto"))
   {
      VAR_0 = VAR_1;
      FUNC_2 ();


      return;
   }
   else
   {
      FUNC_4 ("Unrecognized case-sensitive setting: \"%s\"", VAR_3);
   }
   FUNC_1();
   FUNC_3 ((char *) ((void*)0), VAR_8);
}
