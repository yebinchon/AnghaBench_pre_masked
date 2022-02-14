
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct bgx {int dev; TYPE_1__* lmac; int bgx_id; } ;
typedef scalar_t__ ssize_t ;
typedef int qlm_mode ;
typedef int phy ;
typedef scalar_t__ phandle_t ;
struct TYPE_2__ {scalar_t__ phyaddr; size_t lmacid; int mac; int * phy_if_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,char*,void**) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (struct bgx*) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (struct bgx*,char*,scalar_t__) ;
 int FUNC_12 (struct bgx*,char*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (char*,int ) ;

int
FUNC_15(struct bgx *VAR_6)
{
 char *VAR_7;
 phandle_t VAR_8, VAR_9;
 phandle_t VAR_10, VAR_11;
 ssize_t VAR_12;
 uint8_t VAR_13;
 char VAR_14[VAR_0];

 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8 == 0) {
  FUNC_13(VAR_6->dev,
      "Could not find bgx%d node in FDT\n", VAR_6->bgx_id);
  return (VAR_1);
 }

 VAR_13 = 0;
 for (VAR_9 = FUNC_0(VAR_8); VAR_9 > 0; VAR_9 = FUNC_7(VAR_9)) {
  VAR_12 = FUNC_3(VAR_9, "qlm-mode", VAR_14, sizeof(VAR_14));
  if (VAR_12 > 0) {
   if (!FUNC_11(VAR_6, VAR_14, VAR_12)) {



    continue;
   }
  } else {
   VAR_12 = FUNC_4(VAR_9, "name",
       (void **)&VAR_7);
   if (VAR_12 <= 0) {
    continue;
   }

   if (!FUNC_12(VAR_6, VAR_7, VAR_12)) {
    FUNC_14(VAR_7, VAR_4);
    continue;
   }
   FUNC_14(VAR_7, VAR_4);
  }


  if (FUNC_2(VAR_9, "reg", &VAR_6->lmac[VAR_13].phyaddr,
      sizeof(VAR_6->lmac[VAR_13].phyaddr)) <= 0) {
   if (VAR_5) {
    FUNC_13(VAR_6->dev,
        "Could not retrieve PHY address\n");
   }
   VAR_6->lmac[VAR_13].phyaddr = VAR_3;
  }

  if (FUNC_2(VAR_9, "phy-handle", &VAR_10,
      sizeof(VAR_10)) <= 0) {
   if (VAR_5) {
    FUNC_13(VAR_6->dev,
        "No phy-handle in PHY node. Skipping...\n");
   }
   continue;
  }
  VAR_10 = FUNC_5(VAR_10);




  VAR_11 = FUNC_6(VAR_10);
  VAR_6->lmac[VAR_13].phy_if_dev =
      FUNC_1(FUNC_8(VAR_11));
  if (VAR_6->lmac[VAR_13].phy_if_dev == ((void*)0)) {
   if (VAR_5) {
    FUNC_13(VAR_6->dev,
        "Could not find interface to PHY\n");
   }
   continue;
  }


  FUNC_10(VAR_9, VAR_6->lmac[VAR_13].mac);

  VAR_6->lmac[VAR_13].lmacid = VAR_13;
  VAR_13++;
  if (VAR_13 == VAR_2)
   break;
 }
 if (VAR_13 == 0) {
  FUNC_13(VAR_6->dev, "Could not find matching PHY\n");
  return (VAR_1);
 }

 return (0);
}
