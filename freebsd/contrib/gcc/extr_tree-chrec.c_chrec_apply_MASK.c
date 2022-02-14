
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_8 (unsigned int,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__,char*,...) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__,int ,int ) ;
 int FUNC_16 (int ) ;

tree
FUNC_17 (unsigned VAR_7,
      tree VAR_8,
      tree VAR_9)
{
  tree VAR_10 = FUNC_11 (VAR_8);
  tree VAR_11 = VAR_4;

  if (FUNC_4 (VAR_8)
      || FUNC_4 (VAR_9)




      || FUNC_6 (VAR_8, VAR_7))
    return VAR_4;

  if (VAR_5 && (VAR_6 & VAR_3))
    FUNC_13 (VAR_5, "(chrec_apply \n");

  if (FUNC_3 (VAR_9) == VAR_0 && FUNC_2 (VAR_10))
    VAR_9 = FUNC_5 (VAR_10, VAR_9);

  if (FUNC_12 (VAR_8))
    {

      VAR_9 = FUNC_7 (VAR_10, VAR_9, VAR_1);
      VAR_11 = FUNC_9 (VAR_10, FUNC_1 (VAR_8), VAR_9);
      if (!FUNC_14 (FUNC_0 (VAR_8)))
 VAR_11 = FUNC_10 (VAR_10, FUNC_0 (VAR_8), VAR_11);
    }

  else if (FUNC_3 (VAR_8) != VAR_2)
    VAR_11 = VAR_8;

  else if (FUNC_3 (VAR_9) == VAR_0
    && FUNC_16 (VAR_9) == 1)

    VAR_11 = FUNC_8 (VAR_7, VAR_8, VAR_9, 0);
  else
    VAR_11 = VAR_4;

  if (VAR_5 && (VAR_6 & VAR_3))
    {
      FUNC_13 (VAR_5, "  (varying_loop = %d\n", VAR_7);
      FUNC_13 (VAR_5, ")\n  (chrec = ");
      FUNC_15 (VAR_5, VAR_8, 0);
      FUNC_13 (VAR_5, ")\n  (x = ");
      FUNC_15 (VAR_5, VAR_9, 0);
      FUNC_13 (VAR_5, ")\n  (res = ");
      FUNC_15 (VAR_5, VAR_11, 0);
      FUNC_13 (VAR_5, "))\n");
    }

  return VAR_11;
}
