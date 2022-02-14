
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void
FUNC_8 (tree VAR_3, tree VAR_4, tree VAR_5)
{
  tree VAR_6 = FUNC_6 ("sentinel", VAR_3);

  if (VAR_6)
    {

      while (VAR_5 && VAR_4)
      {
 VAR_5 = FUNC_1 (VAR_5);
 VAR_4 = FUNC_1 (VAR_4);
      }

      if (VAR_5 || !VAR_4)
 FUNC_7 (VAR_0,
   "not enough variable arguments to fit a sentinel");
      else
 {
   tree VAR_7, VAR_8;
   unsigned VAR_9 = 0;

   if (FUNC_4 (VAR_6))
     {
       tree VAR_10 = FUNC_4 (FUNC_4 (VAR_6));
       VAR_9 = FUNC_2 (VAR_10);
     }

   VAR_7 = VAR_8 = VAR_4;


   while (VAR_9 > 0 && FUNC_1 (VAR_8))
     {
       VAR_9--;
       VAR_8 = FUNC_1 (VAR_8);
     }
   if (VAR_9 > 0)
     {
       FUNC_7 (VAR_0,
         "not enough variable arguments to fit a sentinel");
       return;
     }


   while (FUNC_1 (VAR_8))
     {
       VAR_8 = FUNC_1 (VAR_8);
       VAR_7 = FUNC_1 (VAR_7);
     }


   if ((!FUNC_0 (FUNC_3 (FUNC_4 (VAR_7)))
        || !FUNC_5 (FUNC_4 (VAR_7)))





       && (VAR_2
    || VAR_1 != FUNC_4 (VAR_7)))
     FUNC_7 (VAR_0, "missing sentinel in function call");
 }
    }
}
