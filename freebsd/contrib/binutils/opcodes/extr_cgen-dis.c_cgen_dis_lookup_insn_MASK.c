
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int (* dis_hash ) (char const*,int ) ;int ** dis_hash_table; } ;
typedef int CGEN_INSN_LIST ;
typedef int CGEN_INSN_INT ;
typedef TYPE_1__* CGEN_CPU_DESC ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (char const*,int ) ;

CGEN_INSN_LIST *
FUNC_2 (CGEN_CPU_DESC VAR_0, const char * VAR_1, CGEN_INSN_INT VAR_2)
{
  unsigned int VAR_3;

  if (VAR_0->dis_hash_table == ((void*)0))
    FUNC_0 (VAR_0);

  VAR_3 = (* VAR_0->dis_hash) (VAR_1, VAR_2);

  return VAR_0->dis_hash_table[VAR_3];
}
