
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,TYPE_1__*,int,int *,struct mdio_ops const*,int,char*) ;
 int FUNC_1 (int) ;
 int VAR_5 ;

int FUNC_2(pinfo_t *VAR_6, int VAR_7,
         const struct mdio_ops *VAR_8)
{
 FUNC_0(&VAR_6->phy, VAR_6->adapter, VAR_6, VAR_7, &VAR_5, VAR_8,
    VAR_1 | VAR_0 |
    VAR_3 | VAR_2 | VAR_4,
    "1000/10GBASE-T");
 FUNC_1(500);
 return 0;
}
