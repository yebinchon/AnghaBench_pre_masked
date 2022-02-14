
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sym_ext {int* s_bits1; int* s_bits2; int* s_bits3; int* s_bits4; int s_value; int s_iss; } ;
typedef int bfd ;
struct TYPE_3__ {long iss; int st; int sc; int reserved; int index; int value; } ;
typedef TYPE_1__ SYMR ;


 int FUNC_0 (int *,int ) ;
 long FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_22, void * VAR_23, SYMR *VAR_24)
{
  struct sym_ext VAR_25[1];

  *VAR_25 = *(struct sym_ext *) VAR_23;

  VAR_24->iss = FUNC_1 (VAR_22, VAR_25->s_iss);
  VAR_24->value = FUNC_0 (VAR_22, VAR_25->s_value);







  if (FUNC_3 (VAR_22))
    {
      VAR_24->st = (VAR_25->s_bits1[0] & VAR_4)
          >> VAR_6;
      VAR_24->sc = ((VAR_25->s_bits1[0] & VAR_0)
          << VAR_2)
     | ((VAR_25->s_bits2[0] & VAR_14)
          >> VAR_16);
      VAR_24->reserved = 0 != (VAR_25->s_bits2[0] & VAR_12);
      VAR_24->index = ((VAR_25->s_bits2[0] & VAR_8)
          << VAR_10)
     | (VAR_25->s_bits3[0] << VAR_18)
     | (VAR_25->s_bits4[0] << VAR_20);
    }
  else
    {
      VAR_24->st = (VAR_25->s_bits1[0] & VAR_5)
          >> VAR_7;
      VAR_24->sc = ((VAR_25->s_bits1[0] & VAR_1)
          >> VAR_3)
     | ((VAR_25->s_bits2[0] & VAR_15)
          << VAR_17);
      VAR_24->reserved = 0 != (VAR_25->s_bits2[0] & VAR_13);
      VAR_24->index = ((VAR_25->s_bits2[0] & VAR_9)
          >> VAR_11)
     | (VAR_25->s_bits3[0] << VAR_19)
     | ((unsigned int) VAR_25->s_bits4[0]
        << VAR_21);
    }





}
