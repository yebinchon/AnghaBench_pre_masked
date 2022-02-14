
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct opt_ext {int* o_bits2; int* o_bits3; int* o_bits4; int o_offset; int o_rndx; int * o_bits1; } ;
typedef int bfd ;
struct TYPE_3__ {int value; int rndx; int ot; } ;
typedef TYPE_1__ OPTR ;


 int FUNC_0 (int *,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,int *,int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_6, const OPTR *VAR_7, void * VAR_8)
{
  struct opt_ext *VAR_9 = (struct opt_ext *) VAR_8;
  OPTR VAR_10[1];


  *VAR_10 = *VAR_7;

  if (FUNC_3 (VAR_6))
    {
      VAR_9->o_bits1[0] = VAR_10->ot;
      VAR_9->o_bits2[0] = VAR_10->value >> VAR_0;
      VAR_9->o_bits3[0] = VAR_10->value >> VAR_2;
      VAR_9->o_bits4[0] = VAR_10->value >> VAR_4;
    }
  else
    {
      VAR_9->o_bits1[0] = VAR_10->ot;
      VAR_9->o_bits2[0] = VAR_10->value >> VAR_1;
      VAR_9->o_bits3[0] = VAR_10->value >> VAR_3;
      VAR_9->o_bits4[0] = VAR_10->value >> VAR_5;
    }

  FUNC_1 (FUNC_3 (VAR_6),
       &VAR_10->rndx, &VAR_9->o_rndx);

  FUNC_0 (VAR_6, VAR_10->value, VAR_9->o_offset);





}
