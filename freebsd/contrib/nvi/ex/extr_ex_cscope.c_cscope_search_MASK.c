
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int lno; scalar_t__ cno; } ;
struct TYPE_16__ {scalar_t__ searchdir; int lno; scalar_t__ cno; } ;
struct TYPE_15__ {int slno; int slen; int * search; } ;
struct TYPE_14__ {int tag; } ;
typedef TYPE_1__ TAGQ ;
typedef TYPE_2__ TAG ;
typedef TYPE_3__ SCR ;
typedef TYPE_4__ MARK ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_4__*,TYPE_4__*,int *,int ,int *,int) ;
 int FUNC_2 (TYPE_3__*,int,scalar_t__*) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;

int
FUNC_4(SCR *VAR_6, TAGQ *VAR_7, TAG *VAR_8)
{
 MARK VAR_9;


 if (VAR_8->search == ((void*)0)) {
  if (!FUNC_0(VAR_6, VAR_8->slno)) {
   FUNC_3(VAR_6, VAR_4, VAR_7->tag);
   return (1);
  }
  VAR_9.lno = VAR_8->slno;
 } else {




  VAR_9.lno = 1;
  VAR_9.cno = 0;
  if (FUNC_1(VAR_6, &VAR_9, &VAR_9,
      VAR_8->search, VAR_8->slen, ((void*)0), VAR_2 | VAR_3)) {
   FUNC_3(VAR_6, VAR_5, VAR_7->tag);
   return (1);
  }






  if (VAR_6->searchdir == VAR_1)
   VAR_6->searchdir = VAR_0;
 }





 VAR_6->lno = VAR_9.lno;
 VAR_6->cno = 0;
 (void)FUNC_2(VAR_6, VAR_6->lno, &VAR_6->cno);
 return (0);
}
