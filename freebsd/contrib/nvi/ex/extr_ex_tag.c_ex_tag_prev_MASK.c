
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int iflags; } ;
struct TYPE_16__ {int tq; } ;
struct TYPE_15__ {scalar_t__ mlen; scalar_t__ msg; int slen; int search; } ;
struct TYPE_14__ {TYPE_2__* current; int tag; } ;
typedef TYPE_1__ TAGQ ;
typedef TYPE_2__ TAG ;
typedef int SCR ;
typedef TYPE_3__ EX_PRIVATE ;
typedef TYPE_4__ EXCMD ;


 TYPE_3__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__,char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (TYPE_2__*,int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int *,TYPE_2__*,int ) ;
 int FUNC_9 (int *,int ,char*,...) ;
 int VAR_6 ;
 int FUNC_10 (int *,int ,int *) ;

int
FUNC_11(SCR *VAR_7, EXCMD *VAR_8)
{
 EX_PRIVATE *VAR_9;
 TAG *VAR_10;
 TAGQ *VAR_11;
 char *VAR_12;
 size_t VAR_13;

 VAR_9 = FUNC_0(VAR_7);
 if ((VAR_11 = FUNC_4(VAR_9->tq)) == ((void*)0)) {
  FUNC_10(VAR_7, VAR_4, ((void*)0));
  return (0);
 }
 if ((VAR_10 = FUNC_5(VAR_11->current, VAR_5, VAR_6)) == ((void*)0)) {
  FUNC_9(VAR_7, VAR_1, "255|Already at the first tag of this group");
  return (1);
 }
 if (FUNC_8(VAR_7, VAR_10, FUNC_1(VAR_8->iflags, VAR_0)))
  return (1);
 VAR_11->current = VAR_10;

 if (FUNC_2(VAR_11, VAR_3))
  (void)FUNC_6(VAR_7, VAR_11, VAR_10);
 else
  (void)FUNC_7(VAR_7, VAR_10->search, VAR_10->slen, VAR_11->tag);
 if (VAR_11->current->msg) {
     FUNC_3(VAR_7, VAR_11->current->msg, VAR_11->current->mlen + 1,
       VAR_12, VAR_13);
     FUNC_9(VAR_7, VAR_2, "%s", VAR_12);
 }
 return (0);
}
