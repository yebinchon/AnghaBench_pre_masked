
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

 int VAR_1 ;



 scalar_t__ VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;






 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,int ,int const,int ,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int,int,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,char const*) ;
 int FUNC_16 (int) ;

void
FUNC_17 (rtx VAR_12, rtx VAR_13, enum rtx_code VAR_14)
{
  const char *VAR_15;
  rtx VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
  enum machine_mode VAR_21;

  switch (VAR_14)
    {
    case 141:
      VAR_15 = (VAR_7) ? "_Qp_feq" : "_Q_feq";
      break;

    case 135:
      VAR_15 = (VAR_7) ? "_Qp_fne" : "_Q_fne";
      break;

    case 139:
      VAR_15 = (VAR_7) ? "_Qp_fgt" : "_Q_fgt";
      break;

    case 140:
      VAR_15 = (VAR_7) ? "_Qp_fge" : "_Q_fge";
      break;

    case 137:
      VAR_15 = (VAR_7) ? "_Qp_flt" : "_Q_flt";
      break;

    case 138:
      VAR_15 = (VAR_7) ? "_Qp_fle" : "_Q_fle";
      break;

    case 134:
    case 128:
    case 131:
    case 129:
    case 133:
    case 132:
    case 130:
    case 136:
      VAR_15 = (VAR_7) ? "_Qp_cmp" : "_Q_cmp";
      break;

    default:
      FUNC_9 ();
    }

  if (VAR_7)
    {
      if (FUNC_1 (VAR_12) != VAR_2)
 {
   VAR_16 = FUNC_4 (VAR_8, FUNC_2(VAR_8), 0);
   FUNC_8 (VAR_16, VAR_12);
 }
      else
 VAR_16 = VAR_12;

      if (FUNC_1 (VAR_13) != VAR_2)
 {
   VAR_17 = FUNC_4 (VAR_8, FUNC_2(VAR_8), 0);
   FUNC_8 (VAR_17, VAR_13);
 }
      else
 VAR_17 = VAR_13;

      FUNC_7 (FUNC_15 (VAR_4, VAR_15), VAR_1,
    VAR_0, 2,
    FUNC_3 (VAR_16, 0), VAR_4,
    FUNC_3 (VAR_17, 0), VAR_4);

      VAR_21 = VAR_0;
    }
  else
    {
      FUNC_7 (FUNC_15 (VAR_4, VAR_15), VAR_1,
    VAR_5, 2,
    VAR_12, VAR_8, VAR_13, VAR_8);

      VAR_21 = VAR_5;
    }





  VAR_18 = FUNC_14 (VAR_21);
  FUNC_8 (VAR_18, FUNC_16 (VAR_21));

  switch (VAR_14)
    {
    default:
      FUNC_5 (VAR_18, VAR_9, 135, VAR_3, VAR_21, 0);
      break;
    case 134:
    case 128:
      FUNC_5 (VAR_18, FUNC_0(3), VAR_14 == 128 ? 141 : 135,
       VAR_3, VAR_21, 0);
      break;
    case 131:
    case 132:
      FUNC_5 (VAR_18, VAR_10,
       VAR_14 == 131 ? 139 : 135, VAR_3, VAR_21, 0);
      break;
    case 130:
      FUNC_5 (VAR_18, VAR_11, 135, VAR_3, VAR_21, 0);
      break;
    case 129:
      VAR_19 = FUNC_14 (VAR_21);
      if (VAR_6)
 FUNC_6 (FUNC_13 (VAR_19, VAR_18, VAR_10));
      else
 FUNC_6 (FUNC_12 (VAR_19, VAR_18, VAR_10));
      FUNC_5 (VAR_19, VAR_9, 135, VAR_3, VAR_21, 0);
      break;
    case 133:
    case 136:
      VAR_19 = FUNC_14 (VAR_21);
      if (VAR_6)
 FUNC_6 (FUNC_11 (VAR_19, VAR_18, VAR_10));
      else
 FUNC_6 (FUNC_10 (VAR_19, VAR_18, VAR_10));
      VAR_20 = FUNC_14 (VAR_21);
      if (VAR_6)
 FUNC_6 (FUNC_13 (VAR_20, VAR_19, VAR_11));
      else
 FUNC_6 (FUNC_12 (VAR_20, VAR_19, VAR_11));
      FUNC_5 (VAR_20, VAR_9, VAR_14 == 133 ? 141 : 135,
       VAR_3, VAR_21, 0);
      break;
    }
}
