
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lno; scalar_t__ cno; } ;
struct TYPE_6__ {int l_high; int l_cur; int * log; TYPE_1__ l_cursor; scalar_t__ l_len; int * l_lp; } ;
typedef int SCR ;
typedef TYPE_2__ EXF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (int *,int,int,int ,int *) ;
 int FUNC_2 (int *,int ,char*) ;

int
FUNC_3(
 SCR *VAR_8,
 EXF *VAR_9)
{
 VAR_9->l_lp = ((void*)0);
 VAR_9->l_len = 0;
 VAR_9->l_cursor.lno = 1;
 VAR_9->l_cursor.cno = 0;
 VAR_9->l_high = VAR_9->l_cur = 1;

 VAR_9->log = FUNC_1(((void*)0), VAR_3 | VAR_4 | VAR_5,
     VAR_6 | VAR_7, VAR_0, ((void*)0));
 if (VAR_9->log == ((void*)0)) {
  FUNC_2(VAR_8, VAR_2, "009|Log file");
  FUNC_0(VAR_9, VAR_1);
  return (1);
 }

 return (0);
}
