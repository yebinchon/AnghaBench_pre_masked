
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int new_entries; int entry_size; scalar_t__ num_init_entries; scalar_t__ init_entries; } ;
struct TYPE_9__ {unsigned int dis_hash_size; int * dis_hash_table_entries; int ** dis_hash_table; TYPE_1__ macro_insn_table; TYPE_1__ insn_table; } ;
typedef TYPE_1__ CGEN_INSN_TABLE ;
typedef int CGEN_INSN_LIST ;
typedef TYPE_2__* CGEN_CPU_DESC ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__,int ,int **,int *) ;
 int * FUNC_3 (TYPE_2__*,int ,int **,int *) ;
 int FUNC_4 (int **,int ,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6 (CGEN_CPU_DESC VAR_0)
{
  int VAR_1 = FUNC_0 (VAR_0) + FUNC_1 (VAR_0);
  CGEN_INSN_TABLE *VAR_2 = & VAR_0->insn_table;
  CGEN_INSN_TABLE *VAR_3 = & VAR_0->macro_insn_table;
  unsigned int VAR_4 = VAR_0->dis_hash_size;
  CGEN_INSN_LIST *VAR_5;
  CGEN_INSN_LIST **VAR_6;
  CGEN_INSN_LIST *VAR_7;




  VAR_6 = (CGEN_INSN_LIST **)
    FUNC_5 (VAR_4 * sizeof (CGEN_INSN_LIST *));
  FUNC_4 (VAR_6, 0, VAR_4 * sizeof (CGEN_INSN_LIST *));
  VAR_7 = VAR_5 = (CGEN_INSN_LIST *)
    FUNC_5 (VAR_1 * sizeof (CGEN_INSN_LIST));






  VAR_5 = FUNC_2 (VAR_0,
        VAR_2->init_entries + 1,
        VAR_2->num_init_entries - 1,
        VAR_2->entry_size,
        VAR_6, VAR_5);



  VAR_5 = FUNC_2 (VAR_0, VAR_3->init_entries,
        VAR_3->num_init_entries,
        VAR_3->entry_size,
        VAR_6, VAR_5);




  VAR_5 = FUNC_3 (VAR_0, VAR_2->new_entries,
       VAR_6, VAR_5);



  FUNC_3 (VAR_0, VAR_3->new_entries,
    VAR_6, VAR_5);

  VAR_0->dis_hash_table = VAR_6;
  VAR_0->dis_hash_table_entries = VAR_7;
}
