
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qlnxr_dev {int * ha; } ;
struct ib_device {int dummy; } ;
typedef int qlnx_host_t ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,struct ib_device*,int ) ;
 struct qlnxr_dev* FUNC_1 (struct ib_device*) ;

enum rdma_link_layer
FUNC_2(struct ib_device *VAR_1, uint8_t VAR_2)
{
 struct qlnxr_dev *VAR_3;
 qlnx_host_t *VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = VAR_3->ha;

 FUNC_0(VAR_4, "ibdev = %p port_num = 0x%x\n", VAR_1, VAR_2);

        return VAR_0;
}
