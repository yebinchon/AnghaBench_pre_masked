
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int ;
typedef scalar_t__ recno_t ;
struct TYPE_33__ {int cno; int lno; } ;
struct TYPE_30__ {TYPE_5__ m_final; TYPE_5__ m_start; } ;
typedef TYPE_2__ VICMD ;
struct TYPE_34__ {scalar_t__ lno; } ;
struct TYPE_32__ {TYPE_1__* gp; int cno; int lno; } ;
struct TYPE_31__ {int cno; char* lb; scalar_t__ lno; } ;
struct TYPE_29__ {int (* scr_refresh ) (TYPE_4__*,int ) ;} ;
typedef TYPE_3__ TEXT ;
typedef TYPE_4__ SCR ;
typedef TYPE_5__ MARK ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (TYPE_4__*,char) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_8__* VAR_6 ;
 TYPE_4__* FUNC_8 (TYPE_4__*) ;
 int VAR_7 ;
 int FUNC_9 (TYPE_4__*,TYPE_5__*,TYPE_5__*,char*,size_t,int *,int) ;
 int FUNC_10 (TYPE_4__*,TYPE_5__*,TYPE_5__*,char*,size_t,int *,int) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 scalar_t__ FUNC_13 (TYPE_4__*) ;
 scalar_t__ FUNC_14 (TYPE_4__*,TYPE_8__*,int *,int *) ;
 scalar_t__ FUNC_15 (TYPE_4__*,int ) ;

__attribute__((used)) static int
FUNC_16(SCR *VAR_8, VICMD *VAR_9, TEXT *VAR_10, u_int8_t *VAR_11)
{
 MARK VAR_12;
 recno_t VAR_13;
 u_int VAR_14;


 if (FUNC_5(VAR_8)) {
  FUNC_0(*VAR_11, VAR_1);
  return (0);
 }





 if (VAR_10->cno <= 1) {
  VAR_9->m_final = VAR_9->m_start;
  return (0);
 }





 if (VAR_10->lb[VAR_10->cno - 1] == '\\' &&
     (VAR_10->cno == 2 || VAR_10->lb[VAR_10->cno - 2] != '\\'))
  return (0);





 if (FUNC_6(VAR_8, VAR_10->lb[VAR_10->cno - 1]) &&
     (VAR_10->cno == 2 || VAR_10->lb[VAR_10->cno - 2] != '\\'))
  VAR_9->m_final = VAR_9->m_start;
 if (VAR_10->lb[0] == VAR_10->lb[VAR_10->cno - 1] &&
     (VAR_10->cno == 2 || VAR_10->lb[VAR_10->cno - 2] != '\\')) {
  VAR_9->m_final = VAR_9->m_start;
  FUNC_0(*VAR_11, VAR_1);
  return (0);
 }





 VAR_13 = VAR_10->lno;
 FUNC_4(FUNC_8(VAR_8), VAR_7);
 FUNC_3(VAR_8, VAR_2 | VAR_3);
 if (FUNC_12(VAR_8))
  return (1);
 if (FUNC_1(*VAR_11, VAR_0)) {
  VAR_12 = VAR_9->m_start;
  VAR_14 = VAR_5;
 } else {
  VAR_12 = VAR_9->m_final;
  VAR_14 = VAR_4 | VAR_5;
 }

 if (VAR_10->lb[0] == '/' ?
     !FUNC_10(VAR_8,
     &VAR_12, &VAR_9->m_final, VAR_10->lb + 1, VAR_10->cno - 1, ((void*)0), VAR_14) :
     !FUNC_9(VAR_8,
     &VAR_12, &VAR_9->m_final, VAR_10->lb + 1, VAR_10->cno - 1, ((void*)0), VAR_14)) {
  VAR_8->lno = VAR_9->m_final.lno;
  VAR_8->cno = VAR_9->m_final.cno;
  FUNC_0(*VAR_11, VAR_0);

  if (!FUNC_7(VAR_8) && FUNC_15(VAR_8, 0))
   return (1);
 } else
  FUNC_2(*VAR_11, VAR_0);


 if (FUNC_13(VAR_8))
  return (1);
 FUNC_3(FUNC_8(VAR_8), VAR_7);
 FUNC_4(VAR_8, VAR_2 | VAR_3);


 VAR_10->lno = VAR_6[0].lno;
 if (VAR_13 != VAR_6[0].lno) {
  if (FUNC_14(VAR_8, &VAR_6[0], ((void*)0), ((void*)0)))
   return (1);
  (void)VAR_8->gp->scr_refresh(VAR_8, 0);
 }
 return (0);
}
