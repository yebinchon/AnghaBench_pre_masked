
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ts_mad ;
struct ib_mad {int format_version; int attribute_id; int class_version; int slid; int transaction_id; int dlid; int dqpn; int sqpn; int port; int r_method; int mgmt_class; } ;
struct TYPE_7__ {int lid; } ;
struct ib_get_port_info_ioctl {TYPE_2__ port_info; int port; } ;
struct TYPE_8__ {int port_num; scalar_t__ p_transp_mgr; } ;
typedef TYPE_3__ osmv_bind_obj_t ;
struct TYPE_6__ {int qpn; int mgmt_class; } ;
struct TYPE_9__ {int device_fd; TYPE_1__ filter; } ;
typedef TYPE_4__ osmv_TOPSPIN_transport_mgr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,struct ib_get_port_info_ioctl*) ;
 int FUNC_2 (struct ib_mad*,int ,int) ;
 int FUNC_3 (int ,struct ib_mad*,int) ;

void FUNC_4(osmv_bind_obj_t * VAR_1)
{
 struct ib_mad VAR_2;
 osmv_TOPSPIN_transport_mgr_t *VAR_3 =
     (osmv_TOPSPIN_transport_mgr_t *) (VAR_1->p_transp_mgr);
 struct ib_get_port_info_ioctl VAR_4;
 int VAR_5;


 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.format_version = 1;
 VAR_2.mgmt_class = VAR_3->filter.mgmt_class;
 VAR_2.attribute_id = 0x2;
 VAR_2.class_version = 1;
 VAR_2.r_method = FUNC_0(0x2);
 VAR_2.port = VAR_1->port_num;
 VAR_2.sqpn = VAR_3->filter.qpn;
 VAR_2.dqpn = VAR_3->filter.qpn;
 VAR_2.slid = 0xffff;

 VAR_4.port = VAR_1->port_num;
 VAR_5 = FUNC_1(VAR_3->device_fd, VAR_0, &VAR_4);
 VAR_2.dlid = VAR_4.port_info.lid;
 VAR_2.transaction_id = 0x9999;
 FUNC_3(VAR_3->device_fd, &VAR_2, sizeof(VAR_2));
}
