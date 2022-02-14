
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (char*,scalar_t__,...) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_17 (tree VAR_5, tree VAR_6)
{
  tree VAR_7 = FUNC_8 (VAR_5);
  tree VAR_8 = FUNC_2 (VAR_5);
  tree VAR_9
    = FUNC_6 (VAR_5) ? VAR_1
    : FUNC_7 (VAR_5) ? VAR_2
    : VAR_3;
  tree VAR_10 = VAR_0;
  tree VAR_11;

  FUNC_14 (!VAR_4 && VAR_7);

  VAR_11 = FUNC_16 (VAR_6, VAR_8, 0, 0);
  if (VAR_11)
    {
      if (FUNC_15 (VAR_11))
 VAR_11 = FUNC_4 (VAR_11);

      if (FUNC_3 (VAR_11) && FUNC_1 (VAR_11) == VAR_6)
         ;
      else
 VAR_11 = VAR_0;
    }

  FUNC_12 (VAR_7, FUNC_9 (VAR_5));

  if (FUNC_15 (VAR_7))
    VAR_10 = VAR_7;

  if (! VAR_11)
    ;
  else if (FUNC_15 (VAR_11))
    {
      if (VAR_10)

                                                           ;
      else
 {
   FUNC_13 ("%q+D invalid in %q#T", VAR_5, VAR_6);
   FUNC_13 ("  because of local method %q+#D with same name",
   FUNC_4 (VAR_11));
   return;
 }
    }
  else if (!FUNC_0 (VAR_11))
    {
      FUNC_13 ("%q+D invalid in %q#T", VAR_5, VAR_6);
      FUNC_13 ("  because of local member %q+#D with same name", VAR_11);
      return;
    }


  if (VAR_10)
    for (; VAR_10; VAR_10 = FUNC_5 (VAR_10))
      {
 FUNC_10 (VAR_6, FUNC_4 (VAR_10), VAR_5);
 FUNC_11 (VAR_6, FUNC_4 (VAR_10), VAR_9);
      }
  else
    FUNC_11 (VAR_6, VAR_7, VAR_9);
}
