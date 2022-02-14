
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct torus {int z_sz; int y_sz; int x_sz; } ;
struct t_switch {TYPE_1__* ptgrp; int k; int j; int i; } ;
struct TYPE_2__ {int port_cnt; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static
bool FUNC_1(struct torus *VAR_0, unsigned VAR_1,
    struct t_switch *VAR_2, struct t_switch *VAR_3,
    unsigned *VAR_4)
{
 int VAR_5;
 unsigned VAR_6;
 bool VAR_7 = 0;

 switch (VAR_1) {
 case 0:
  VAR_5 = FUNC_0(VAR_2->i, VAR_3->i, VAR_0->x_sz);
  break;
 case 1:
  VAR_5 = FUNC_0(VAR_2->j, VAR_3->j, VAR_0->y_sz);
  break;
 case 2:
  VAR_5 = FUNC_0(VAR_2->k, VAR_3->k, VAR_0->z_sz);
  break;
 default:
  goto out;
 }

 VAR_1 *= 2;
 if (VAR_5 > 0)
  VAR_6 = VAR_1 + 1;
 else if (VAR_5 < 0)
  VAR_6 = VAR_1;
 else
  goto out;

 if (!VAR_2->ptgrp[VAR_6].port_cnt)
  goto out;

 *VAR_4 = VAR_6;
 VAR_7 = 1;
out:
 return VAR_7;
}
