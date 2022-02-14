
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum block_op_methods { ____Placeholder_block_op_methods } block_op_methods ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int ,int) ;
 int FUNC_9 (int ,int ,int ,unsigned int) ;
 scalar_t__ FUNC_10 (int ,int ,int ,unsigned int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ,scalar_t__,unsigned int,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;

rtx
FUNC_16 (rtx VAR_4, rtx VAR_5, rtx VAR_6, enum block_op_methods VAR_7)
{
  bool VAR_8;
  rtx VAR_9 = 0;
  unsigned int VAR_10;

  switch (VAR_7)
    {
    case 130:
    case 128:
      VAR_8 = 1;
      break;

    case 131:
      VAR_8 = FUNC_7 ();



      VAR_2;
      break;

    case 129:
      VAR_8 = 0;
      break;

    default:
      FUNC_12 ();
    }

  VAR_10 = FUNC_4 (FUNC_2 (VAR_4), FUNC_2 (VAR_5));

  FUNC_11 (FUNC_3 (VAR_4));
  FUNC_11 (FUNC_3 (VAR_5));
  FUNC_11 (VAR_6);



  VAR_4 = FUNC_6 (VAR_4, VAR_0, 0);
  VAR_5 = FUNC_6 (VAR_5, VAR_0, 0);



  if (FUNC_0 (VAR_6) == VAR_1)
    {
      if (FUNC_1 (VAR_6) == 0)
 return 0;

      VAR_4 = FUNC_15 (VAR_4);
      VAR_5 = FUNC_15 (VAR_5);
      FUNC_14 (VAR_4, VAR_6);
      FUNC_14 (VAR_5, VAR_6);
    }

  if (FUNC_0 (VAR_6) == VAR_1 && FUNC_5 (FUNC_1 (VAR_6), VAR_10))
    FUNC_13 (VAR_4, VAR_5, FUNC_1 (VAR_6), VAR_10, 0);
  else if (FUNC_10 (VAR_4, VAR_5, VAR_6, VAR_10))
    ;
  else if (VAR_8)
    VAR_9 = FUNC_8 (VAR_4, VAR_5, VAR_6,
       VAR_7 == 128);
  else
    FUNC_9 (VAR_4, VAR_5, VAR_6, VAR_10);

  if (VAR_7 == 131)
    VAR_3;

  return VAR_9;
}
