
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_1, int VAR_2)
{
  if (VAR_1)
    {
      char *VAR_3;
      int VAR_4 = FUNC_1 (VAR_1, &VAR_3, 10);
      if (*VAR_1 && *VAR_3 == '\0')
        {
   VAR_0 = !!VAR_4;
   return;
 }
    }
  FUNC_0 ("Illegal argument for \"set remote system-call-allowed\" command");
}
