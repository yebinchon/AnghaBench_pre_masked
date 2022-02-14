
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct opt_ext {int* o_bits2; int* o_bits3; int* o_bits4; int o_offset; int o_rndx; int * o_bits1; } ;
typedef int bfd ;
struct TYPE_3__ {unsigned int value; int offset; int rndx; int ot; } ;
typedef TYPE_1__ OPTR ;


 int FUNC_0 (int *,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int *,int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_2, void * VAR_3, OPTR * VAR_4)
{
  struct opt_ext VAR_5[1];

  *VAR_5 = *(struct opt_ext *) VAR_3;

  if (FUNC_3 (VAR_2))
    {
      VAR_4->ot = VAR_5->o_bits1[0];
      VAR_4->value = (((unsigned int) VAR_5->o_bits2[0]
   << VAR_0)
         | ((unsigned int) VAR_5->o_bits3[0]
     << VAR_0)
         | ((unsigned int) VAR_5->o_bits4[0]
     << VAR_0));
    }
  else
    {
      VAR_4->ot = VAR_5->o_bits1[0];
      VAR_4->value = ((VAR_5->o_bits2[0] << VAR_1)
         | (VAR_5->o_bits3[0] << VAR_1)
         | (VAR_5->o_bits4[0] << VAR_1));
    }

  FUNC_1 (FUNC_3 (VAR_2),
      &VAR_5->o_rndx, &VAR_4->rndx);

  VAR_4->offset = FUNC_0 (VAR_2, VAR_5->o_offset);





}
