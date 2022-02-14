
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct scope_binding {scalar_t__ value; int type; } ;
typedef int cxx_binding ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_7 (struct scope_binding*,int *,int) ;
 int * FUNC_8 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_13 (tree VAR_3, tree VAR_4,
      struct scope_binding *VAR_5, int VAR_6)
{

  tree VAR_7 = VAR_0;

  tree VAR_8 = VAR_0;
  tree VAR_9 = VAR_0;
  tree VAR_10;
  FUNC_11 (VAR_1);

  VAR_4 = FUNC_2 (VAR_4);
  while (VAR_4 && VAR_5->value != VAR_2)
    {
      cxx_binding *VAR_11 =
 FUNC_8 (FUNC_1 (VAR_4), VAR_3);
      VAR_7 = FUNC_12 (VAR_4, VAR_0, VAR_7);
      if (VAR_11)

 FUNC_7 (VAR_5, VAR_11, VAR_6);





      for (VAR_10 = FUNC_0 (VAR_4); VAR_10;
    VAR_10 = FUNC_4 (VAR_10))

 if (!FUNC_5 (VAR_10))
   {





     if (FUNC_9 (VAR_4, FUNC_6 (VAR_10))
  && !FUNC_10 (FUNC_6 (VAR_10), VAR_7)
  && !FUNC_10 (FUNC_6 (VAR_10), VAR_8))
       VAR_8 = FUNC_12 (FUNC_6 (VAR_10), VAR_0, VAR_8);
     else if ((!VAR_5->value && !VAR_5->type)
       && !FUNC_10 (FUNC_6 (VAR_10), VAR_7)
       && !FUNC_10 (FUNC_6 (VAR_10), VAR_8)
       && !FUNC_10 (FUNC_6 (VAR_10), VAR_9))
       VAR_9 = FUNC_12 (FUNC_6 (VAR_10), VAR_0,
          VAR_9);
   }
      if (VAR_8)
 {
   VAR_4 = FUNC_6 (VAR_8);
   VAR_8 = FUNC_4 (VAR_8);
 }
      else if (VAR_9
        && (!VAR_5->value && !VAR_5->type))
 {
   VAR_4 = FUNC_6 (VAR_9);
   VAR_8 = FUNC_4 (VAR_9);
   VAR_9 = VAR_0;
 }
      else
 VAR_4 = VAR_0;
    }
  FUNC_3 (VAR_1, VAR_5->value != VAR_2);
}
