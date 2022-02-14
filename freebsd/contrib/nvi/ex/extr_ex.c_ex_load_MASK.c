
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ clen; scalar_t__ start; scalar_t__ stop; scalar_t__ range_lno; scalar_t__ cp; scalar_t__ o_cp; scalar_t__ o_clen; int agv_flags; int rq; struct TYPE_16__* if_name; } ;
struct TYPE_17__ {int ecq; TYPE_2__ excmd; } ;
struct TYPE_15__ {scalar_t__ lno; TYPE_3__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ RANGE ;
typedef TYPE_3__ GS ;
typedef TYPE_2__ EXCMD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 TYPE_2__* FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_1__*,scalar_t__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_12(SCR *VAR_7)
{
 GS *VAR_8;
 EXCMD *VAR_9;
 RANGE *VAR_10;

 FUNC_1(VAR_7, VAR_5);





 for (VAR_8 = VAR_7->gp;;) {
  VAR_9 = FUNC_5(VAR_8->ecq);


  if (FUNC_2(VAR_9, VAR_3))
   FUNC_11(VAR_9->if_name);





  if (VAR_9 == &VAR_8->excmd) {
   VAR_9->if_name = ((void*)0);
   return (0);
  }
  if (VAR_9->clen != 0)
   return (0);





  if (FUNC_0(VAR_9->agv_flags, VAR_0)) {

   while ((VAR_10 = FUNC_7(VAR_9->rq)) != ((void*)0))
    if (VAR_10->start > VAR_10->stop) {
     FUNC_8(VAR_9->rq, VAR_10, VAR_6);
     FUNC_11(VAR_10);
    } else
     break;


   if (VAR_10 != ((void*)0))
    break;


   if (FUNC_0(VAR_9->agv_flags,
       VAR_1 | VAR_2) && VAR_9->range_lno != VAR_4)
    if (FUNC_9(VAR_7, VAR_9->range_lno))
     VAR_7->lno = VAR_9->range_lno;
    else {
     if (FUNC_10(VAR_7, &VAR_7->lno))
      return (1);
     if (VAR_7->lno == 0)
      VAR_7->lno = 1;
    }
   FUNC_11(VAR_9->o_cp);
  }


  FUNC_6(VAR_8->ecq, VAR_6);
  FUNC_11(VAR_9);
 }







 VAR_9->cp = VAR_9->o_cp;
 FUNC_4(VAR_9->cp, VAR_9->cp + VAR_9->o_clen, VAR_9->o_clen);
 VAR_9->clen = VAR_9->o_clen;
 VAR_9->range_lno = VAR_7->lno = VAR_10->start++;

 if (FUNC_0(VAR_9->agv_flags, VAR_1 | VAR_2))
  FUNC_3(VAR_7, VAR_5);
 return (0);
}
