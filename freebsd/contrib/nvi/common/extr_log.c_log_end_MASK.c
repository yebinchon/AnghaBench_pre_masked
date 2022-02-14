
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* close ) (TYPE_3__*) ;} ;
struct TYPE_5__ {int lno; scalar_t__ cno; } ;
struct TYPE_6__ {int l_high; int l_cur; TYPE_1__ l_cursor; scalar_t__ l_len; int * l_lp; TYPE_3__* log; } ;
typedef int SCR ;
typedef TYPE_2__ EXF ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;

int
FUNC_2(
 SCR *VAR_0,
 EXF *VAR_1)
{




 if (VAR_1->log != ((void*)0)) {
  (void)(VAR_1->log->close)(VAR_1->log);
  VAR_1->log = ((void*)0);
 }
 if (VAR_1->l_lp != ((void*)0)) {
  FUNC_0(VAR_1->l_lp);
  VAR_1->l_lp = ((void*)0);
 }
 VAR_1->l_len = 0;
 VAR_1->l_cursor.lno = 1;
 VAR_1->l_cursor.cno = 0;
 VAR_1->l_high = VAR_1->l_cur = 1;
 return (0);
}
