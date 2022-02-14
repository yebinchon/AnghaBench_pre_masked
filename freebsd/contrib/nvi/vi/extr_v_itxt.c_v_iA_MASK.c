
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int lno; } ;
struct TYPE_10__ {TYPE_1__ m_start; } ;
typedef TYPE_2__ VICMD ;
struct TYPE_11__ {size_t cno; } ;
typedef TYPE_3__ SCR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int *,size_t*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;

int
FUNC_2(SCR *VAR_1, VICMD *VAR_2)
{
 size_t VAR_3;

 if (!FUNC_0(VAR_1, VAR_2->m_start.lno, 0, ((void*)0), &VAR_3))
  VAR_1->cno = VAR_3 == 0 ? 0 : VAR_3 - 1;

 VAR_0;

 return (FUNC_1(VAR_1, VAR_2));
}
