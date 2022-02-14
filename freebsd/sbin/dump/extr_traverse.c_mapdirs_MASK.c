
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


union dinode {int dp2; int dp1; } ;
typedef int ino_t ;
struct TYPE_3__ {scalar_t__ fs_magic; scalar_t__ fs_bsize; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (union dinode*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (union dinode*) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int,scalar_t__,int,long*,long*,int,int) ;
 char* VAR_9 ;
 int VAR_10 ;
 union dinode* FUNC_6 (int,int*) ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__,int) ;
 TYPE_1__* VAR_12 ;
 int FUNC_8 (int,scalar_t__,long,long,long*,int,int) ;
 int VAR_13 ;

int
FUNC_9(ino_t VAR_14, long *VAR_15)
{
 union dinode *VAR_16;
 int VAR_17, VAR_18, VAR_19;
 char *VAR_20;
 ino_t VAR_21;
 union dinode VAR_22;
 long VAR_23;
 int VAR_24, VAR_25 = 0;

 VAR_18 = 0;
 for (VAR_20 = VAR_9, VAR_21 = 1; VAR_21 < VAR_14; VAR_21++) {
  if (((VAR_21 - 1) % VAR_0) == 0)
   VAR_18 = *VAR_20++;
  else
   VAR_18 >>= 1;







  VAR_19 = !VAR_11 && (FUNC_3(VAR_21, VAR_13) == 0);
  if ((VAR_18 & 1) == 0 || (FUNC_3(VAR_21, VAR_10) && !VAR_19))
   continue;
  VAR_16 = FUNC_6(VAR_21, &VAR_17);



  if (VAR_12->fs_magic == VAR_1)
   VAR_22.dp1 = VAR_16->dp1;
  else
   VAR_22.dp2 = VAR_16->dp2;
  VAR_23 = FUNC_1(&VAR_22, VAR_8);
  for (VAR_24 = 0, VAR_17 = 0; VAR_23 > 0 && VAR_17 < VAR_4; VAR_17++) {
   if (FUNC_1(&VAR_22, VAR_6[VAR_17]) != 0)
    VAR_24 |= FUNC_8(VAR_21, FUNC_1(&VAR_22, VAR_6[VAR_17]),
        (long)FUNC_7(VAR_12, FUNC_1(&VAR_22, VAR_8),
        VAR_17), VAR_23, VAR_15, VAR_19, VAR_14);
   if (VAR_24 & VAR_2)
    VAR_23 = 0;
   else
    VAR_23 -= VAR_12->fs_bsize;
  }
  for (VAR_17 = 0; VAR_23 > 0 && VAR_17 < VAR_5; VAR_17++) {
   if (FUNC_1(&VAR_22, VAR_7[VAR_17]) == 0)
    continue;
   VAR_24 |= FUNC_5(VAR_21, FUNC_1(&VAR_22, VAR_7[VAR_17]), VAR_17, &VAR_23,
       VAR_15, VAR_19, VAR_14);
  }
  if (VAR_24 & VAR_2) {
   FUNC_2(VAR_21, VAR_10);
   *VAR_15 += FUNC_4(&VAR_22);
   VAR_25 = 1;
   continue;
  }
  if (VAR_19) {
   if (VAR_24 & VAR_3)
    VAR_25 = 1;
   FUNC_0(VAR_21, VAR_9);
  } else if ((VAR_24 & VAR_3) == 0)
   if (!FUNC_3(VAR_21, VAR_10)) {
    FUNC_0(VAR_21, VAR_9);
    VAR_25 = 1;
   }
 }
 return (VAR_25);
}
