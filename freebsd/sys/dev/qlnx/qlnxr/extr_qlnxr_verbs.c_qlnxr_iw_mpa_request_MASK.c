
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {void* s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; void* sin_port; void* sin_family; } ;
struct qlnxr_iw_listener {TYPE_3__* cm_id; struct qlnxr_dev* dev; } ;
struct qlnxr_iw_ep {int ecore_context; struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int * ha; } ;
struct iw_cm_event {int ird; int ord; scalar_t__ private_data_len; void* private_data; void* provider_data; int remote_addr; int local_addr; int status; int event; } ;
struct ecore_iwarp_cm_event_params {TYPE_2__* cm_info; int status; int ep_context; } ;
typedef int qlnx_host_t ;
typedef int event ;
struct TYPE_6__ {int (* event_handler ) (TYPE_3__*,struct iw_cm_event*) ;} ;
struct TYPE_5__ {int ird; int ord; scalar_t__ private_data_len; scalar_t__ private_data; int * remote_ip; int * local_ip; int remote_port; int local_port; int ip_version; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 struct qlnxr_iw_ep* FUNC_4 (int,int ) ;
 int FUNC_5 (struct iw_cm_event*,int ,int) ;
 int FUNC_6 (TYPE_3__*,struct iw_cm_event*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_4,
 struct ecore_iwarp_cm_event_params *VAR_5)
{
 struct qlnxr_iw_listener *VAR_6 = (struct qlnxr_iw_listener *)VAR_4;
 struct qlnxr_dev *VAR_7 = VAR_6->dev;
 struct qlnxr_iw_ep *VAR_8;
 struct iw_cm_event VAR_9;
 struct sockaddr_in *VAR_10;
 struct sockaddr_in *VAR_11;
 qlnx_host_t *VAR_12;

 VAR_12 = VAR_7->ha;

 FUNC_1(VAR_12, "enter\n");

 if (VAR_5->cm_info->ip_version != VAR_1) {
  FUNC_0(VAR_12, "only IPv4 supported [0x%x]\n",
   VAR_5->cm_info->ip_version);
  return;
 }

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_2);

 if (!VAR_8) {
  FUNC_0(VAR_12, "kzalloc{ep) failed\n");
  return;
 }

 VAR_8->dev = VAR_7;
 VAR_8->ecore_context = VAR_5->ep_context;

 FUNC_5(&VAR_9, 0, sizeof(VAR_9));

 VAR_9.event = VAR_3;
 VAR_9.status = VAR_5->status;

 VAR_10 = (struct sockaddr_in *)&VAR_9.local_addr;
 VAR_11 = (struct sockaddr_in *)&VAR_9.remote_addr;

 VAR_10->sin_family = VAR_0;
 VAR_11->sin_family = VAR_0;

 VAR_10->sin_port = FUNC_3(VAR_5->cm_info->local_port);
 VAR_11->sin_port = FUNC_3(VAR_5->cm_info->remote_port);

 VAR_10->sin_addr.s_addr = FUNC_2(VAR_5->cm_info->local_ip[0]);
 VAR_11->sin_addr.s_addr = FUNC_2(VAR_5->cm_info->remote_ip[0]);

 VAR_9.provider_data = (void *)VAR_8;
 VAR_9.private_data = (void *)VAR_5->cm_info->private_data;
 VAR_9.private_data_len = (u8)VAR_5->cm_info->private_data_len;






 VAR_6->cm_id->event_handler(VAR_6->cm_id, &VAR_9);

 FUNC_1(VAR_12, "exit\n");

 return;
}
