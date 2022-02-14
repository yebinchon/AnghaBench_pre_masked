
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int * c_option; } ;
struct TYPE_17__ {int lno; size_t cno; } ;
struct TYPE_16__ {int lno; size_t cno; size_t rcm; struct TYPE_16__* frp; TYPE_3__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ MARK ;
typedef TYPE_3__ GS ;
typedef int CHAR_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,scalar_t__,int *,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,int ,int *,size_t*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char*,int *,size_t,int,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_1__*,int,size_t*) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(SCR *VAR_6)
{
 GS *VAR_7;
 MARK VAR_8;
 size_t VAR_9;
 int VAR_10;
 CHAR_T *VAR_11;
 size_t VAR_12;


 VAR_6->lno = 1;
 VAR_6->cno = 0;
 VAR_10 = 0;
 VAR_7 = VAR_6->gp;
 if (VAR_7->c_option != ((void*)0) && !FUNC_1(VAR_6->frp, VAR_2)) {
  if (FUNC_5(VAR_6, &VAR_6->lno))
   return;
  if (VAR_6->lno == 0) {
   VAR_6->lno = 1;
   VAR_6->cno = 0;
  }
  FUNC_0(VAR_6, VAR_7->c_option, FUNC_10(VAR_7->c_option) + 1,
    VAR_11, VAR_12);
  if (FUNC_6(VAR_6, "-c option", VAR_11, VAR_12 - 1, 1, 1))
   return;
  VAR_7->c_option = ((void*)0);
 } else if (FUNC_1(VAR_6, VAR_4)) {
  if (FUNC_5(VAR_6, &VAR_6->lno))
   return;
  if (VAR_6->lno == 0) {
   VAR_6->lno = 1;
   VAR_6->cno = 0;
   return;
  }
  VAR_10 = 1;
 } else {
  if (FUNC_1(VAR_6->frp, VAR_1)) {
   VAR_6->lno = VAR_6->frp->lno;
   VAR_6->cno = VAR_6->frp->cno;


    FUNC_2(VAR_6, VAR_5);
  } else {
   if (FUNC_3(VAR_6, VAR_3))
    FUNC_7(VAR_6);
   else
    VAR_6->lno = 1;
   VAR_10 = 1;
  }
  if (FUNC_4(VAR_6, VAR_6->lno, 0, ((void*)0), &VAR_9)) {
   VAR_6->lno = 1;
   VAR_6->cno = 0;
   return;
  }
  if (!VAR_10 && VAR_6->cno > VAR_9)
   VAR_10 = 1;
 }
 if (VAR_10) {
  VAR_6->cno = 0;
  (void)FUNC_9(VAR_6, VAR_6->lno, &VAR_6->cno);
 }





 VAR_6->rcm = VAR_6->cno;
 VAR_8.lno = VAR_6->lno;
 VAR_8.cno = VAR_6->cno;
 (void)FUNC_8(VAR_6, VAR_0, &VAR_8, 0);
}
