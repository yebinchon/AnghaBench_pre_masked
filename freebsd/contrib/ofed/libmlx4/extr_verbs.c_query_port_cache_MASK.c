
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mlx4_context {TYPE_1__* port_query_cache; } ;
struct ibv_port_attr {int port_cap_flags; int link_layer; } ;
struct ibv_context {int dummy; } ;
struct TYPE_2__ {int caps; int link_layer; scalar_t__ valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibv_context*,int,struct ibv_port_attr*) ;
 struct mlx4_context* FUNC_1 (struct ibv_context*) ;

__attribute__((used)) static int FUNC_2(struct ibv_context *VAR_2, uint8_t VAR_3,
       struct ibv_port_attr *VAR_4)
{
 struct mlx4_context *VAR_5 = FUNC_1(VAR_2);
 if (VAR_3 <= 0 || VAR_3 > VAR_1)
  return -VAR_0;
 if (VAR_5->port_query_cache[VAR_3 - 1].valid) {
  VAR_4->link_layer =
   VAR_5->
   port_query_cache[VAR_3 - 1].
   link_layer;
  VAR_4->port_cap_flags =
   VAR_5->
   port_query_cache[VAR_3 - 1].
   caps;
  return 0;
 }
 return FUNC_0(VAR_2, VAR_3,
          (struct ibv_port_attr *)VAR_4);

}
