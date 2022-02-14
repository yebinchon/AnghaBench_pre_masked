
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ibv_query_port {int dummy; } ;
struct ibv_port_attr {int dummy; } ;
struct ibv_context {int dummy; } ;


 int FUNC_0 (struct ibv_context*,int ,struct ibv_port_attr*,struct ibv_query_port*,int) ;

int FUNC_1(struct ibv_context *VAR_0, uint8_t VAR_1,
       struct ibv_port_attr *VAR_2)
{
 struct ibv_query_port VAR_3;

 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3, sizeof VAR_3);
}
