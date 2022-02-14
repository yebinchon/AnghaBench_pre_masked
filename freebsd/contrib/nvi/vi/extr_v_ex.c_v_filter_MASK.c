
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_22__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_27__ {int lno; } ;
struct TYPE_26__ {int lno; } ;
struct TYPE_24__ {int cno; int lno; } ;
struct TYPE_28__ {TYPE_3__ m_stop; TYPE_2__ m_start; TYPE_1__ m_final; int rkp; } ;
typedef TYPE_4__ VICMD ;
struct TYPE_31__ {int argv; scalar_t__ argc; } ;
struct TYPE_30__ {int cno; int lno; int tiq; } ;
struct TYPE_29__ {scalar_t__ term; int len; scalar_t__ lb; } ;
struct TYPE_25__ {int args; scalar_t__ argsoff; } ;
typedef TYPE_5__ TEXT ;
typedef TYPE_6__ SCR ;
typedef TYPE_7__ EXCMD ;


 int VAR_0 ;
 TYPE_22__* FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (int ,char) ;
 scalar_t__ FUNC_3 (char*) ;
 TYPE_5__* FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_7__*,scalar_t__,int,int) ;
 int FUNC_6 (TYPE_6__*,TYPE_7__*,int ,int,int ,int ,int ) ;
 int FUNC_7 (TYPE_6__*,TYPE_4__*,TYPE_7__*) ;
 scalar_t__ FUNC_8 (TYPE_6__*,TYPE_4__*,char,int) ;
 int FUNC_9 (TYPE_6__*) ;

int
FUNC_10(SCR *VAR_8, VICMD *VAR_9)
{
 EXCMD VAR_10;
 TEXT *VAR_11;
 if (FUNC_1(VAR_9, VAR_7) ||
     FUNC_2(VAR_9->rkp, 'N') || FUNC_2(VAR_9->rkp, 'n')) {
  FUNC_6(VAR_8,
      &VAR_10, VAR_0, 2, VAR_9->m_start.lno, VAR_9->m_stop.lno, 0);
  FUNC_0(VAR_8)->argsoff = 0;

  if (FUNC_5(VAR_8, &VAR_10, FUNC_3("!"), 1, 1))
   return (1);
  VAR_10.argc = FUNC_0(VAR_8)->argsoff;
  VAR_10.argv = FUNC_0(VAR_8)->args;
  return (FUNC_7(VAR_8, VAR_9, &VAR_10));
 }


 if (FUNC_8(VAR_8, VAR_9,
     '!', VAR_2 | VAR_3 | VAR_4 | VAR_5 | VAR_6))
  return (1);
 VAR_11 = FUNC_4(VAR_8->tiq);
 if (VAR_11->term != VAR_1) {
  VAR_9->m_final.lno = VAR_8->lno;
  VAR_9->m_final.cno = VAR_8->cno;
  return (0);
 }


 FUNC_9(VAR_8);

 FUNC_6(VAR_8, &VAR_10, VAR_0, 2, VAR_9->m_start.lno, VAR_9->m_stop.lno, 0);
 FUNC_0(VAR_8)->argsoff = 0;

 if (FUNC_5(VAR_8, &VAR_10, VAR_11->lb + 1, VAR_11->len - 1, 1))
  return (1);
 VAR_10.argc = FUNC_0(VAR_8)->argsoff;
 VAR_10.argv = FUNC_0(VAR_8)->args;
 return (FUNC_7(VAR_8, VAR_9, &VAR_10));
}
