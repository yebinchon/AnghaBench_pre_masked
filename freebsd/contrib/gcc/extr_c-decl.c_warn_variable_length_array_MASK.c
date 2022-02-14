
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_4, tree VAR_5)
{
  int VAR_6 = !VAR_1 && VAR_2 && VAR_3 != 0;
  int VAR_7 = FUNC_0 (VAR_5);

  if (VAR_6)
    {
      if (VAR_7)
 {
   if (VAR_4)
     FUNC_1 ("ISO C90 forbids array %qs whose size "
       "can%'t be evaluated",
       VAR_4);
   else
     FUNC_1 ("ISO C90 forbids array whose size "
       "can%'t be evaluated");
 }
      else
 {
   if (VAR_4)
     FUNC_1 ("ISO C90 forbids variable length array %qs",
       VAR_4);
   else
     FUNC_1 ("ISO C90 forbids variable length array");
 }
    }
  else if (VAR_3 > 0)
    {
      if (VAR_7)
        {
   if (VAR_4)
     FUNC_2 (VAR_0,
       "the size of array %qs can"
       "%'t be evaluated", VAR_4);
   else
     FUNC_2 (VAR_0,
       "the size of array can %'t be evaluated");
 }
      else
 {
   if (VAR_4)
     FUNC_2 (VAR_0,
       "variable length array %qs is used",
       VAR_4);
   else
     FUNC_2 (VAR_0,
       "variable length array is used");
 }
    }
}
