
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ offsetT ;
struct TYPE_6__ {TYPE_2__* frch_cfi_data; } ;
struct TYPE_5__ {TYPE_1__* cur_fde_data; scalar_t__ cur_cfa_offset; int last_address; } ;
struct TYPE_4__ {int signal_frame; } ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int const) ;
 int FUNC_9 (unsigned int,scalar_t__) ;
 int FUNC_10 (unsigned int,unsigned int) ;
 int FUNC_11 () ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 () ;
 int FUNC_14 (unsigned int) ;
 int FUNC_15 (unsigned int) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 () ;
 unsigned int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (unsigned int) ;
 int FUNC_21 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_22 () ;
 TYPE_3__* VAR_1 ;
 int FUNC_23 () ;
 char* VAR_2 ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 () ;

__attribute__((used)) static void
FUNC_26 (int VAR_3)
{
  offsetT VAR_4;
  unsigned VAR_5, VAR_6;

  if (VAR_1->frch_cfi_data == ((void*)0))
    {
      FUNC_4 (FUNC_2("CFI instruction used without previous .cfi_startproc"));
      FUNC_23 ();
      return;
    }


  if (FUNC_24 (VAR_1->frch_cfi_data->last_address) != VAR_0
      || FUNC_1 (VAR_1->frch_cfi_data->last_address)
  != FUNC_22 ())
    FUNC_16 (FUNC_25 ());

  switch (VAR_3)
    {
    case 134:
      VAR_5 = FUNC_18 ();
      FUNC_19 ();
      VAR_4 = FUNC_17 ();
      FUNC_9 (VAR_5, VAR_4);
      break;

    case 141:
      VAR_5 = FUNC_18 ();
      FUNC_19 ();
      VAR_4 = FUNC_17 ();
      FUNC_9 (VAR_5,
     VAR_4 - VAR_1->frch_cfi_data->cur_cfa_offset);
      break;

    case 137:
      VAR_5 = FUNC_18 ();
      FUNC_19 ();
      VAR_4 = FUNC_17 ();
      FUNC_5 (VAR_5, VAR_4);
      break;

    case 133:
      VAR_5 = FUNC_18 ();
      FUNC_19 ();
      VAR_6 = FUNC_18 ();
      FUNC_10 (VAR_5, VAR_6);
      break;

    case 135:
      VAR_5 = FUNC_18 ();
      FUNC_7 (VAR_5);
      break;

    case 136:
      VAR_4 = FUNC_17 ();
      FUNC_6 (VAR_4);
      break;

    case 142:
      VAR_4 = FUNC_17 ();
      FUNC_6 (VAR_1->frch_cfi_data->cur_cfa_offset
      + VAR_4);
      break;

    case 131:
      for (;;)
 {
   VAR_5 = FUNC_18 ();
   FUNC_12 (VAR_5);
   FUNC_0 ();
   if (*VAR_2 != ',')
     break;
   ++VAR_2;
 }
      break;

    case 128:
      for (;;)
 {
   VAR_5 = FUNC_18 ();
   FUNC_15 (VAR_5);
   FUNC_0 ();
   if (*VAR_2 != ',')
     break;
   ++VAR_2;
 }
      break;

    case 129:
      VAR_5 = FUNC_18 ();
      FUNC_14 (VAR_5);
      break;

    case 140:
      VAR_5 = FUNC_18 ();
      FUNC_20 (VAR_5);
      break;

    case 132:
      FUNC_11 ();
      break;

    case 130:
      FUNC_13 ();
      break;

    case 138:
      FUNC_8 (138);
      break;

    case 139:
      VAR_1->frch_cfi_data->cur_fde_data->signal_frame = 1;
      break;

    default:
      FUNC_3 ();
    }

  FUNC_21 ();
}
