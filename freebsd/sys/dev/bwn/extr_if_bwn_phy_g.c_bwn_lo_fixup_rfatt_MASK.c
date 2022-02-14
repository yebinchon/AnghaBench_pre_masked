
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_rfatt {int att; int padmix; } ;



__attribute__((used)) static void
FUNC_0(struct bwn_rfatt *VAR_0)
{

 if (!VAR_0->padmix)
  return;
 if ((VAR_0->att != 1) && (VAR_0->att != 2) && (VAR_0->att != 3))
  VAR_0->att = 4;
}
