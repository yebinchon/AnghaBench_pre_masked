
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qlnx_host {scalar_t__ personality; TYPE_1__* qlnx_rdma; } ;
struct TYPE_4__ {TYPE_1__* (* add ) (struct qlnx_host*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qlnx_host*,char*,struct qlnx_host*,TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* FUNC_1 (struct qlnx_host*) ;

__attribute__((used)) static void
FUNC_2(struct qlnx_host *VAR_3)
{
 FUNC_0(VAR_3, "enter ha = %p qlnx_rdma_if = %p\n", VAR_3, VAR_2);

 if (VAR_2 == ((void*)0))
  return;

 if (VAR_3->personality != VAR_0 &&
  VAR_3->personality != VAR_1)
  return;

 VAR_3->qlnx_rdma = VAR_2->add(VAR_3);

 FUNC_0(VAR_3, "exit (ha = %p, qlnx_rdma = %p)\n", VAR_3, VAR_3->qlnx_rdma);
 return;
}
