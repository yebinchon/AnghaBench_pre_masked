
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_device_attr {int dummy; } ;
struct ibv_context_1_0 {int real_context; } ;


 int FUNC_0 (int ,struct ibv_device_attr*) ;

int FUNC_1(struct ibv_context_1_0 *VAR_0,
      struct ibv_device_attr *VAR_1)
{
 return FUNC_0(VAR_0->real_context, VAR_1);
}
