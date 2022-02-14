
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mac_addr; int vf_id; int msg; } ;
union nic_mbx {TYPE_1__ mac; } ;
typedef int uint8_t ;
struct nicvf {int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static int
FUNC_2(struct nicvf *VAR_2, uint8_t *VAR_3)
{
 union nic_mbx VAR_4 = {};

 VAR_4.mac.msg = VAR_1;
 VAR_4.mac.vf_id = VAR_2->vf_id;
 FUNC_0(VAR_4.mac.mac_addr, VAR_3, VAR_0);

 return (FUNC_1(VAR_2, &VAR_4));
}
