
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ct_mixer {int switch_state; } ;
typedef enum CTALSA_MIXER_CTL { ____Placeholder_CTALSA_MIXER_CTL } CTALSA_MIXER_CTL ;


 int VAR_0 ;

__attribute__((used)) static unsigned char
FUNC_0(struct ct_mixer *VAR_1, enum CTALSA_MIXER_CTL VAR_2)
{
 return (VAR_1->switch_state & (0x1 << (VAR_2 - VAR_0)))
  ? 1 : 0;
}
