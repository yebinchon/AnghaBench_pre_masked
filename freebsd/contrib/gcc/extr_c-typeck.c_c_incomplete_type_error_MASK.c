
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int * FUNC_3 (int ) ;
 char* FUNC_4 (scalar_t__) ;

 int VAR_3 ;

 int FUNC_5 (char*,...) ;
 int FUNC_6 () ;

void
FUNC_7 (tree VAR_4, tree VAR_5)
{
  const char *VAR_6;


  if (FUNC_0 (VAR_5) == VAR_0)
    return;

  if (VAR_4 != 0 && (FUNC_0 (VAR_4) == VAR_3
       || FUNC_0 (VAR_4) == VAR_2))
    FUNC_5 ("%qD has an incomplete type", VAR_4);
  else
    {
    retry:


      switch (FUNC_0 (VAR_5))
 {
 case 130:
   VAR_6 = "struct";
   break;

 case 129:
   VAR_6 = "union";
   break;

 case 131:
   VAR_6 = "enum";
   break;

 case 128:
   FUNC_5 ("invalid use of void expression");
   return;

 case 132:
   if (FUNC_2 (VAR_5))
     {
       if (FUNC_3 (FUNC_2 (VAR_5)) == ((void*)0))
  {
    FUNC_5 ("invalid use of flexible array member");
    return;
  }
       VAR_5 = FUNC_1 (VAR_5);
       goto retry;
     }
   FUNC_5 ("invalid use of array with unspecified bounds");
   return;

 default:
   FUNC_6 ();
 }

      if (FUNC_0 (FUNC_4 (VAR_5)) == VAR_1)
 FUNC_5 ("invalid use of undefined type %<%s %E%>",
        VAR_6, FUNC_4 (VAR_5));
      else

 FUNC_5 ("invalid use of incomplete typedef %qD", FUNC_4 (VAR_5));
    }
}
