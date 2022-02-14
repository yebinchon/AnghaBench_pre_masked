
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
 TYPE_2__* FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int *,TYPE_2__*,int ) ;
 int FUNC_9 (int *,int ,char*,...) ;
 int VAR_5 ;
 int FUNC_10 (int *,int ,int *) ;

int
FUNC_11(SCR *VAR_6, EXCMD *VAR_7)
{
 EX_PRIVATE *VAR_8;
 TAG *VAR_9;
 TAGQ *VAR_10;
 char *VAR_11;
 size_t VAR_12;

 VAR_8 = FUNC_0(VAR_6);
 if ((VAR_10 = FUNC_4(VAR_8->tq)) == ((void*)0)) {
  FUNC_10(VAR_6, VAR_4, ((void*)0));
  return (1);
 }
 if ((VAR_9 = FUNC_5(VAR_10->current, VAR_5)) == ((void*)0)) {
  FUNC_9(VAR_6, VAR_1, "282|Already at the last tag of this group");
  return (1);
 }
 if (FUNC_8(VAR_6, VAR_9, FUNC_1(VAR_7->iflags, VAR_0)))
  return (1);
 VAR_10->current = VAR_9;

 if (FUNC_2(VAR_10, VAR_3))
  (void)FUNC_6(VAR_6, VAR_10, VAR_9);
 else
  (void)FUNC_7(VAR_6, VAR_9->search, VAR_9->slen, VAR_10->tag);
 if (VAR_10->current->msg) {
     FUNC_3(VAR_6, VAR_10->current->msg, VAR_10->current->mlen + 1,
       VAR_11, VAR_12);
     FUNC_9(VAR_6, VAR_2, "%s", VAR_11);
 }
 return (0);
}
