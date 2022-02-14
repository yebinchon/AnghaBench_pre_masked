
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int u_long ;
typedef int buf ;
struct TYPE_19__ {int lno; } ;
struct TYPE_22__ {int iflags; int count; TYPE_1__ addr1; } ;
struct TYPE_21__ {int lno; TYPE_2__* ep; int refcnt; struct TYPE_21__* frp; int cno; } ;
struct TYPE_20__ {int refcnt; } ;
typedef TYPE_3__ SCR ;
typedef TYPE_4__ EXCMD ;
typedef int CHAR_T ;


 int FUNC_0 (TYPE_3__*,char*,size_t,int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;






 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int FUNC_9 (TYPE_3__*,int ,char*) ;
 int FUNC_10 (TYPE_3__*,int,int *) ;
 size_t FUNC_11 (char*,int,char*,int ,int,...) ;
 int FUNC_12 (TYPE_3__*,int *,int *,size_t,int) ;
 scalar_t__ FUNC_13 (TYPE_3__**) ;

int
FUNC_14(SCR *VAR_14, EXCMD *VAR_15)
{
 SCR *VAR_16;
 size_t VAR_17;
 int VAR_18;
 char VAR_19[256];
 size_t VAR_20;
 CHAR_T *VAR_21;


 if (!FUNC_5(VAR_14, VAR_7)) {
  FUNC_9(VAR_14, VAR_4,
     "175|The visual command requires that the open option be set");
  return (1);
 }


 VAR_14->lno = VAR_15->addr1.lno == 0 ? 1 : VAR_15->addr1.lno;





 switch (FUNC_1(VAR_15->iflags,
     134 | 133 | 132 | 129)) {
 case 134:
  VAR_18 = '^';
  break;
 case 133:
  VAR_18 = '-';
  break;
 case 132:
  VAR_18 = '.';
  break;
 case 129:
  VAR_18 = '+';
  break;
 default:
  VAR_14->frp->lno = VAR_14->lno;
  VAR_14->frp->cno = 0;
  (void)FUNC_10(VAR_14, VAR_14->lno, &VAR_14->cno);
  FUNC_4(VAR_14->frp, VAR_3);
  goto nopush;
 }

 if (FUNC_1(VAR_15->iflags, VAR_2))
  VAR_17 = FUNC_11(VAR_19, sizeof(VAR_19),
       "%luz%c%lu", (u_long)VAR_14->lno, VAR_18, VAR_15->count);
 else
  VAR_17 = FUNC_11(VAR_19, sizeof(VAR_19), "%luz%c", (u_long)VAR_14->lno, VAR_18);
 FUNC_0(VAR_14, VAR_19, VAR_17, VAR_21, VAR_20);
 (void)FUNC_12(VAR_14, ((void*)0), VAR_21, VAR_20, VAR_0 | VAR_1);
 switch (FUNC_1(VAR_15->iflags, 131 | 130 | 128)) {
 case 131:
  FUNC_6(VAR_14, VAR_6);
  break;
 case 130:
  FUNC_6(VAR_14, VAR_5);
  break;
 case 128:
  break;
 }

nopush:
 if (!FUNC_3(VAR_14, VAR_12))
  FUNC_4(VAR_14, VAR_10);

 if (FUNC_3(VAR_14, VAR_9)) {





  ++VAR_14->refcnt;
  ++VAR_14->ep->refcnt;






  VAR_16 = VAR_14;
  if (FUNC_13(&VAR_16))
   return (1);
  if (FUNC_7(VAR_14))
   return (1);


  (void)FUNC_8(VAR_14, "\n");
 } else {
  FUNC_2(VAR_14, VAR_8 | VAR_11);
  FUNC_4(VAR_14, VAR_13);
 }
 return (0);
}
