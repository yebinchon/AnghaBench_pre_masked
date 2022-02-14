
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mdio_ops {int dummy; } ;
struct cphy {int addr; } ;
struct TYPE_4__ {int adapter; struct cphy phy; } ;
typedef TYPE_1__ pinfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cphy*,int ,TYPE_1__*,int,int *,struct mdio_ops const*,int,char*) ;
 int FUNC_1 (struct cphy*,int ,int ,unsigned int*) ;
 int VAR_5 ;

int FUNC_2(pinfo_t *VAR_6, int VAR_7,
         const struct mdio_ops *VAR_8)
{
 unsigned int VAR_9;
 struct cphy *VAR_10 = &VAR_6->phy;

 FUNC_0(VAR_10, VAR_6->adapter, VAR_6, VAR_7, &VAR_5, VAR_8,
    VAR_2 | VAR_3 | VAR_4,
    "10GBASE-CX4");





 if (!VAR_7 && !FUNC_1(VAR_10, VAR_0, VAR_1, &VAR_9) &&
     VAR_9 == 0xffff)
  VAR_10->addr = 1;
 return 0;
}
