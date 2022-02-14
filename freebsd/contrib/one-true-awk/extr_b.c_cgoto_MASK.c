
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int accept; int** posns; int curstat; int** gototab; int reset; int* out; TYPE_2__* re; } ;
typedef TYPE_3__ fa ;
struct TYPE_5__ {scalar_t__ up; int np; } ;
struct TYPE_6__ {int ltype; int* lfollow; TYPE_1__ lval; } ;


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
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int*,int) ;
 int VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int FUNC_6 (int*) ;

int FUNC_7(fa *VAR_14, int VAR_15, int VAR_16)
{
 int VAR_17, VAR_18, VAR_19;
 int *VAR_20, *VAR_21;

 FUNC_0(VAR_16 == VAR_6 || VAR_16 < VAR_8);
 while (VAR_14->accept >= VAR_10) {
  VAR_10 *= 4;
  VAR_12 = (int *) FUNC_5(VAR_12, VAR_10 * sizeof(int));
  VAR_13 = (int *) FUNC_5(VAR_13, VAR_10 * sizeof(int));
  if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0))
   FUNC_3("out of space in cgoto()");
 }
 for (VAR_17 = 0; VAR_17 <= VAR_14->accept; VAR_17++)
  VAR_12[VAR_17] = 0;
 VAR_11 = 0;

 VAR_20 = VAR_14->posns[VAR_15];
 for (VAR_17 = 1; VAR_17 <= *VAR_20; VAR_17++) {
  if ((VAR_19 = VAR_14->re[VAR_20[VAR_17]].ltype) != VAR_5) {
   if ((VAR_19 == VAR_2 && VAR_16 == FUNC_4(VAR_14->re[VAR_20[VAR_17]].lval.np))
    || (VAR_19 == VAR_3 && VAR_16 != 0 && VAR_16 != VAR_6)
    || (VAR_19 == VAR_0 && VAR_16 != 0)
    || (VAR_19 == VAR_4 && VAR_16 != 0)
    || (VAR_19 == VAR_1 && FUNC_2(VAR_16, (char *) VAR_14->re[VAR_20[VAR_17]].lval.up))
    || (VAR_19 == VAR_7 && !FUNC_2(VAR_16, (char *) VAR_14->re[VAR_20[VAR_17]].lval.up) && VAR_16 != 0 && VAR_16 != VAR_6)) {
    VAR_21 = VAR_14->re[VAR_20[VAR_17]].lfollow;
    for (VAR_18 = 1; VAR_18 <= *VAR_21; VAR_18++) {
     if (VAR_21[VAR_18] >= VAR_10) {
      VAR_10 *= 4;
      VAR_12 = (int *) FUNC_5(VAR_12, VAR_10 * sizeof(int));
      VAR_13 = (int *) FUNC_5(VAR_13, VAR_10 * sizeof(int));
      if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0))
       FUNC_3("cgoto overflow");
     }
     if (VAR_12[VAR_21[VAR_18]] == 0) {
      VAR_11++;
      VAR_12[VAR_21[VAR_18]] = 1;
     }
    }
   }
  }
 }

 VAR_13[0] = VAR_11;
 VAR_18 = 1;
 for (VAR_17 = VAR_14->accept; VAR_17 >= 0; VAR_17--)
  if (VAR_12[VAR_17]) {
   VAR_13[VAR_18++] = VAR_17;
  }

 for (VAR_17 = 1; VAR_17 <= VAR_14->curstat; VAR_17++) {
  VAR_20 = VAR_14->posns[VAR_17];
  if ((VAR_19 = VAR_13[0]) != VAR_20[0])
   goto different;
  for (VAR_18 = 1; VAR_18 <= VAR_19; VAR_18++)
   if (VAR_13[VAR_18] != VAR_20[VAR_18])
    goto different;

  VAR_14->gototab[VAR_15][VAR_16] = VAR_17;
  return VAR_17;
   different:;
 }


 if (VAR_14->curstat >= VAR_9-1) {
  VAR_14->curstat = 2;
  VAR_14->reset = 1;
  for (VAR_17 = 2; VAR_17 < VAR_9; VAR_17++)
   FUNC_6(VAR_14->posns[VAR_17]);
 } else
  ++(VAR_14->curstat);
 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++)
  VAR_14->gototab[VAR_14->curstat][VAR_17] = 0;
 FUNC_6(VAR_14->posns[VAR_14->curstat]);
 if ((VAR_20 = (int *) FUNC_1(VAR_11+1, sizeof(int))) == ((void*)0))
  FUNC_3("out of space in cgoto");

 VAR_14->posns[VAR_14->curstat] = VAR_20;
 VAR_14->gototab[VAR_15][VAR_16] = VAR_14->curstat;
 for (VAR_17 = 0; VAR_17 <= VAR_11; VAR_17++)
  VAR_20[VAR_17] = VAR_13[VAR_17];
 if (VAR_12[VAR_14->accept])
  VAR_14->out[VAR_14->curstat] = 1;
 else
  VAR_14->out[VAR_14->curstat] = 0;
 return VAR_14->curstat;
}
