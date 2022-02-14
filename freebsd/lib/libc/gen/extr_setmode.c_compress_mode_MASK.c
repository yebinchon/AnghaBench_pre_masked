
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cmd; int bits; scalar_t__ cmd2; } ;
typedef TYPE_1__ BITCMD ;



__attribute__((used)) static void
FUNC_0(BITCMD *VAR_0)
{
 BITCMD *VAR_1;
 int VAR_2, VAR_3, VAR_4, VAR_5;

 for (VAR_1 = VAR_0;;) {

  while ((VAR_5 = VAR_1->cmd) != '+' && VAR_5 != '-' && VAR_5 != 'X') {
   *VAR_0++ = *VAR_1++;
   if (!VAR_5)
    return;
  }

  for (VAR_2 = VAR_3 = VAR_4 = 0;; VAR_1++) {
   if ((VAR_5 = VAR_1->cmd) == '-') {
    VAR_3 |= VAR_1->bits;
    VAR_2 &= ~VAR_1->bits;
    VAR_4 &= ~VAR_1->bits;
   } else if (VAR_5 == '+') {
    VAR_2 |= VAR_1->bits;
    VAR_3 &= ~VAR_1->bits;
    VAR_4 &= ~VAR_1->bits;
   } else if (VAR_5 == 'X')
    VAR_4 |= VAR_1->bits & ~VAR_2;
   else
    break;
  }
  if (VAR_3) {
   VAR_0->cmd = '-';
   VAR_0->cmd2 = 0;
   VAR_0->bits = VAR_3;
   VAR_0++;
  }
  if (VAR_2) {
   VAR_0->cmd = '+';
   VAR_0->cmd2 = 0;
   VAR_0->bits = VAR_2;
   VAR_0++;
  }
  if (VAR_4) {
   VAR_0->cmd = 'X';
   VAR_0->cmd2 = 0;
   VAR_0->bits = VAR_4;
   VAR_0++;
  }
 }
}
