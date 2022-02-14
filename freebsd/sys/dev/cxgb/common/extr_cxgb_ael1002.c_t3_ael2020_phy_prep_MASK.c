
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
 int FUNC_0 (struct cphy*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct cphy*,int ) ;
 int FUNC_2 (struct cphy*,int ,TYPE_1__*,int,int *,struct mdio_ops const*,int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct cphy*,int ) ;

int FUNC_5(pinfo_t *VAR_6, int VAR_7,
   const struct mdio_ops *VAR_8)
{
 int VAR_9;
 struct cphy *VAR_10 = &VAR_6->phy;

 FUNC_2(VAR_10, VAR_6->adapter, VAR_6, VAR_7, &VAR_4, VAR_8,
  VAR_0 | VAR_1 | VAR_2 |
    VAR_3, "10GBASE-R");
 FUNC_3(125);

 VAR_9 = FUNC_4(VAR_10, VAR_5);
 if (VAR_9)
  return VAR_9;
 FUNC_3(100);

 VAR_9 = FUNC_0(VAR_10, 0);
 if (VAR_9 >= 0)
  VAR_10->modtype = VAR_9;

 FUNC_1(VAR_10, 0);
 return 0;
}
