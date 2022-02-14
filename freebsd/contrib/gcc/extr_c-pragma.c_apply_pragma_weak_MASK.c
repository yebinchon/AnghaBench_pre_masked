
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (scalar_t__*,scalar_t__,int ) ;
 int FUNC_10 (scalar_t__) ;
 int * FUNC_11 (char*) ;
 int FUNC_12 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_13 (tree VAR_2, tree VAR_3)
{
  if (VAR_3)
    {
      VAR_3 = FUNC_7 (FUNC_3 (VAR_3),
       FUNC_4 (VAR_3));
      FUNC_9 (&VAR_2, FUNC_8 (FUNC_11 ("alias"),
            FUNC_8 (((void*)0), VAR_3)),
         0);
    }

  if (VAR_1 && FUNC_1 (VAR_2) && FUNC_6 (VAR_2)
      && !FUNC_2 (VAR_2)
      && FUNC_5 (FUNC_0 (VAR_2)))
    FUNC_12 (VAR_0, "applying #pragma weak %q+D after first use "
      "results in unspecified behavior", VAR_2);

  FUNC_10 (VAR_2);
}
