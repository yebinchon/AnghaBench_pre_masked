
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ena_admin_host_info {scalar_t__* supported_network_features; } ;
typedef int if_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct ena_admin_host_info *VAR_0, if_t VAR_1)
{

 VAR_0->supported_network_features[0] =
     (uint32_t)FUNC_0(VAR_1);
}
