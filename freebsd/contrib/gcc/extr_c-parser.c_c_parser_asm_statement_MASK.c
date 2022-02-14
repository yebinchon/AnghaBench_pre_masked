
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef int c_parser ;
struct TYPE_2__ {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,char*,int ) ;

__attribute__((used)) static tree
FUNC_14 (c_parser *VAR_10)
{
  tree VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
  bool VAR_17;
  FUNC_12 (FUNC_7 (VAR_10, VAR_5));
  FUNC_5 (VAR_10);
  if (FUNC_7 (VAR_10, VAR_8))
    {
      VAR_11 = FUNC_8 (VAR_10)->value;
      FUNC_5 (VAR_10);
    }
  else if (FUNC_7 (VAR_10, VAR_6)
    || FUNC_7 (VAR_10, VAR_7))
    {
      FUNC_13 (0, "%E qualifier ignored on asm",
        FUNC_8 (VAR_10)->value);
      VAR_11 = VAR_4;
      FUNC_5 (VAR_10);
    }
  else
    VAR_11 = VAR_4;


  VAR_9 = 0;
  if (!FUNC_9 (VAR_10, VAR_2, "expected %<(%>"))
    {
      VAR_9 = 1;
      return VAR_4;
    }
  VAR_12 = FUNC_4 (VAR_10);
  if (FUNC_6 (VAR_10, VAR_0))
    {
      VAR_17 = 1;
      VAR_13 = VAR_4;
      VAR_14 = VAR_4;
      VAR_15 = VAR_4;
      goto done_asm;
    }
  if (!FUNC_9 (VAR_10, VAR_1, "expected %<:%> or %<)%>"))
    {
      VAR_9 = 1;
      FUNC_11 (VAR_10, VAR_0, ((void*)0));
      return VAR_4;
    }
  VAR_17 = 0;

  if (FUNC_6 (VAR_10, VAR_1)
      || FUNC_6 (VAR_10, VAR_0))
    VAR_13 = VAR_4;
  else
    VAR_13 = FUNC_3 (VAR_10, 0);
  if (FUNC_6 (VAR_10, VAR_0))
    {
      VAR_14 = VAR_4;
      VAR_15 = VAR_4;
      goto done_asm;
    }
  if (!FUNC_9 (VAR_10, VAR_1, "expected %<:%> or %<)%>"))
    {
      VAR_9 = 1;
      FUNC_11 (VAR_10, VAR_0, ((void*)0));
      return VAR_4;
    }

  if (FUNC_6 (VAR_10, VAR_1)
      || FUNC_6 (VAR_10, VAR_0))
    VAR_14 = VAR_4;
  else
    VAR_14 = FUNC_3 (VAR_10, 1);
  if (FUNC_6 (VAR_10, VAR_0))
    {
      VAR_15 = VAR_4;
      goto done_asm;
    }
  if (!FUNC_9 (VAR_10, VAR_1, "expected %<:%> or %<)%>"))
    {
      VAR_9 = 1;
      FUNC_11 (VAR_10, VAR_0, ((void*)0));
      return VAR_4;
    }

  VAR_15 = FUNC_2 (VAR_10);
 done_asm:
  VAR_9 = 1;
  if (!FUNC_9 (VAR_10, VAR_0, "expected %<)%>"))
    {
      FUNC_11 (VAR_10, VAR_0, ((void*)0));
      return VAR_4;
    }
  if (!FUNC_9 (VAR_10, VAR_3, "expected %<;%>"))
    FUNC_10 (VAR_10);
  VAR_16 = FUNC_1 (VAR_11, FUNC_0 (VAR_12, VAR_13, VAR_14,
            VAR_15, VAR_17));
  return VAR_16;
}
