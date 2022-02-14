
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_4__ {int * X_op_symbol; void* X_op; scalar_t__ X_add_number; int * X_add_symbol; } ;
struct cie_entry {int per_encoding; int lsda_encoding; int return_column; struct cfi_insn_data* last; struct cfi_insn_data* first; TYPE_1__ personality; scalar_t__ signal_frame; void* start_address; } ;
struct cfi_insn_data {struct cfi_insn_data* next; } ;
typedef int offsetT ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct cfi_insn_data*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 () ;
 void* FUNC_11 () ;
 int FUNC_12 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_13 (struct cie_entry *VAR_8)
{
  symbolS *VAR_9, *VAR_10;
  expressionS VAR_11;
  struct cfi_insn_data *VAR_12;
  offsetT VAR_13;

  VAR_8->start_address = FUNC_11 ();
  VAR_9 = FUNC_10 ();
  VAR_10 = FUNC_10 ();

  VAR_11.X_op = VAR_7;
  VAR_11.X_add_symbol = VAR_10;
  VAR_11.X_op_symbol = VAR_9;
  VAR_11.X_add_number = 0;

  FUNC_1 (&VAR_11, 4);
  FUNC_9 (VAR_9);
  FUNC_4 (0);
  FUNC_5 (VAR_3);
  FUNC_5 ('z');
  if (VAR_8->per_encoding != VAR_4)
    FUNC_5 ('P');
  if (VAR_8->lsda_encoding != VAR_4)
    FUNC_5 ('L');
  FUNC_5 ('R');
  if (VAR_8->signal_frame)
    FUNC_5 ('S');
  FUNC_5 (0);
  FUNC_7 (VAR_1);
  FUNC_6 (VAR_0);
  if (VAR_3 == 1)
    FUNC_5 (VAR_8->return_column);
  else
    FUNC_7 (VAR_8->return_column);
  VAR_13 = 1 + (VAR_8->lsda_encoding != VAR_4);
  if (VAR_8->per_encoding != VAR_4)
    VAR_13 += 1 + FUNC_2 (VAR_8->per_encoding);
  FUNC_7 (VAR_13);
  if (VAR_8->per_encoding != VAR_4)
    {
      offsetT VAR_14 = FUNC_2 (VAR_8->per_encoding);
      FUNC_5 (VAR_8->per_encoding);
      VAR_11 = VAR_8->personality;
      if ((VAR_8->per_encoding & 0x70) == VAR_5)
 {







   FUNC_0 ();

 }
      else
 FUNC_1 (&VAR_11, VAR_14);
    }
  if (VAR_8->lsda_encoding != VAR_4)
    FUNC_5 (VAR_8->lsda_encoding);



  FUNC_5 (VAR_6);


  if (VAR_8->first)
    for (VAR_12 = VAR_8->first; VAR_12 != VAR_8->last; VAR_12 = VAR_12->next)
      FUNC_8 (VAR_12);

  FUNC_3 (2, VAR_2, 0);
  FUNC_9 (VAR_10);
}
