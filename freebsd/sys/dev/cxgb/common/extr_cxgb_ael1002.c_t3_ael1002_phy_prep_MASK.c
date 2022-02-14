
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mdio_ops {int dummy; } ;
struct cphy {int modtype; } ;
struct TYPE_4__ {int adapter; struct cphy phy; } ;
typedef TYPE_1__ pinfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cphy*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct cphy*) ;
 int FUNC_2 (struct cphy*,int ) ;
 int FUNC_3 (struct cphy*,int ,TYPE_1__*,int,int *,struct mdio_ops const*,int,char*) ;

int FUNC_4(pinfo_t *VAR_4, int VAR_5,
   const struct mdio_ops *VAR_6)
{
 int VAR_7;
 struct cphy *VAR_8 = &VAR_4->phy;

 FUNC_3(VAR_8, VAR_4->adapter, VAR_4, VAR_5, &VAR_3, VAR_6,
    VAR_0 | VAR_1 | VAR_2,
    "10GBASE-R");
 FUNC_1(VAR_8);
 FUNC_2(VAR_8, 0);

 VAR_7 = FUNC_0(VAR_8, 0);
 if (VAR_7 >= 0)
  VAR_8->modtype = VAR_7;

 return 0;
}
