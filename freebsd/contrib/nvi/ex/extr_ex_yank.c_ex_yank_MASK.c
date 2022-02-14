
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addr2; int addr1; int buffer; int iflags; } ;
typedef int SCR ;
typedef TYPE_1__ EXCMD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int *,int *,int *,int ) ;

int
FUNC_3(SCR *VAR_2, EXCMD *VAR_3)
{
 FUNC_1(VAR_2, VAR_3);






 return (FUNC_2(VAR_2,
     FUNC_0(VAR_3->iflags, VAR_1) ? &VAR_3->buffer : ((void*)0),
     &VAR_3->addr1, &VAR_3->addr2, VAR_0));
}
