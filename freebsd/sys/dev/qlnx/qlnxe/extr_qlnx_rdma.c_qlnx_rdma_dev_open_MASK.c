
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qlnx_host {scalar_t__ personality; int qlnx_rdma; } ;
struct TYPE_3__ {int (* notify ) (struct qlnx_host*,int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlnx_host*,char*,struct qlnx_host*,TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct qlnx_host*,int ,int ) ;

void
FUNC_2(struct qlnx_host *VAR_4)
{
 FUNC_0(VAR_4, "enter ha = %p qlnx_rdma_if = %p\n", VAR_4, VAR_3);

 if (VAR_3 == ((void*)0))
  return;

 if (VAR_4->personality != VAR_0 &&
  VAR_4->personality != VAR_1)
  return;

 VAR_3->notify(VAR_4, VAR_4->qlnx_rdma, VAR_2);

 FUNC_0(VAR_4, "exit ha = %p qlnx_rdma_if = %p\n", VAR_4, VAR_3);
 return;
}
