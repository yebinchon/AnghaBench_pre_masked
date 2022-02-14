
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef long u_long ;
typedef int nbuf ;
typedef enum nresult { ____Placeholder_nresult } nresult ;
struct TYPE_17__ {size_t cno; int lno; } ;
struct TYPE_18__ {char character; long count; TYPE_2__ m_start; TYPE_1__* kp; } ;
typedef TYPE_3__ VICMD ;
struct TYPE_19__ {size_t cno; } ;
struct TYPE_16__ {int usage; } ;
typedef TYPE_4__ SCR ;
typedef char CHAR_T ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_4__*,char*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_4__*,char*,size_t,size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_3 (char) ;
 long VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*,char*,size_t) ;
 int VAR_5 ;
 int FUNC_5 (int ,long,long) ;
 int FUNC_6 (long,long,long) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t FUNC_7 (char*,int,char*,size_t,...) ;
 long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (TYPE_4__*,int ,char**,size_t*,int*) ;
 int FUNC_10 (TYPE_4__*,int ,char*,size_t) ;
 char** VAR_14 ;
 int FUNC_11 (TYPE_4__*,int) ;
 scalar_t__ FUNC_12 (char) ;
 scalar_t__ FUNC_13 (char) ;
 scalar_t__ FUNC_14 (char) ;
 int FUNC_15 (TYPE_4__*,int ,char*) ;
 int FUNC_16 (long*,char*,int *,int) ;
 int FUNC_17 (long*,char*,int *,int) ;
 int FUNC_18 (TYPE_4__*,int ,int ) ;
 int FUNC_19 (TYPE_4__*,int ) ;

