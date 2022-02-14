
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nic_mbx {int dummy; } nic_mbx ;
typedef int uint64_t ;
struct nicpf {int dev; } ;
typedef scalar_t__ bus_space_handle_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nicpf*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct nicpf *VAR_0, int VAR_1, union nic_mbx *VAR_2)
{
 bus_space_handle_t VAR_3 = FUNC_0(VAR_1);
 uint64_t *VAR_4 = (uint64_t *)VAR_2;






 if (FUNC_2(VAR_0->dev)) {
  FUNC_1(VAR_0, VAR_3 + 0, VAR_4[0]);
  FUNC_1(VAR_0, VAR_3 + 8, VAR_4[1]);
 } else {
  FUNC_1(VAR_0, VAR_3 + 8, VAR_4[1]);
  FUNC_1(VAR_0, VAR_3 + 0, VAR_4[0]);
 }
}
