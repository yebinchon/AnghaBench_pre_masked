
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum tls_model { ____Placeholder_tls_model } tls_model ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int *,int ,int ,int ) ;
 int VAR_11 ;

__attribute__((used)) static rtx
FUNC_17 (rtx VAR_12)
{
  rtx VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
  enum tls_model VAR_20;

  VAR_15 = FUNC_10 (VAR_2, VAR_1);
  VAR_16 = FUNC_10 (VAR_2, VAR_1 + 1);

  VAR_20 = FUNC_0 (VAR_12);



  if (!VAR_8)
    VAR_20 = 128;

  switch (VAR_20)
    {
    case 131:
      VAR_14 = FUNC_14 (VAR_12, VAR_5, VAR_15);
      VAR_13 = FUNC_7 (VAR_2);
      FUNC_2 (VAR_14, VAR_13, VAR_15, VAR_12);
      break;

    case 129:
      VAR_14 = FUNC_14 (VAR_12, VAR_6, VAR_15);
      VAR_17 = FUNC_7 (VAR_2);



      VAR_19 = FUNC_11 (VAR_2, FUNC_8 (1, VAR_10),
       VAR_9);
      FUNC_2 (VAR_14, VAR_17, VAR_15, VAR_19);

      VAR_18 = FUNC_16 (((void*)0), VAR_17, VAR_12, VAR_3);
      VAR_13 = FUNC_9 (VAR_2, VAR_18,
        FUNC_15 (VAR_12, VAR_3));
      break;

    case 130:
      VAR_17 = FUNC_7 (VAR_2);
      VAR_18 = FUNC_15 (VAR_12, VAR_4);
      if (VAR_2 == VAR_0)
 {
   FUNC_1 (FUNC_12 (VAR_16));
   FUNC_1 (FUNC_5 (VAR_17, VAR_11, VAR_18));
 }
      else
 {
   FUNC_1 (FUNC_13 (VAR_16));
   FUNC_1 (FUNC_6 (VAR_17, VAR_11, VAR_18));
 }
      VAR_13 = FUNC_7 (VAR_2);
      FUNC_1 (FUNC_4 (VAR_13, VAR_17, VAR_16));
      break;

    case 128:
      if (VAR_2 == VAR_0)
 FUNC_1 (FUNC_12 (VAR_16));
      else
 FUNC_1 (FUNC_13 (VAR_16));

      VAR_17 = FUNC_16 (((void*)0), VAR_16, VAR_12, VAR_7);
      VAR_13 = FUNC_9 (VAR_2, VAR_17,
        FUNC_15 (VAR_12, VAR_7));
      break;

    default:
      FUNC_3 ();
    }

  return VAR_13;
}
