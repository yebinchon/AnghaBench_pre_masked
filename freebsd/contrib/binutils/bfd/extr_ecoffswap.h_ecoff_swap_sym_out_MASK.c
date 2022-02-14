
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sym_ext {int* s_bits1; int* s_bits2; int* s_bits3; int* s_bits4; int s_value; int s_iss; } ;
typedef int bfd ;
struct TYPE_3__ {int st; int sc; int index; scalar_t__ reserved; int value; int iss; } ;
typedef TYPE_1__ SYMR ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_22, const SYMR *VAR_23, void * VAR_24)
{
  struct sym_ext *VAR_25 = (struct sym_ext *) VAR_24;
  SYMR VAR_26[1];


  *VAR_26 = *VAR_23;

  FUNC_1 (VAR_22, VAR_26->iss, VAR_25->s_iss);
  FUNC_0 (VAR_22, VAR_26->value, VAR_25->s_value);


  if (FUNC_3 (VAR_22))
    {
      VAR_25->s_bits1[0] = (((VAR_26->st << VAR_6)
     & VAR_4)
    | ((VAR_26->sc >> VAR_2)
       & VAR_0));
      VAR_25->s_bits2[0] = (((VAR_26->sc << VAR_16)
     & VAR_14)
    | (VAR_26->reserved ? VAR_12 : 0)
    | ((VAR_26->index >> VAR_10)
       & VAR_8));
      VAR_25->s_bits3[0] = (VAR_26->index >> VAR_18) & 0xff;
      VAR_25->s_bits4[0] = (VAR_26->index >> VAR_20) & 0xff;
    }
  else
    {
      VAR_25->s_bits1[0] = (((VAR_26->st << VAR_7)
     & VAR_5)
    | ((VAR_26->sc << VAR_3)
       & VAR_1));
      VAR_25->s_bits2[0] = (((VAR_26->sc >> VAR_17)
     & VAR_15)
    | (VAR_26->reserved ? VAR_13 : 0)
    | ((VAR_26->index << VAR_11)
       & VAR_9));
      VAR_25->s_bits3[0] = (VAR_26->index >> VAR_19) & 0xff;
      VAR_25->s_bits4[0] = (VAR_26->index >> VAR_21) & 0xff;
    }





}
