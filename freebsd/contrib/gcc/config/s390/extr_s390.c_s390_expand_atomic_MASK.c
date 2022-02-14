
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alignment_context {scalar_t__ shift; int memsi; scalar_t__ modemask; scalar_t__ modemaski; scalar_t__ aligned; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;



 int FUNC_0 (int) ;

 int const VAR_0 ;
 int FUNC_1 (scalar_t__) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;

 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int const,scalar_t__,scalar_t__,int ,int,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct alignment_context*,scalar_t__,int) ;
 scalar_t__ FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (int ,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__,int ) ;
 scalar_t__ FUNC_15 (scalar_t__,int,scalar_t__) ;
 int FUNC_16 (scalar_t__,int ,int ,int ,scalar_t__) ;

void
FUNC_17 (enum machine_mode VAR_6, enum rtx_code VAR_7,
      rtx VAR_8, rtx VAR_9, rtx VAR_10, bool VAR_11)
{
  struct alignment_context VAR_12;
  rtx VAR_13;
  rtx VAR_14 = FUNC_10 (VAR_4);
  rtx VAR_15 = FUNC_10 (VAR_4);
  rtx VAR_16 = FUNC_9 ();

  FUNC_7 (!VAR_8 || FUNC_12 (VAR_8, VAR_5));
  FUNC_7 (FUNC_1 (VAR_9));

  FUNC_11 (&VAR_12, VAR_9, VAR_6);



  if (!(VAR_12.aligned && VAR_7 == 129 && FUNC_1 (VAR_10)))
    VAR_10 = FUNC_15 (VAR_10, VAR_6, VAR_12.shift);


  if (VAR_7 == 130 || VAR_7 == 132)
    FUNC_4 (VAR_15, VAR_10);
  else if (VAR_7 == 131 || VAR_7 == 134)
    VAR_10 = FUNC_5 (VAR_4, 128, VAR_10, VAR_12.modemaski,
          VAR_2, 1, VAR_3);


  VAR_13 = FUNC_6 (VAR_4, VAR_12.memsi);


  FUNC_3 (VAR_16);
  FUNC_4 (VAR_14, VAR_13);


  switch (VAR_7)
    {
    case 130:
    case 132:
      VAR_10 = FUNC_5 (VAR_4, VAR_7, VAR_14, VAR_15,
     VAR_2, 1, VAR_3);
      VAR_10 = FUNC_5 (VAR_4, 134, VAR_10, VAR_12.modemask,
     VAR_2, 1, VAR_3);

    case 129:
      if (VAR_12.aligned && FUNC_1 (VAR_10))
 FUNC_16 (VAR_14, FUNC_0 (VAR_6), 0, VAR_4, VAR_10);
      else
 {
   VAR_14 = FUNC_5 (VAR_4, 134, VAR_14, VAR_12.modemaski,
         VAR_2, 1, VAR_3);
   VAR_14 = FUNC_5 (VAR_4, 133, VAR_14, VAR_10,
         VAR_2, 1, VAR_3);
 }
      break;
    case 134:
    case 133:
    case 128:
      VAR_14 = FUNC_5 (VAR_4, VAR_7, VAR_14, VAR_10,
     VAR_2, 1, VAR_3);
      break;
    case 131:
      VAR_14 = FUNC_5 (VAR_4, 128, VAR_14, VAR_12.modemask,
     VAR_2, 1, VAR_3);
      VAR_14 = FUNC_5 (VAR_4, 134, VAR_14, VAR_10,
     VAR_2, 1, VAR_3);
      break;
    default:
      FUNC_8 ();
    }

  FUNC_14 (VAR_16, FUNC_13 (VAR_1, VAR_13,
            VAR_12.memsi, VAR_13, VAR_14));


  if (VAR_8)
    FUNC_2 (VAR_8, FUNC_5 (VAR_4, VAR_0,
            VAR_11 ? VAR_14 : VAR_13, VAR_12.shift,
            VAR_2, 1, VAR_3), 1);
}
