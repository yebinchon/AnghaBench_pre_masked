
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ibv_gid {int* raw; } ;
typedef int uint16_t ;
struct TYPE_4__ {int port_pd; int dlid; } ;
struct mlx4_ah {int* mac; int vlan; TYPE_2__ av; } ;
struct ibv_pd {int context; } ;
struct TYPE_3__ {int sgid_index; union ibv_gid dgid; } ;
struct ibv_ah_attr {int sl; TYPE_1__ grh; int port_num; } ;


 int FUNC_0 (union ibv_gid*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,union ibv_gid*) ;
 scalar_t__ FUNC_4 (union ibv_gid*) ;
 scalar_t__ FUNC_5 (union ibv_gid*) ;
 int FUNC_6 (int*,int*,int) ;

__attribute__((used)) static int FUNC_7(struct ibv_pd *VAR_0, struct mlx4_ah *VAR_1,
      struct ibv_ah_attr *VAR_2)
{
 int VAR_3, VAR_4;
 uint16_t VAR_5;
 union ibv_gid VAR_6;

 if (FUNC_5(&VAR_2->grh.dgid)) {
  FUNC_6(VAR_1->mac, &VAR_2->grh.dgid.raw[8], 3);
  FUNC_6(VAR_1->mac + 3, &VAR_2->grh.dgid.raw[13], 3);
  VAR_1->mac[0] ^= 2;

  VAR_5 = FUNC_0(&VAR_2->grh.dgid);
 } else if (FUNC_4(&VAR_2->grh.dgid)) {
  VAR_1->mac[0] = 0x33;
  VAR_1->mac[1] = 0x33;
  for (VAR_4 = 2; VAR_4 < 6; ++VAR_4)
   VAR_1->mac[VAR_4] = VAR_2->grh.dgid.raw[VAR_4 + 10];

  VAR_3 = FUNC_3(VAR_0->context, VAR_2->port_num,
        VAR_2->grh.sgid_index, &VAR_6);
  if (VAR_3)
   return VAR_3;

  VAR_1->av.dlid = FUNC_1(0xc000);
  VAR_1->av.port_pd |= FUNC_2(1 << 31);

  VAR_5 = FUNC_0(&VAR_6);
 } else
  return 1;

 if (VAR_5 != 0xffff) {
  VAR_1->av.port_pd |= FUNC_2(1 << 29);
  VAR_1->vlan = VAR_5 | ((VAR_2->sl & 7) << 13);
 }

 return 0;
}
