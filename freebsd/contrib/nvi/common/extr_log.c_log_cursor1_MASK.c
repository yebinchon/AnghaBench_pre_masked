
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
typedef int recno_t ;
struct TYPE_13__ {int (* put ) (TYPE_4__*,TYPE_3__*,TYPE_3__*,int ) ;} ;
struct TYPE_12__ {int* data; int size; } ;
struct TYPE_11__ {int* l_lp; int l_cur; int l_high; TYPE_4__* log; int l_cursor; int l_len; } ;
struct TYPE_10__ {int cno; int lno; TYPE_2__* ep; } ;
typedef TYPE_1__ SCR ;
typedef int MARK ;
typedef TYPE_2__ EXF ;
typedef TYPE_3__ DBT ;


 int FUNC_0 (TYPE_1__*,int*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,int,char*,int ,int ) ;
 int FUNC_2 (int*,int *,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_4(
 SCR *VAR_2,
 int VAR_3)
{
 DBT VAR_4, VAR_5;
 EXF *VAR_6;

 VAR_6 = VAR_2->ep;

 FUNC_0(VAR_2, VAR_6->l_lp, VAR_6->l_len, sizeof(u_char) + sizeof(MARK));
 VAR_6->l_lp[0] = VAR_3;
 FUNC_2(VAR_6->l_lp + sizeof(u_char), &VAR_6->l_cursor, sizeof(MARK));

 VAR_5.data = &VAR_6->l_cur;
 VAR_5.size = sizeof(recno_t);
 VAR_4.data = VAR_6->l_lp;
 VAR_4.size = sizeof(u_char) + sizeof(MARK);
 if (VAR_6->log->put(VAR_6->log, &VAR_5, &VAR_4, 0) == -1)
  VAR_1;







 VAR_6->l_high = ++VAR_6->l_cur;

 return (0);
}
