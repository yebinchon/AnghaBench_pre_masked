
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mdio_ops {int dummy; } ;
struct cphy {int dummy; } ;
struct TYPE_4__ {int adapter; struct cphy phy; } ;
typedef TYPE_1__ pinfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cphy*,int ,TYPE_1__*,int,int *,struct mdio_ops const*,int,char*) ;
 int FUNC_1 (struct cphy*,int ,int ,int) ;
 int FUNC_2 (struct cphy*,int) ;
 int VAR_9 ;

int FUNC_3(pinfo_t *VAR_10, int VAR_11,
     const struct mdio_ops *VAR_12)
{
 struct cphy *VAR_13 = &VAR_10->phy;
 int VAR_14;

 FUNC_0(VAR_13, VAR_10->adapter, VAR_10, VAR_11, &VAR_9, VAR_12,
    VAR_4 | VAR_3 |
    VAR_2 | VAR_5 | VAR_7 |
    VAR_8 | VAR_6, "10/100/1000BASE-T");


 VAR_14 = FUNC_1(VAR_13, 0, VAR_0, 0xb);
 if (!VAR_14)
  VAR_14 = FUNC_1(VAR_13, 0, VAR_1, 0x8004);

 if (!VAR_14)
  VAR_14 = FUNC_2(VAR_13, 1);
 return VAR_14;
}
