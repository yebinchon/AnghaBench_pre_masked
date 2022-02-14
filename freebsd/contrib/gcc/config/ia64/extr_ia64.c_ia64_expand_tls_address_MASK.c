
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum tls_model { ____Placeholder_tls_model } tls_model ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,scalar_t__,int,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,int ,int ,int ,int ,int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (scalar_t__,int ,int ) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ,scalar_t__) ;
 int FUNC_23 () ;

__attribute__((used)) static rtx
FUNC_24 (enum tls_model VAR_8, rtx VAR_9, rtx VAR_10,
    rtx VAR_11, HOST_WIDE_INT VAR_12)
{
  rtx VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
  rtx VAR_19 = VAR_9;
  HOST_WIDE_INT VAR_20, VAR_21;

  switch (VAR_8)
    {
    case 131:
      FUNC_23 ();

      VAR_13 = FUNC_15 (VAR_4);
      FUNC_2 (FUNC_11 (VAR_13, VAR_10));

      VAR_14 = FUNC_15 (VAR_4);
      FUNC_2 (FUNC_12 (VAR_14, VAR_10));

      VAR_15 = FUNC_4 (FUNC_19 (), VAR_1,
      VAR_0, VAR_4, 2, VAR_13,
      VAR_4, VAR_14, VAR_4);

      VAR_18 = FUNC_20 ();
      FUNC_5 ();

      if (FUNC_1 (VAR_9) != VAR_4)
 VAR_9 = VAR_15;
      FUNC_3 (VAR_18, VAR_9, VAR_15, VAR_10);
      break;

    case 129:




      FUNC_23 ();

      VAR_13 = FUNC_15 (VAR_4);
      FUNC_2 (FUNC_11 (VAR_13, VAR_10));

      VAR_14 = VAR_7;

      VAR_15 = FUNC_4 (FUNC_19 (), VAR_1,
      VAR_0, VAR_4, 2, VAR_13,
      VAR_4, VAR_14, VAR_4);

      VAR_18 = FUNC_20 ();
      FUNC_5 ();

      VAR_16 = FUNC_17 (VAR_4, FUNC_16 (1, VAR_7),
    VAR_6);
      VAR_17 = FUNC_15 (VAR_4);
      FUNC_3 (VAR_18, VAR_17, VAR_15, VAR_16);

      if (!FUNC_22 (VAR_9, VAR_4))
 VAR_9 = FUNC_15 (VAR_4);
      if (VAR_5)
 {
   FUNC_2 (FUNC_12 (VAR_9, VAR_10));
   FUNC_2 (FUNC_10 (VAR_9, VAR_17, VAR_9));
 }
      else
 FUNC_2 (FUNC_8 (VAR_9, VAR_10, VAR_17));
      break;

    case 130:
      VAR_20 = ((VAR_12 & 0x3fff) ^ 0x2000) - 0x2000;
      VAR_21 = VAR_12 - VAR_20;

      VAR_10 = FUNC_21 (VAR_10, VAR_21);
      VAR_12 = VAR_20;

      VAR_17 = FUNC_15 (VAR_4);
      FUNC_2 (FUNC_13 (VAR_17, VAR_10));

      if (!FUNC_22 (VAR_9, VAR_4))
 VAR_9 = FUNC_15 (VAR_4);
      FUNC_2 (FUNC_10 (VAR_9, VAR_17, FUNC_18 ()));
      break;

    case 128:
      if (!FUNC_22 (VAR_9, VAR_4))
 VAR_9 = FUNC_15 (VAR_4);

      VAR_10 = VAR_11;
      VAR_12 = 0;
      if (VAR_5)
 {
   FUNC_2 (FUNC_13 (VAR_9, VAR_10));
   FUNC_2 (FUNC_10 (VAR_9, VAR_9, FUNC_18 ()));
 }
      else
 FUNC_2 (FUNC_9 (VAR_9, VAR_10, FUNC_18 ()));
      break;

    default:
      FUNC_7 ();
    }

  if (VAR_12)
    VAR_9 = FUNC_6 (VAR_4, VAR_3, VAR_9, FUNC_0 (VAR_12),
          VAR_19, 1, VAR_2);
  if (VAR_19 == VAR_9)
    return VAR_1;
  if (FUNC_1 (VAR_19) == VAR_4)
    return VAR_9;
  return FUNC_14 (FUNC_1 (VAR_19), VAR_9);
}
