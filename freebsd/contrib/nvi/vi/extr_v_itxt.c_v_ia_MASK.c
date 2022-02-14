
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_12__ {int lno; } ;
struct TYPE_13__ {int count; TYPE_1__ m_start; } ;
typedef TYPE_2__ VICMD ;
struct TYPE_14__ {int cno; int lno; int showmode; } ;
typedef TYPE_3__ SCR ;
typedef int CHAR_T ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,int **,size_t*,int*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,int *,int *,size_t,int ,int ,int,int ) ;

int
FUNC_5(SCR *VAR_4, VICMD *VAR_5)
{
 size_t VAR_6;
 u_int32_t VAR_7;
 int VAR_8;
 CHAR_T *VAR_9;

 VAR_7 = FUNC_3(VAR_4, VAR_5, 0);
 VAR_4->showmode = VAR_1;
 VAR_4->lno = VAR_5->m_start.lno;


 if (FUNC_2(VAR_4, VAR_4->lno, &VAR_9, &VAR_6, &VAR_8)) {
  if (!VAR_8)
   return (1);
  VAR_6 = 0;
  FUNC_1(VAR_2);
 } else if (VAR_6) {
  if (VAR_6 == VAR_4->cno + 1) {
   VAR_4->cno = VAR_6;
   FUNC_1(VAR_2);
  } else
   ++VAR_4->cno;
 } else
  FUNC_1(VAR_2);

 return (FUNC_4(VAR_4, VAR_5, ((void*)0), VAR_9, VAR_6,
     0, VAR_0, FUNC_0(VAR_5, VAR_3) ? VAR_5->count : 1, VAR_7));
}
