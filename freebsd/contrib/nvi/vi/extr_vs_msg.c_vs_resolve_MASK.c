
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_26__ {int totalcount; int linecount; int lcontinue; } ;
typedef TYPE_1__ VI_PRIVATE ;
struct TYPE_29__ {int e_flno; int e_tlno; int e_event; } ;
struct TYPE_28__ {struct TYPE_28__* buf; int len; int mtype; } ;
struct TYPE_27__ {int rows; int (* scr_move ) (TYPE_2__*,size_t,size_t) ;int msgq; int (* scr_msg ) (TYPE_2__*,int ,TYPE_3__*,int ) ;int lno; int (* scr_bell ) (TYPE_2__*) ;int (* scr_cursor ) (TYPE_2__*,size_t*,size_t*) ;struct TYPE_27__* gp; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ MSGS ;
typedef TYPE_2__ GS ;
typedef TYPE_5__ EVENT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__* FUNC_6 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int ) ;
 int VAR_8 ;
 int FUNC_10 (TYPE_2__*,size_t*,size_t*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int ,TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_2__*,size_t,size_t) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_16 (TYPE_2__*,int *,int ) ;

int
FUNC_17(SCR *VAR_9, SCR *VAR_10, int VAR_11)
{
 EVENT VAR_12;
 GS *VAR_13;
 MSGS *VAR_14;
 VI_PRIVATE *VAR_15;
 size_t VAR_16, VAR_17;
 int VAR_18;
 VAR_13 = VAR_9->gp;
 VAR_15 = FUNC_6(VAR_9);
 if (VAR_10 == ((void*)0))
  VAR_10 = VAR_9;


 (void)VAR_13->scr_cursor(VAR_10, &VAR_16, &VAR_17);


 if (FUNC_1(VAR_13, VAR_1)) {
  FUNC_0(VAR_13, VAR_1);
  (void)VAR_13->scr_bell(VAR_9);
 }


 if (FUNC_1(VAR_9, VAR_5)) {
  FUNC_0(VAR_9, VAR_5);
  FUNC_9(VAR_9, VAR_9->lno, VAR_2);
 }


 FUNC_8(VAR_9);







 if (!FUNC_3(VAR_13->msgq)) {
  if (!FUNC_1(VAR_9, VAR_4) && FUNC_14(VAR_9, 1))
   return (1);
  while ((VAR_14 = FUNC_4(VAR_13->msgq)) != ((void*)0)) {
   VAR_13->scr_msg(VAR_9, VAR_14->mtype, VAR_14->buf, VAR_14->len);
   FUNC_5(VAR_13->msgq, VAR_8);
   FUNC_7(VAR_14->buf);
   FUNC_7(VAR_14);
  }
  FUNC_2(VAR_15, VAR_6);
 }

 switch (VAR_15->totalcount) {
 case 0:
  VAR_18 = 0;
  break;
 case 1:




  if (VAR_11)
   FUNC_16(VAR_9, ((void*)0), VAR_3);
  else
   FUNC_2(VAR_15, VAR_7);

  VAR_18 = 0;
  break;
 default:




  FUNC_16(VAR_9, ((void*)0), VAR_3);

  VAR_12.e_event = VAR_0;
  VAR_12.e_flno = VAR_15->totalcount >=
      VAR_9->rows ? 1 : VAR_9->rows - VAR_15->totalcount;
  VAR_12.e_tlno = VAR_9->rows;

  VAR_18 = 1;
  break;
 }


 VAR_15->linecount = VAR_15->lcontinue = VAR_15->totalcount = 0;


 if (VAR_18)
  (void)FUNC_15(VAR_9, &VAR_12);


 (void)VAR_13->scr_move(VAR_10, VAR_16, VAR_17);

 return (0);
}
