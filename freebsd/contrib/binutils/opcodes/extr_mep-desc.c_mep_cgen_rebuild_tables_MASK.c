
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {unsigned int machs; void* default_insn_bitsize; void* base_insn_bitsize; int min_insn_bitsize; scalar_t__ max_insn_bitsize; scalar_t__ insn_chunk_bitsize; int int_insn_p; int * isas; } ;
struct TYPE_12__ {void* default_insn_bitsize; void* base_insn_bitsize; int min_insn_bitsize; scalar_t__ max_insn_bitsize; } ;
struct TYPE_11__ {scalar_t__ insn_chunk_bitsize; } ;
typedef TYPE_1__ CGEN_MACH ;
typedef TYPE_2__ CGEN_ISA ;
typedef TYPE_3__ CGEN_CPU_TABLE ;
typedef int CGEN_BITSET ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int ,char*,scalar_t__,scalar_t__) ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_7 (CGEN_CPU_TABLE *VAR_8)
{
  int VAR_9;
  CGEN_BITSET *VAR_10 = VAR_8->isas;
  unsigned int VAR_11 = VAR_8->machs;

  VAR_8->int_insn_p = VAR_0;



  VAR_8->default_insn_bitsize = (VAR_1 + 1);
  VAR_8->base_insn_bitsize = (VAR_1 + 1);
  VAR_8->min_insn_bitsize = 65535;
  VAR_8->max_insn_bitsize = 0;
  for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9)
    if (FUNC_5 (VAR_10, VAR_9))
      {
 const CGEN_ISA *VAR_12 = & VAR_5[VAR_9];



 if (VAR_8->default_insn_bitsize == (VAR_1 + 1))
   VAR_8->default_insn_bitsize = VAR_12->default_insn_bitsize;
 else if (VAR_12->default_insn_bitsize == VAR_8->default_insn_bitsize)
   ;
 else
   VAR_8->default_insn_bitsize = VAR_1;



 if (VAR_8->base_insn_bitsize == (VAR_1 + 1))
   VAR_8->base_insn_bitsize = VAR_12->base_insn_bitsize;
 else if (VAR_12->base_insn_bitsize == VAR_8->base_insn_bitsize)
   ;
 else
   VAR_8->base_insn_bitsize = VAR_1;


 if (VAR_12->min_insn_bitsize < VAR_8->min_insn_bitsize)
   VAR_8->min_insn_bitsize = VAR_12->min_insn_bitsize;
 if (VAR_12->max_insn_bitsize > VAR_8->max_insn_bitsize)
   VAR_8->max_insn_bitsize = VAR_12->max_insn_bitsize;
      }


  for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9)
    if (((1 << VAR_9) & VAR_11) != 0)
      {
 const CGEN_MACH *VAR_13 = & VAR_6[VAR_9];

 if (VAR_13->insn_chunk_bitsize != 0)
 {
   if (VAR_8->insn_chunk_bitsize != 0 && VAR_8->insn_chunk_bitsize != VAR_13->insn_chunk_bitsize)
     {
       FUNC_6 (VAR_7, "mep_cgen_rebuild_tables: conflicting insn-chunk-bitsize values: `%ld' vs. `%ld'\n",
         VAR_8->insn_chunk_bitsize, VAR_13->insn_chunk_bitsize);
       FUNC_0 ();
     }

    VAR_8->insn_chunk_bitsize = VAR_13->insn_chunk_bitsize;
 }
      }


  FUNC_1 (VAR_8);


  FUNC_2 (VAR_8);


  FUNC_4 (VAR_8);


  FUNC_3 (VAR_8);
}
