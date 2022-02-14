
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ lno; int cno; } ;
struct TYPE_9__ {TYPE_1__ l_cursor; } ;
struct TYPE_8__ {scalar_t__ lno; int cno; TYPE_3__* ep; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EXF ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;

int
FUNC_2(SCR *VAR_3)
{
 EXF *VAR_4;

 VAR_4 = VAR_3->ep;
 if (FUNC_0(VAR_4, VAR_0))
  return (0);





 if (VAR_4->l_cursor.lno == VAR_2) {
  VAR_4->l_cursor.lno = VAR_3->lno;
  VAR_4->l_cursor.cno = VAR_3->cno;
  return (FUNC_1(VAR_3, VAR_1));
 }
 VAR_4->l_cursor.lno = VAR_3->lno;
 VAR_4->l_cursor.cno = VAR_3->cno;
 return (0);
}
