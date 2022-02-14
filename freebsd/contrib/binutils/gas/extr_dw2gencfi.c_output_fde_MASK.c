
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_4__ {int * X_op_symbol; void* X_op; int * X_add_symbol; scalar_t__ X_add_number; } ;
struct fde_entry {int lsda_encoding; TYPE_1__ lsda; int * start_address; int * end_address; } ;
struct cie_entry {int * start_address; } ;
struct cfi_insn_data {struct cfi_insn_data* next; } ;
typedef int offsetT ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct cfi_insn_data*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 void* FUNC_8 () ;
 int FUNC_9 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_10 (struct fde_entry *VAR_5, struct cie_entry *VAR_6,
     struct cfi_insn_data *VAR_7, int VAR_8)
{
  symbolS *VAR_9, *VAR_10;
  expressionS VAR_11;
  offsetT VAR_12;

  VAR_9 = FUNC_7 ();
  VAR_10 = FUNC_7 ();

  VAR_11.X_op = VAR_3;
  VAR_11.X_add_symbol = VAR_10;
  VAR_11.X_op_symbol = VAR_9;
  VAR_11.X_add_number = 0;
  FUNC_1 (&VAR_11, 4);
  FUNC_6 (VAR_9);

  VAR_11.X_add_symbol = VAR_9;
  VAR_11.X_op_symbol = VAR_6->start_address;
  FUNC_1 (&VAR_11, 4);






  VAR_11.X_op = VAR_4;
  VAR_11.X_add_symbol = VAR_5->start_address;
  VAR_11.X_op_symbol = ((void*)0);



  FUNC_1 (&VAR_11, 4);

  VAR_11.X_op = VAR_3;


  VAR_11.X_add_symbol = VAR_5->end_address;
  VAR_11.X_op_symbol = VAR_5->start_address;
  FUNC_1 (&VAR_11, 4);

  VAR_12 = FUNC_2 (VAR_5->lsda_encoding);
  FUNC_4 (VAR_12);

  if (VAR_5->lsda_encoding != VAR_1)
    {
      VAR_11 = VAR_5->lsda;
      if ((VAR_5->lsda_encoding & 0x70) == VAR_2)
 {







   FUNC_0 ();

 }
      else
 FUNC_1 (&VAR_11, VAR_12);
    }

  for (; VAR_7; VAR_7 = VAR_7->next)
    FUNC_5 (VAR_7);

  FUNC_3 (VAR_8, VAR_0, 0);
  FUNC_6 (VAR_10);
}
