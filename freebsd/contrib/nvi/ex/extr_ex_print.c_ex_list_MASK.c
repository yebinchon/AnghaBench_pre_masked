
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int cno; int lno; } ;
struct TYPE_9__ {int iflags; TYPE_5__ addr2; int addr1; } ;
struct TYPE_8__ {int cno; int lno; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ EXCMD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*,int *,TYPE_5__*,int) ;

int
FUNC_1(SCR *VAR_1, EXCMD *VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2,
     &VAR_2->addr1, &VAR_2->addr2, VAR_2->iflags | VAR_0))
  return (1);
 VAR_1->lno = VAR_2->addr2.lno;
 VAR_1->cno = VAR_2->addr2.cno;
 return (0);
}
