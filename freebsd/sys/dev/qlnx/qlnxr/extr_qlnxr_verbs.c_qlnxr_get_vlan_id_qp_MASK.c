
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ib_gid {int* raw; } ;
typedef int u16 ;
struct TYPE_3__ {union ib_gid dgid; } ;
struct TYPE_4__ {TYPE_1__ grh; } ;
struct ib_qp_attr {int vlan_id; TYPE_2__ ah_attr; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static inline bool
FUNC_1(qlnx_host_t *VAR_2, struct ib_qp_attr *VAR_3, int VAR_4,
       u16 *VAR_5)
{
 bool VAR_6 = 0;

 FUNC_0(VAR_2, "enter \n");

 *VAR_5 = 0;
 VAR_6 = 1;



 FUNC_0(VAR_2, "exit vlan_id = 0x%x ret = %d \n", *VAR_5, VAR_6);

 return (VAR_6);
}
