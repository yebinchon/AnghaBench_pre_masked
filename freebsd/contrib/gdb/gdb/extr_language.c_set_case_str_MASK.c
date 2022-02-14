
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (char*,char*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (void)
{
   char *VAR_4 = ((void*)0), *VAR_5 = "";

   if (VAR_0==VAR_1)
      VAR_5 = "auto; currently ";

   switch (VAR_3)
   {
   case 128:
     VAR_4 = "on";
     break;
   case 129:
     VAR_4 = "off";
     break;
   default:
     FUNC_1 ("Unrecognized case-sensitive setting.");
   }

   FUNC_2 (VAR_2);
   VAR_2 = FUNC_0 (VAR_5, VAR_4, ((void*)0));
}
