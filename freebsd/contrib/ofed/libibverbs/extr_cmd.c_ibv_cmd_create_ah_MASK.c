
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ibv_pd {TYPE_5__* context; int handle; } ;
struct ibv_create_ah_resp {int handle; } ;
struct TYPE_6__ {int dgid; int traffic_class; int hop_limit; int sgid_index; int flow_label; } ;
struct TYPE_7__ {TYPE_1__ grh; int port_num; int is_global; int static_rate; int src_path_bits; int sl; int dlid; } ;
struct ibv_create_ah {uintptr_t user_handle; TYPE_2__ attr; int pd_handle; } ;
struct TYPE_8__ {int raw; } ;
struct TYPE_9__ {TYPE_3__ dgid; int traffic_class; int hop_limit; int sgid_index; int flow_label; } ;
struct ibv_ah_attr {TYPE_4__ grh; int port_num; int is_global; int static_rate; int src_path_bits; int sl; int dlid; } ;
struct ibv_ah {TYPE_5__* context; int handle; } ;
struct TYPE_10__ {int cmd_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_create_ah*,int,int ,struct ibv_create_ah_resp*,size_t) ;
 int FUNC_1 (struct ibv_create_ah_resp*,size_t) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,struct ibv_create_ah*,int) ;

int FUNC_4(struct ibv_pd *VAR_2, struct ibv_ah *VAR_3,
        struct ibv_ah_attr *VAR_4,
        struct ibv_create_ah_resp *VAR_5,
        size_t VAR_6)
{
 struct ibv_create_ah VAR_7;

 FUNC_0(&VAR_7, sizeof VAR_7, VAR_0, VAR_5, VAR_6);
 VAR_7.user_handle = (uintptr_t) VAR_3;
 VAR_7.pd_handle = VAR_2->handle;
 VAR_7.attr.dlid = VAR_4->dlid;
 VAR_7.attr.sl = VAR_4->sl;
 VAR_7.attr.src_path_bits = VAR_4->src_path_bits;
 VAR_7.attr.static_rate = VAR_4->static_rate;
 VAR_7.attr.is_global = VAR_4->is_global;
 VAR_7.attr.port_num = VAR_4->port_num;
 VAR_7.attr.grh.flow_label = VAR_4->grh.flow_label;
 VAR_7.attr.grh.sgid_index = VAR_4->grh.sgid_index;
 VAR_7.attr.grh.hop_limit = VAR_4->grh.hop_limit;
 VAR_7.attr.grh.traffic_class = VAR_4->grh.traffic_class;
 FUNC_2(VAR_7.attr.grh.dgid, VAR_4->grh.dgid.raw, 16);

 if (FUNC_3(VAR_2->context->cmd_fd, &VAR_7, sizeof VAR_7) != sizeof VAR_7)
  return VAR_1;

 (void) FUNC_1(VAR_5, VAR_6);

 VAR_3->handle = VAR_5->handle;
 VAR_3->context = VAR_2->context;

 return 0;
}
