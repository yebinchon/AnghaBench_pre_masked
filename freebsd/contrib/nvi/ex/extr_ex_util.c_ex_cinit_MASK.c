
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* recno_t ;
struct TYPE_8__ {int cno; void* lno; } ;
struct TYPE_7__ {int cno; void* lno; } ;
struct TYPE_9__ {int addrcnt; int iflags; TYPE_2__ addr2; TYPE_1__ addr1; int * cmd; } ;
typedef int SCR ;
typedef TYPE_3__ EXCMD ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

void
FUNC_2(SCR *VAR_2, EXCMD *VAR_3, int VAR_4, int VAR_5, recno_t VAR_6, recno_t VAR_7, int VAR_8)
{
 FUNC_1(VAR_3, 0, sizeof(EXCMD));
 VAR_3->cmd = &VAR_1[VAR_4];
 VAR_3->addrcnt = VAR_5;
 VAR_3->addr1.lno = VAR_6;
 VAR_3->addr2.lno = VAR_7;
 VAR_3->addr1.cno = VAR_3->addr2.cno = 1;
 if (VAR_8)
  VAR_3->iflags |= VAR_0;
 (void)FUNC_0(VAR_2, VAR_3);
}
