
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mdio_ops {int dummy; } ;
struct cphy {int caps; char* desc; int * ops; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (struct cphy*,int ,TYPE_1__*,int,int *,struct mdio_ops const*,int,char*) ;
 int FUNC_1 (struct cphy*,int ,int ,unsigned int*) ;
 int FUNC_2 (struct cphy*,int ,int ,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (struct cphy*,int ) ;

int FUNC_6(pinfo_t *VAR_16, int VAR_17,
   const struct mdio_ops *VAR_18)
{
 struct cphy *VAR_19 = &VAR_16->phy;
 int VAR_20;
 unsigned int VAR_21;

 FUNC_0(&VAR_16->phy, VAR_16->adapter, VAR_16, VAR_17, &VAR_15, VAR_18,
    VAR_2 | VAR_1 |
    VAR_0 | VAR_3 | VAR_6 |
    VAR_7 | VAR_5, "10/100/1000BASE-T");
 FUNC_3(20);

 VAR_20 = FUNC_1(VAR_19, 0, VAR_8, &VAR_21);
 if (VAR_20)
  return VAR_20;
 if (VAR_21 & VAR_13) {

  return FUNC_2(VAR_19, 0, VAR_10, 0x100);
 }

 VAR_19->caps = VAR_0 | VAR_3 |
      VAR_6 | VAR_4 | VAR_5;
 VAR_19->desc = "1000BASE-X";
 VAR_19->ops = &VAR_14;

 if ((VAR_20 = FUNC_2(VAR_19, 0, VAR_9, 1)) != 0 ||
     (VAR_20 = FUNC_2(VAR_19, 0, VAR_11, 1)) != 0 ||
     (VAR_20 = FUNC_2(VAR_19, 0, VAR_9, 0)) != 0 ||
     (VAR_20 = FUNC_2(VAR_19, 0, VAR_8,
         VAR_21 | VAR_12)) != 0 ||
     (VAR_20 = FUNC_5(VAR_19, 0)) != 0)
  return VAR_20;

 FUNC_4(5);
 return 0;
}
