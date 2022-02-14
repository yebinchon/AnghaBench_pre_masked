
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_rdma_device {int dummy; } ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {struct ecore_rdma_device* dev; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*) ;
 int VAR_0 ;

struct ecore_rdma_device *FUNC_1(void *VAR_1)
{
 struct ecore_hwfn *VAR_2 = (struct ecore_hwfn *)VAR_1;

 FUNC_0(VAR_2, VAR_0, "Query device\n");


 return VAR_2->p_rdma_info->dev;
}
