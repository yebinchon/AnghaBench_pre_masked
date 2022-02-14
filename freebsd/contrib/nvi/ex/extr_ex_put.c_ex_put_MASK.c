
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int addr1; int buffer; int iflags; } ;
struct TYPE_11__ {int cno; int lno; } ;
struct TYPE_10__ {int cno; int lno; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ MARK ;
typedef TYPE_3__ EXCMD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int *,int *,TYPE_2__*,int) ;

int
FUNC_3(SCR *VAR_1, EXCMD *VAR_2)
{
 MARK VAR_3;

 FUNC_1(VAR_1, VAR_2);

 VAR_3.lno = VAR_1->lno;
 VAR_3.cno = VAR_1->cno;
 if (FUNC_2(VAR_1, ((void*)0),
     FUNC_0(VAR_2->iflags, VAR_0) ? &VAR_2->buffer : ((void*)0),
     &VAR_2->addr1, &VAR_3, 1))
  return (1);
 VAR_1->lno = VAR_3.lno;
 VAR_1->cno = VAR_3.cno;
 return (0);
}
