
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u_char ;
typedef int recno_t ;
struct TYPE_21__ {int (* put ) (TYPE_6__*,TYPE_5__*,TYPE_5__*,int ) ;} ;
struct TYPE_20__ {int size; scalar_t__* data; } ;
struct TYPE_16__ {scalar_t__ lno; } ;
struct TYPE_19__ {scalar_t__ l_cur; scalar_t__ l_high; TYPE_6__* log; scalar_t__* l_lp; int l_len; TYPE_1__ l_cursor; } ;
struct TYPE_18__ {int cno; int lno; int name; } ;
struct TYPE_17__ {TYPE_4__* ep; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ LMARK ;
typedef TYPE_4__ EXF ;
typedef TYPE_5__ DBT ;


 int FUNC_0 (TYPE_2__*,scalar_t__*,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_2__*,char*,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (scalar_t__*,TYPE_3__*,int) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*,TYPE_5__*,int ) ;

int
FUNC_6(
 SCR *VAR_5,
 LMARK *VAR_6)
{
 DBT VAR_7, VAR_8;
 EXF *VAR_9;

 VAR_9 = VAR_5->ep;
 if (FUNC_1(VAR_9, VAR_0))
  return (0);


 if (VAR_9->l_cursor.lno != VAR_4) {
  if (FUNC_3(VAR_5, VAR_1))
   return (1);
  VAR_9->l_cursor.lno = VAR_4;
 }

 FUNC_0(VAR_5, VAR_9->l_lp,
     VAR_9->l_len, sizeof(u_char) + sizeof(LMARK));
 VAR_9->l_lp[0] = VAR_3;
 FUNC_4(VAR_9->l_lp + sizeof(u_char), VAR_6, sizeof(LMARK));

 VAR_8.data = &VAR_9->l_cur;
 VAR_8.size = sizeof(recno_t);
 VAR_7.data = VAR_9->l_lp;
 VAR_7.size = sizeof(u_char) + sizeof(LMARK);
 if (VAR_9->log->put(VAR_9->log, &VAR_8, &VAR_7, 0) == -1)
  VAR_2;






 VAR_9->l_high = ++VAR_9->l_cur;
 return (0);
}
