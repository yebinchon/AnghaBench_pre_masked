
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int u_int ;
struct TYPE_16__ {scalar_t__ cno; int lno; } ;
struct TYPE_17__ {TYPE_1__ m_final; } ;
typedef TYPE_2__ VICMD ;
struct TYPE_18__ {scalar_t__ cno; int lno; } ;
struct TYPE_15__ {int lno; } ;
typedef TYPE_3__ SCR ;
typedef int ARG_CHAR_T ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_10__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,TYPE_2__*,int *,int *,int ,int ,int ,int,int ) ;

int
FUNC_8(SCR *VAR_12, VICMD *VAR_13, ARG_CHAR_T VAR_14, u_int VAR_15)
{

 VAR_13->m_final.lno = VAR_12->lno;
 VAR_13->m_final.cno = VAR_12->cno;


 if (FUNC_6(VAR_12))
  return (1);


 VAR_12->lno = VAR_4[0].lno;
 VAR_12->cno = 0;


 FUNC_1(VAR_12, VAR_3);


 FUNC_3(VAR_6 |
     VAR_7 | VAR_8 | VAR_9 | VAR_10);
 if (FUNC_4(VAR_12, VAR_0))
  FUNC_3(VAR_5);
 if (FUNC_4(VAR_12, VAR_1))
  FUNC_3(VAR_11);


 if (FUNC_7(VAR_12, VAR_13, ((void*)0), ((void*)0), 0, VAR_14, 0, 1, VAR_15))
  return (1);


 FUNC_0(VAR_12, VAR_3);


 if (FUNC_5(VAR_12))
  return (1);

 if (FUNC_2(VAR_12))
  FUNC_1(VAR_12, VAR_2);


 VAR_12->lno = VAR_13->m_final.lno;
 VAR_12->cno = VAR_13->m_final.cno;

 return (0);
}