int
FUNC_20(SCR *VAR_15, VICMD *VAR_16)
{
 enum nresult VAR_17;
 u_long VAR_18;
 long VAR_19, VAR_20, VAR_21;
 size_t VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 int VAR_28, VAR_29, VAR_30;
 CHAR_T *VAR_31, VAR_32[100];
 CHAR_T *VAR_33, *VAR_34, *VAR_35;


 if (VAR_16->character == '#')
  VAR_16->character = '+';
 if (VAR_16->character != '+' && VAR_16->character != '-') {
  FUNC_18(VAR_15, VAR_16->kp->usage, VAR_13);
  return (1);
 }


 if (FUNC_1(VAR_16, VAR_12)) {
  if (VAR_16->count > VAR_3) {
   FUNC_11(VAR_15, VAR_7);
   return (1);
  }
  VAR_19 = VAR_16->count;
 } else
  VAR_19 = 1;


 if (FUNC_9(VAR_15, VAR_16->m_start.lno, &VAR_34, &VAR_25, &VAR_29)) {
  if (VAR_29)
   goto nonum;
  return (1);
 }






 for (VAR_22 = VAR_16->m_start.cno; VAR_22 < VAR_25 && FUNC_3(VAR_34[VAR_22]); ++VAR_22);
 if (VAR_22 >= VAR_25)
  goto nonum;
 if (VAR_22 != VAR_16->m_start.cno) {
  VAR_15->cno = VAR_22;
  (void)FUNC_19(VAR_15, 0);
 }
 VAR_27 = VAR_25 - VAR_22;
 if (VAR_34[VAR_22] == '0' && VAR_27 > 2 &&
     (VAR_34[VAR_22 + 1] == 'X' || VAR_34[VAR_22 + 1] == 'x')) {
  VAR_28 = 16;
  VAR_24 = VAR_22 + 2;
  if (!(FUNC_0(VAR_34[VAR_24])))
   goto decimal;
  VAR_31 = VAR_34[VAR_22 + 1] == 'X' ? VAR_14[VAR_1] : VAR_14[VAR_2];
 } else if (VAR_34[VAR_22] == '0' && VAR_27 > 1) {
  VAR_28 = 8;
  VAR_24 = VAR_22 + 1;
  if (!((VAR_34[VAR_24]) >= '0' && (VAR_34[VAR_24]) <= '7'))
   goto decimal;
  VAR_31 = VAR_14[VAR_9];
 } else if (VAR_27 >= 1 && (VAR_34[VAR_22] == '+' || VAR_34[VAR_22] == '-')) {
  VAR_28 = 10;
  VAR_24 = VAR_22 + 1;
  VAR_31 = VAR_14[VAR_10];
  if (!FUNC_12(VAR_34[VAR_24]))
   goto nonum;
 } else {
decimal: VAR_28 = 10;
  VAR_24 = VAR_22;
  VAR_31 = VAR_14[VAR_0];
  if (!FUNC_12(VAR_34[VAR_24])) {
nonum: FUNC_15(VAR_15, VAR_5, "181|Cursor not in a number");
   return (1);
  }
 }


 while (++VAR_24 < VAR_25) {
  switch (VAR_28) {
  case 8:
   if (((VAR_34[VAR_24]) >= '0' && (VAR_34[VAR_24]) <= '7'))
    continue;
   if (VAR_34[VAR_24] == '8' || VAR_34[VAR_24] == '9') {
    VAR_28 = 10;
    VAR_31 = VAR_14[VAR_0];
    continue;
   }
   break;
  case 10:
   if (FUNC_12(VAR_34[VAR_24]))
    continue;
   break;
  case 16:
   if ((FUNC_0(VAR_34[VAR_24])))
    continue;
   break;
  default:
   FUNC_8();

  }
  break;
 }
 VAR_27 = (VAR_24 - VAR_22);
 FUNC_2(VAR_15, VAR_33, VAR_23, VAR_25 + 50);
 if (VAR_24 == VAR_25) {
  FUNC_4(VAR_33, &VAR_34[VAR_22], VAR_27);
  VAR_33[VAR_27] = '\0';
  VAR_35 = VAR_33;
 } else
  VAR_35 = &VAR_34[VAR_22];





 if (VAR_28 == 10) {
  if ((VAR_17 = FUNC_16(&VAR_21, VAR_35, ((void*)0), 10)) != VAR_6)
   goto err;
  VAR_20 = VAR_16->character == '-' ? -VAR_19 : VAR_19;
  if (VAR_21 > 0 && VAR_20 > 0 && !FUNC_6(VAR_3, VAR_21, VAR_20)) {
   VAR_17 = VAR_7;
   goto err;
  }
  if (VAR_21 < 0 && VAR_20 < 0 && !FUNC_5(VAR_4, VAR_21, VAR_20)) {
   VAR_17 = VAR_8;
   goto err;
  }
  VAR_21 += VAR_20;

  if (VAR_21 == 0 && VAR_31 == VAR_14[VAR_10])
   VAR_31 = VAR_14[VAR_0];
  VAR_26 = FUNC_7(VAR_32, sizeof(VAR_32), VAR_31, VAR_21);
 } else {
  if ((VAR_17 = FUNC_17(&VAR_18, VAR_35, ((void*)0), VAR_28)) != VAR_6)
   goto err;
  if (VAR_16->character == '+') {
   if (!FUNC_6(VAR_11, VAR_18, VAR_19)) {
    VAR_17 = VAR_7;
    goto err;
   }
   VAR_18 += VAR_19;
  } else {
   if (VAR_18 < VAR_19) {
    VAR_17 = VAR_8;
    goto err;
   }
   VAR_18 -= VAR_19;
  }


  if (VAR_28 == 16)
   VAR_27 -= 2;

  VAR_26 = FUNC_7(VAR_32, sizeof(VAR_32), VAR_31, VAR_27, VAR_18);
 }


 FUNC_4(VAR_33, VAR_34, VAR_22);
 FUNC_4(VAR_33 + VAR_22, VAR_32, VAR_26);
 FUNC_4(VAR_33 + VAR_22 + VAR_26, VAR_34 + VAR_24, VAR_25 - VAR_22 - (VAR_24 - VAR_22));
 VAR_25 = VAR_22 + VAR_26 + (VAR_25 - VAR_22 - (VAR_24 - VAR_22));

 VAR_17 = VAR_6;
 VAR_30 = FUNC_10(VAR_15, VAR_16->m_start.lno, VAR_33, VAR_25);

 if (0) {
err: VAR_30 = 1;
  FUNC_11(VAR_15, VAR_17);
 }
 if (VAR_33 != ((void*)0))
  FUNC_0(VAR_15, VAR_33, VAR_23);
 return (VAR_30);
}
