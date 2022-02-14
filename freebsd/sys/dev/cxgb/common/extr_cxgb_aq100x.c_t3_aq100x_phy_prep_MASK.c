
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mdio_ops {int dummy; } ;
struct cphy {int dummy; } ;
struct TYPE_4__ {struct cphy phy; int * adapter; } ;
typedef TYPE_1__ pinfo_t ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int *,char*,int,...) ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct cphy*) ;
 int FUNC_2 (struct cphy*,int *,TYPE_1__*,int,int *,struct mdio_ops const*,int,char*) ;
 int FUNC_3 (struct cphy*,int ,int ,unsigned int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ,unsigned int,unsigned int) ;

int
FUNC_6(pinfo_t *VAR_20, int VAR_21,
         const struct mdio_ops *VAR_22)
{
 struct cphy *VAR_23 = &VAR_20->phy;
 unsigned int VAR_24, VAR_25, VAR_26, VAR_27;
 int VAR_28;
 adapter_t *VAR_29 = VAR_20->adapter;

 FUNC_2(&VAR_20->phy, VAR_29, VAR_20, VAR_21, &VAR_19, VAR_22,
    VAR_14 | VAR_13 |
    VAR_18 | VAR_16 | VAR_15 |
    VAR_17, "1000/10GBASE-T");




 VAR_26 = VAR_21 ? VAR_7 : VAR_8;
 FUNC_5(VAR_29, VAR_4, VAR_26, 0);
 FUNC_4(1);
 FUNC_5(VAR_29, VAR_4, VAR_26, VAR_26);




 FUNC_4(1000);
 VAR_27 = 500;
 do {
  VAR_28 = FUNC_3(VAR_23, VAR_9, VAR_12, &VAR_24);
  if (VAR_28 || VAR_24 == 0xffff) {



   FUNC_0(VAR_29, "PHY%d: reset failed (0x%x, 0x%x).\n",
    VAR_21, VAR_28, VAR_24);
   goto done;
  }

  VAR_24 &= VAR_6;
  if (VAR_24)
   FUNC_4(10);
 } while (VAR_24 && --VAR_27);
 if (VAR_24) {
  FUNC_0(VAR_29, "PHY%d: reset timed out (0x%x).\n",
   VAR_21, VAR_24);

  goto done;
 }


 (void) FUNC_3(VAR_23, VAR_10, VAR_0, &VAR_24);
 if (VAR_24 < 0x115)
  FUNC_0(VAR_29, "PHY%d: unknown firmware %d.%d\n", VAR_21,
      VAR_24 >> 8, VAR_24 & 0xff);


 (void) FUNC_3(VAR_23, VAR_9, VAR_12, &VAR_24);
 if ((VAR_24 & VAR_5) == 0)
  FUNC_0(VAR_29, "PHY%d does not start in low power mode.\n",
   VAR_21);




 VAR_24 = VAR_25 = 0;
 (void) FUNC_3(VAR_23, VAR_11, VAR_2, &VAR_24);
 (void) FUNC_3(VAR_23, VAR_11, VAR_3, &VAR_25);
 if (VAR_24 != 0x1b || VAR_25 != 0x1b)
  FUNC_0(VAR_29, "PHY%d: incorrect XAUI settings "
      "(0x%x, 0x%x).\n", VAR_21, VAR_24, VAR_25);
 VAR_24 = 0;
 (void) FUNC_3(VAR_23, VAR_11, VAR_1, &VAR_24);
 if ((VAR_24 & 0xf) != 0xf)
  FUNC_0(VAR_29, "PHY%d: incorrect 1000-X settings "
      "(0x%x).\n", VAR_21, VAR_24);

 (void) FUNC_1(VAR_23);
done:
 return (VAR_28);
}
