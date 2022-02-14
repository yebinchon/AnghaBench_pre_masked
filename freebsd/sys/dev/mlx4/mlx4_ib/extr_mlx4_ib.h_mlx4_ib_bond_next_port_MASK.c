
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx4_ib_dev {int bond_next_port; int num_ports; } ;



__attribute__((used)) static inline u8 FUNC_0(struct mlx4_ib_dev *VAR_0)
{
 VAR_0->bond_next_port = (VAR_0->bond_next_port + 1) % VAR_0->num_ports;

 return VAR_0->bond_next_port + 1;
}
