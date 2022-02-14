
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mdio_ops {int dummy; } ;
struct TYPE_4__ {int adapter; int phy; } ;
typedef TYPE_1__ pinfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,TYPE_1__*,int,int *,struct mdio_ops const*,int,char*) ;
 int VAR_3 ;

int FUNC_1(pinfo_t *VAR_4, int VAR_5,
       const struct mdio_ops *VAR_6)
{
 FUNC_0(&VAR_4->phy, VAR_4->adapter, VAR_4, VAR_5, &VAR_3, VAR_6,
    VAR_0 | VAR_1 | VAR_2,
    "10GBASE-CX4");
 return 0;
}
