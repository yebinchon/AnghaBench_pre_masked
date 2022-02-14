
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
struct TYPE_11__ {scalar_t__ cno; } ;
typedef TYPE_3__ SCR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ,scalar_t__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;

int
FUNC_2(SCR *VAR_1, VICMD *VAR_2)
{
 VAR_1->cno = 0;
 if (FUNC_0(VAR_1, VAR_2->m_start.lno, &VAR_1->cno))
  return (1);

 VAR_0;

 return (FUNC_1(VAR_1, VAR_2));
}
