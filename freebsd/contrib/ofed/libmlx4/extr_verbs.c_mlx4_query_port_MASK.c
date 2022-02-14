
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct mlx4_context {TYPE_1__* port_query_cache; } ;
struct ibv_query_port {int dummy; } ;
struct ibv_port_attr {int port_cap_flags; int link_layer; } ;
struct ibv_context {int dummy; } ;
typedef int cmd ;
struct TYPE_2__ {int valid; int caps; int link_layer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ibv_context*,scalar_t__,struct ibv_port_attr*,struct ibv_query_port*,int) ;
 struct mlx4_context* FUNC_1 (struct ibv_context*) ;

int FUNC_2(struct ibv_context *VAR_1, uint8_t VAR_2,
       struct ibv_port_attr *VAR_3)
{
 struct ibv_query_port VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_4, sizeof(VAR_4));
 if (!VAR_5 && VAR_2 <= VAR_0 && VAR_2 > 0) {
  struct mlx4_context *VAR_6 = FUNC_1(VAR_1);
  if (!VAR_6->port_query_cache[VAR_2 - 1].valid) {
   VAR_6->port_query_cache[VAR_2 - 1].link_layer =
    VAR_3->link_layer;
   VAR_6->port_query_cache[VAR_2 - 1].caps =
    VAR_3->port_cap_flags;
   VAR_6->port_query_cache[VAR_2 - 1].valid = 1;
  }
 }

 return VAR_5;
}
