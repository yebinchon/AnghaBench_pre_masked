
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ibv_port_attr {int dummy; } ;
struct ibv_context_1_0 {int real_context; } ;


 int FUNC_0 (int ,int ,struct ibv_port_attr*) ;

int FUNC_1(struct ibv_context_1_0 *VAR_0, uint8_t VAR_1,
    struct ibv_port_attr *VAR_2)
{
 return FUNC_0(VAR_0->real_context, VAR_1, VAR_2);
}
