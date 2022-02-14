
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ATTRIBUTE_UNUSED_LABEL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,char*,int,int) ;
 int VAR_2 ;
 int FUNC_5 (int,char*,int,int,int ) ;
 int FUNC_6 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8 (int VAR_5, char *VAR_6, int VAR_7, int VAR_8)
{
  if (VAR_4 == VAR_1)
    {
      if (VAR_6 != ((void*)0))
 while (VAR_7-- > 0)
   if (*VAR_6++ != '\0')
     {
       FUNC_1 (FUNC_0("ignoring fill value in absolute section"));
       break;
     }
      VAR_6 = ((void*)0);
      VAR_7 = 0;
    }
  if (VAR_5 != 0 && !VAR_3)
    {
      if (VAR_6 == ((void*)0))
 {
   if (FUNC_7 (VAR_4))
     FUNC_3 (VAR_5, VAR_8);
   else
     FUNC_2 (VAR_5, 0, VAR_8);
 }
      else if (VAR_7 <= 1)
 FUNC_2 (VAR_5, *VAR_6, VAR_8);
      else
 FUNC_4 (VAR_5, VAR_6, VAR_7, VAR_8);
    }





  FUNC_0 (VAR_4, VAR_5 - VAR_0);
}
