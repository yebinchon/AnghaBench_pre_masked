
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsc {int dummy; } ;
struct ct_mixer {scalar_t__* amixers; } ;
struct amixer {struct rsc rsc; } ;
typedef enum MIXER_PORT_T { ____Placeholder_MIXER_PORT_T } MIXER_PORT_T ;
typedef enum CT_AMIXER_CTL { ____Placeholder_CT_AMIXER_CTL } CT_AMIXER_CTL ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct ct_mixer *VAR_1,
      enum MIXER_PORT_T VAR_2,
      struct rsc **VAR_3, struct rsc **VAR_4)
{
 enum CT_AMIXER_CTL VAR_5 = FUNC_0(VAR_2);

 if (((void*)0) != VAR_3)
  *VAR_3 = &((struct amixer *)VAR_1->amixers[VAR_5*VAR_0])->rsc;

 if (((void*)0) != VAR_4)
  *VAR_4 =
   &((struct amixer *)VAR_1->amixers[VAR_5*VAR_0+1])->rsc;

 return 0;
}
