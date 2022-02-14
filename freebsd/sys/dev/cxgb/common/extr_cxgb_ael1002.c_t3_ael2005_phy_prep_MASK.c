
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cphy*,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct cphy*,int ) ;
 int FUNC_2 (struct cphy*,int ,TYPE_1__*,int,int *,struct mdio_ops const*,int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct cphy*,int ,int ,int ,int) ;

int FUNC_5(pinfo_t *VAR_7, int VAR_8,
   const struct mdio_ops *VAR_9)
{
 int VAR_10;
 struct cphy *VAR_11 = &VAR_7->phy;

 FUNC_2(VAR_11, VAR_7->adapter, VAR_7, VAR_8, &VAR_6, VAR_9,
    VAR_2 | VAR_3 | VAR_4 |
    VAR_5, "10GBASE-R");
 FUNC_3(125);
 FUNC_1(VAR_11, 0);

 VAR_10 = FUNC_0(VAR_11, 0);
 if (VAR_10 >= 0)
  VAR_11->modtype = VAR_10;

 return FUNC_4(VAR_11, VAR_1, VAR_0, 0,
       1 << 5);
}
