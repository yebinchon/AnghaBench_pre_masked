
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
struct TYPE_14__ {scalar_t__ lno; } ;
struct TYPE_13__ {TYPE_6__ addr1; int addr2; int buffer; int iflags; } ;
struct TYPE_12__ {scalar_t__ lno; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ EXCMD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,TYPE_6__*,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_6__*,int *,int) ;

int
FUNC_5(SCR *VAR_2, EXCMD *VAR_3)
{
 recno_t VAR_4;

 FUNC_1(VAR_2, VAR_3);







 if (FUNC_2(VAR_2,
     FUNC_0(VAR_3->iflags, VAR_1) ? &VAR_3->buffer : ((void*)0),
     &VAR_3->addr1, &VAR_3->addr2, VAR_0))
  return (1);


 if (FUNC_4(VAR_2, &VAR_3->addr1, &VAR_3->addr2, 1))
  return (1);


 VAR_2->lno = VAR_3->addr1.lno;


 if (FUNC_3(VAR_2, &VAR_4))
  return (1);
 if (VAR_2->lno > VAR_4)
  VAR_2->lno = VAR_4;
 return (0);
}
