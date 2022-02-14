
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_vma ;
struct TYPE_3__ {scalar_t__ insn_endian; int insn_chunk_bitsize; } ;
typedef int CGEN_INSN_INT ;
typedef TYPE_1__* CGEN_CPU_DESC ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,unsigned char*,int,int) ;

void
FUNC_2 (CGEN_CPU_DESC VAR_1,
       unsigned char *VAR_2,
       int VAR_3,
       CGEN_INSN_INT VAR_4)
{
  int VAR_5 = (VAR_1->insn_endian == VAR_0);
  int VAR_6 = VAR_1->insn_chunk_bitsize;

  if (VAR_6 != 0 && VAR_6 < VAR_3)
    {


      int VAR_7;


      if ((VAR_3 % VAR_6) != 0)
 FUNC_0 ();

      for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += VAR_6)
 {
   int VAR_8;
   VAR_8 = (VAR_3 - VAR_6 - VAR_7);
   FUNC_1 ((bfd_vma) VAR_4, & VAR_2[VAR_8 / 8], VAR_6, VAR_5);
   VAR_4 >>= VAR_6;
 }
    }
  else
    {
      FUNC_1 ((bfd_vma) VAR_4, VAR_2, VAR_3, VAR_5);
    }
}
