
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int ;
struct TYPE_7__ {int xsize; int ysize; TYPE_2__* sc; } ;
struct TYPE_6__ {TYPE_1__* adp; } ;
struct TYPE_5__ {uintptr_t va_window; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int*,int,int) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 () ;
 int * VAR_3 ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(int VAR_4)
{
 uintptr_t VAR_5;
 u_short *VAR_6;
 u_int VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 if (VAR_4 < 0 || VAR_4 > 0xff || VAR_4 == '\a')
  return;
 if (VAR_3 == ((void*)0)) {
  VAR_5 = VAR_0 + 0xb8000;



  VAR_12 = 80;
  VAR_14 = 25;

 } else {
  if (!FUNC_0(&VAR_2))
   return;
  VAR_5 = VAR_2.sc->adp->va_window;
  VAR_12 = VAR_2.xsize;
  VAR_14 = VAR_2.ysize;
 }
 VAR_13 = VAR_14 / 5;
 VAR_6 = (u_short *)(void *)VAR_5 + VAR_12 * VAR_13;
 VAR_10 = VAR_12 * (VAR_14 - 2 * VAR_13);
 do {
  VAR_7 = VAR_1;
  VAR_9 = VAR_7 % VAR_12;
  VAR_11 = (VAR_4 == '\b' ? -1 : VAR_4 == '\t' ? (VAR_9 + 8) & ~7 :
      VAR_4 == '\r' ? -VAR_9 : VAR_4 == '\n' ? VAR_12 - VAR_9 : 1);
  if (VAR_11 == 0 || (VAR_11 < 0 && VAR_7 < -VAR_11))
   return;
 } while (FUNC_1(&VAR_1, VAR_7, VAR_7 + VAR_11) == 0);
 if (VAR_4 == '\b' || VAR_4 == '\r')
  return;
 if (VAR_4 == '\n')
  VAR_7 += VAR_12;

 VAR_8 = FUNC_3();
 if (VAR_4 == '\t' || VAR_4 == '\n')
  VAR_4 = ' ';
 do
  VAR_6[VAR_7++ % VAR_10] = (VAR_8 << 8) | VAR_4;
 while (--VAR_11 != 0);
}
