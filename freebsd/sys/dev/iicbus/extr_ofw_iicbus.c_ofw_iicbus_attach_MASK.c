
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int addr; int rl; } ;
struct ofw_iicbus_devinfo {TYPE_1__ opd_dinfo; int opd_obdinfo; } ;
struct iicbus_softc {int lock; int dev; } ;
typedef int ssize_t ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;
typedef int paddr ;
typedef int freq ;
typedef int device_t ;
typedef int compat ;


 struct iicbus_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,char*,int*,int) ;
 int FUNC_4 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (int ,struct ofw_iicbus_devinfo*) ;
 int FUNC_12 (struct ofw_iicbus_devinfo*,int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int ,int ,int *) ;
 struct ofw_iicbus_devinfo* FUNC_15 (int,int ,int) ;
 int FUNC_16 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_17 (int *,scalar_t__) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int ,scalar_t__,int *,int *) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (char*) ;
 scalar_t__ FUNC_22 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_23(device_t VAR_5)
{
 struct iicbus_softc *VAR_6 = FUNC_0(VAR_5);
 struct ofw_iicbus_devinfo *VAR_7;
 phandle_t VAR_8, VAR_9, VAR_10;
 pcell_t VAR_11, VAR_12;
 device_t VAR_13;
 ssize_t VAR_14;
 char VAR_15[255];
 char *VAR_16;
 u_int VAR_17 = 0;

 VAR_6->dev = VAR_5;
 FUNC_16(&VAR_6->lock, "iicbus", ((void*)0), VAR_1);







 VAR_9 = FUNC_18(VAR_5);
 VAR_11 = 0;
 FUNC_3(VAR_9, "clock-frequency", &VAR_11, sizeof(VAR_11));
 FUNC_13(VAR_5, VAR_11);

 FUNC_14(VAR_5, VAR_0, 0, ((void*)0));

 FUNC_9(VAR_5);
 FUNC_7(VAR_5);





 VAR_10 = FUNC_5(0);
 VAR_14 = FUNC_4(VAR_10, "compatible", VAR_15,
    sizeof(VAR_15));
 if (VAR_14 != -1) {
     for (VAR_16 = VAR_15; VAR_16 < VAR_15 + VAR_14;
  VAR_16 += FUNC_21(VAR_16) + 1) {
  if (FUNC_22(VAR_16, "MacRISC", 7) == 0)
      VAR_17 = 1;
     }
 }




 for (VAR_8 = FUNC_1(VAR_9); VAR_8 != 0; VAR_8 = FUNC_5(VAR_8)) {





  if (FUNC_3(VAR_8, "i2c-address", &VAR_12,
      sizeof(VAR_12)) == -1)
   if (FUNC_3(VAR_8, "reg", &VAR_12,
       sizeof(VAR_12)) == -1)
    continue;





  VAR_7 = FUNC_15(sizeof(struct ofw_iicbus_devinfo), VAR_2,
      VAR_3 | VAR_4);
  if (VAR_7 == ((void*)0))
   continue;






  if (VAR_17)
      VAR_7->opd_dinfo.addr = VAR_12;
  else
      VAR_7->opd_dinfo.addr = VAR_12 << 1;

  if (FUNC_17(&VAR_7->opd_obdinfo, VAR_8) !=
      0) {
   FUNC_12(VAR_7, VAR_2);
   continue;
  }

  VAR_13 = FUNC_10(VAR_5, ((void*)0), -1);
  FUNC_20(&VAR_7->opd_dinfo.rl);
  FUNC_19(VAR_13, VAR_8,
     &VAR_7->opd_dinfo.rl, ((void*)0));
  FUNC_11(VAR_13, VAR_7);
 }


 FUNC_2(FUNC_6(VAR_9), VAR_5);
 return (FUNC_8(VAR_5));
}
