
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int sw_t ;
struct TYPE_20__ {scalar_t__ lcontinue; int totalcount; int rows; scalar_t__ linecount; TYPE_3__* gp; int mtype; } ;
typedef TYPE_1__ VI_PRIVATE ;
struct TYPE_22__ {int e_flno; int e_tlno; int e_event; } ;
struct TYPE_21__ {int (* scr_attr ) (TYPE_1__*,int ,int) ;scalar_t__ (* scr_screen ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ SCR ;
typedef TYPE_3__ GS ;
typedef TYPE_4__ EVENT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * FUNC_4 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (TYPE_1__*,int ,char*,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_10 (TYPE_1__*,int*,int ) ;
 int FUNC_11 (TYPE_1__*,int*,int ) ;

int
FUNC_12(SCR *VAR_19, int *VAR_20)
{
 EVENT VAR_21;
 GS *VAR_22;
 VI_PRIVATE *VAR_23;
 sw_t VAR_24;

 VAR_22 = VAR_19->gp;
 VAR_23 = FUNC_5(VAR_19);
 *VAR_20 = 0;


 FUNC_2(VAR_23, VAR_15);


 if (VAR_23->lcontinue != 0) {
  FUNC_8(VAR_19, VAR_23->mtype, ".", 1);
  VAR_23->lcontinue = 0;

  VAR_23->mtype = VAR_1;
 }
 if (FUNC_1(VAR_19, VAR_10)) {
  if (VAR_19->gp->scr_screen(VAR_19, VAR_14))
   return (1);
 } else
  if (!FUNC_1(VAR_19, VAR_8) && VAR_23->totalcount < 2) {
   FUNC_0(VAR_19, VAR_7);
   return (0);
  }


 FUNC_0(VAR_19, VAR_8);






 if (!FUNC_1(VAR_19, VAR_7) && !FUNC_3(VAR_19)) {
  VAR_24 = FUNC_1(VAR_19, VAR_5 | VAR_6 |
      VAR_9 | VAR_13) ? VAR_3 : VAR_4;
  if (FUNC_1(VAR_19, VAR_10))
   FUNC_11(VAR_19, VAR_20, VAR_24);
  else
   FUNC_10(VAR_19, VAR_20, VAR_24);
  if (*VAR_20)
   return (0);
 }


 if (FUNC_1(VAR_19, VAR_10))
  FUNC_2(VAR_23, VAR_16);





 if (FUNC_4(VAR_19, VAR_18) != ((void*)0))
  FUNC_2(VAR_19, VAR_11);


 if (FUNC_1(VAR_23, VAR_17))
  FUNC_2(VAR_19, VAR_12);


 (void)VAR_22->scr_attr(VAR_19, VAR_2, 1);





 FUNC_0(VAR_19, VAR_10 | VAR_7);
 if (VAR_23->totalcount > 1) {

  VAR_21.e_event = VAR_0;
  VAR_21.e_flno = VAR_23->totalcount >=
      VAR_19->rows ? 1 : VAR_19->rows - VAR_23->totalcount;
  VAR_21.e_tlno = VAR_19->rows;


  VAR_23->linecount = VAR_23->lcontinue = VAR_23->totalcount = 0;


  (void)FUNC_9(VAR_19, &VAR_21);
 } else

  VAR_23->linecount = VAR_23->lcontinue = VAR_23->totalcount = 0;

 return (0);
}
