
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int32 ;
struct parse {TYPE_1__* argval; int nargs; } ;
struct info_clkbug {int * times; int stimes; scalar_t__ ntimes; int * values; int svalues; scalar_t__ nvalues; int clockadr; } ;
typedef int l_fp ;
struct TYPE_2__ {int netnum; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (size_t,int *) ;
 int FUNC_4 (size_t,int) ;
 int FUNC_5 (scalar_t__,int ,int ,size_t,int,char*,size_t*,size_t*,void*,int ,int) ;
 int FUNC_6 (int *,char*,...) ;
 scalar_t__ VAR_7 ;
 char* FUNC_7 (int *,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (char,int *) ;
 char* FUNC_13 (int *) ;

__attribute__((used)) static void
FUNC_14(
 struct parse *VAR_8,
 FILE *VAR_9
 )
{
 register int VAR_10;
 register int VAR_11;
 register u_int32 VAR_12;
 struct info_clkbug *VAR_13;

 u_long VAR_14[FUNC_8(VAR_3, 8)];
 u_int32 VAR_15;
 size_t VAR_16;
 size_t VAR_17;
 size_t VAR_18;
 size_t VAR_19;
 int VAR_20;
 int VAR_21;
 l_fp VAR_22;

 VAR_16 = FUNC_8(VAR_8->nargs, FUNC_0(VAR_14));
 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
  VAR_14[VAR_17] = FUNC_1(&VAR_8->argval[VAR_17].netnum);

again:
 VAR_20 = FUNC_5(VAR_7, VAR_6, 0, VAR_17,
        sizeof(u_int32), (char *)VAR_14, &VAR_18,
        &VAR_19, (void *)&VAR_13, 0, sizeof(struct info_clkbug));

 if (VAR_20 == VAR_2 && VAR_7 == VAR_0) {
  VAR_7 = VAR_1;
  goto again;
 }

 if (VAR_20 != 0)
  return;

 if (!FUNC_3(VAR_18, VAR_9))
  return;

 if (!FUNC_4(VAR_19, sizeof(struct info_clkbug)))
  return;

 while (VAR_18-- > 0) {
  (void) FUNC_6(VAR_9, "clock address:        %s\n",
          FUNC_11(VAR_13->clockadr));
  VAR_11 = (int)VAR_13->nvalues;
  (void) FUNC_6(VAR_9, "values: %d", VAR_11);
  VAR_12 = FUNC_10(VAR_13->svalues);
  if (VAR_11 > VAR_5)
      VAR_11 = VAR_5;
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   VAR_15 = FUNC_9(VAR_13->values[VAR_10]);
   VAR_15 &= 0xffffffff;
   if ((VAR_10 & 0x3) == 0)
       (void) FUNC_6(VAR_9, "\n");
   if (VAR_12 & (1 << VAR_10))
       (void) FUNC_6(VAR_9, "%12ld", (u_long)VAR_15);
   else
       (void) FUNC_6(VAR_9, "%12lu", (u_long)VAR_15);
  }
  (void) FUNC_6(VAR_9, "\n");

  VAR_11 = (int)VAR_13->ntimes;
  (void) FUNC_6(VAR_9, "times: %d", VAR_11);
  VAR_12 = FUNC_9(VAR_13->stimes);
  if (VAR_11 > VAR_4)
      VAR_11 = VAR_4;
  VAR_21 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   if ((VAR_10 & 0x1) == 0) {
       (void) FUNC_6(VAR_9, "\n");
   } else {
    for (;VAR_21 > 0; VAR_21--)
        FUNC_12(' ', VAR_9);
   }
   FUNC_2(&VAR_13->times[VAR_10], &VAR_22);
   if (VAR_12 & (1 << VAR_10)) {
    (void) FUNC_6(VAR_9, "%17s",
            FUNC_7(&VAR_22, 6));
    VAR_21 = 22;
   } else {
    (void) FUNC_6(VAR_9, "%37s",
            FUNC_13(&VAR_22));
    VAR_21 = 2;
   }
  }
  (void) FUNC_6(VAR_9, "\n");
  if (VAR_18 > 0) {
   VAR_13++;
   (void) FUNC_6(VAR_9, "\n");
  }
 }
}
