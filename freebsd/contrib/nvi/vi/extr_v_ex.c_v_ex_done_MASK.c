
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int lno; size_t cno; } ;
struct TYPE_10__ {TYPE_1__ m_final; } ;
typedef TYPE_2__ VICMD ;
struct TYPE_11__ {int lno; size_t cno; } ;
typedef TYPE_3__ SCR ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int,int *,size_t*,int *) ;

__attribute__((used)) static int
FUNC_3(SCR *VAR_2, VICMD *VAR_3)
{
 size_t VAR_4;
 if (FUNC_2(VAR_2, VAR_2->lno, ((void*)0), &VAR_4, ((void*)0))) {
  VAR_2->lno = 1;
  VAR_2->cno = 0;
 } else if (VAR_2->cno >= VAR_4)
  VAR_2->cno = VAR_4 ? VAR_4 - 1 : 0;

 VAR_3->m_final.lno = VAR_2->lno;
 VAR_3->m_final.cno = VAR_2->cno;





 FUNC_0(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_1);

 return (0);
}
