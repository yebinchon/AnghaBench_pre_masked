
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qlnx_host {scalar_t__ personality; int qlnx_rdma; } ;
struct TYPE_3__ {int (* remove ) (struct qlnx_host*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qlnx_host*,char*,struct qlnx_host*,TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct qlnx_host*,int ) ;

__attribute__((used)) static int
FUNC_2(struct qlnx_host *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(VAR_3, "enter ha = %p qlnx_rdma_if = %p\n", VAR_3, VAR_2);

 if (VAR_2 == ((void*)0))
  return (VAR_4);

 if (VAR_3->personality != VAR_0 &&
  VAR_3->personality != VAR_1)
  return (VAR_4);

 VAR_4 = VAR_2->remove(VAR_3, VAR_3->qlnx_rdma);

 FUNC_0(VAR_3, "exit ha = %p qlnx_rdma_if = %p\n", VAR_3, VAR_2);
 return (VAR_4);
}
