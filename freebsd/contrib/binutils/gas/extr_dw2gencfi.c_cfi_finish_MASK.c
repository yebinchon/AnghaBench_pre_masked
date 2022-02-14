
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fde_entry {struct fde_entry* next; int * start_address; int * end_address; } ;
struct cie_entry {int dummy; } ;
struct cfi_insn_data {int dummy; } ;
typedef int segT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 struct fde_entry* VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (struct fde_entry*,struct cie_entry*,struct cfi_insn_data*,int) ;
 int FUNC_4 (int ,int) ;
 struct cie_entry* FUNC_5 (struct fde_entry*,struct cfi_insn_data**) ;
 int VAR_7 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ) ;

void
FUNC_8 (void)
{
  segT VAR_8;
  struct fde_entry *VAR_9;
  int VAR_10;

  if (VAR_5 == 0)
    return;


  VAR_8 = FUNC_6 (".eh_frame", 0);
  FUNC_2 (VAR_7, VAR_8,
    VAR_1 | VAR_3 | VAR_2 | VAR_4);
  FUNC_7 (VAR_8, 0);
  FUNC_4 (VAR_8, VAR_0);


  VAR_10 = VAR_6;
  VAR_6 = 1;

  for (VAR_9 = VAR_5; VAR_9 ; VAR_9 = VAR_9->next)
    {
      struct cfi_insn_data *VAR_11;
      struct cie_entry *VAR_12;

      if (VAR_9->end_address == ((void*)0))
 {
   FUNC_1 (FUNC_0("open CFI at the end of file; missing .cfi_endproc directive"));
   VAR_9->end_address = VAR_9->start_address;
 }

      VAR_12 = FUNC_5 (VAR_9, &VAR_11);
      FUNC_3 (VAR_9, VAR_12, VAR_11, VAR_9->next == ((void*)0) ? VAR_0 : 2);
    }

  VAR_6 = VAR_10;
}
