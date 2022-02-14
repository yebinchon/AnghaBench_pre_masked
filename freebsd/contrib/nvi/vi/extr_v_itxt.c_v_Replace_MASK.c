
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_16__ {size_t cno; int lno; } ;
struct TYPE_13__ {int lno; } ;
struct TYPE_14__ {int count; TYPE_6__ m_stop; TYPE_1__ m_start; } ;
typedef TYPE_2__ VICMD ;
struct TYPE_15__ {int showmode; } ;
typedef TYPE_3__ SCR ;
typedef int CHAR_T ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,int **,size_t*,int*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,TYPE_6__*,int *,size_t,int ,int ,int,int ) ;

int
FUNC_5(SCR *VAR_6, VICMD *VAR_7)
{
 size_t VAR_8;
 u_int32_t VAR_9;
 int VAR_10;
 CHAR_T *VAR_11;

 VAR_9 = FUNC_3(VAR_6, VAR_7, 0);
 VAR_6->showmode = VAR_1;

 if (FUNC_2(VAR_6, VAR_7->m_start.lno, &VAR_11, &VAR_8, &VAR_10)) {
  if (!VAR_10)
   return (1);
  VAR_8 = 0;
  FUNC_1(VAR_2);
 } else {
  if (VAR_8 == 0)
   FUNC_1(VAR_2);
  FUNC_1(VAR_3 | VAR_4);
 }
 VAR_7->m_stop.lno = VAR_7->m_start.lno;
 VAR_7->m_stop.cno = VAR_8 ? VAR_8 - 1 : 0;

 return (FUNC_4(VAR_6, VAR_7, &VAR_7->m_stop, VAR_11, VAR_8,
     0, VAR_0, FUNC_0(VAR_7, VAR_5) ? VAR_7->count : 1, VAR_9));
}
