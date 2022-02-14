
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int state; int rate; int cap; int volt; } ;
struct acpi_smbat_softc {TYPE_1__ bst; int bst_lastupdated; } ;
struct acpi_bst {int dummy; } ;
typedef int int16_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct acpi_smbat_softc*,int ,int ,int*) ;
 struct acpi_smbat_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct acpi_bst*,TYPE_1__*,int) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_14, struct acpi_bst *VAR_15)
{
 struct acpi_smbat_softc *VAR_16;
 int VAR_17;
 uint32_t VAR_18;
 int16_t VAR_19;
 uint8_t VAR_20;

 FUNC_0(VAR_13);

 VAR_20 = VAR_4;
 VAR_17 = VAR_3;
 VAR_16 = FUNC_5(VAR_14);

 if (!FUNC_2(&VAR_16->bst_lastupdated)) {
  VAR_17 = 0;
  goto out;
 }

 if (FUNC_4(VAR_16, VAR_20, VAR_8, &VAR_19))
  goto out;
 if (VAR_19 & VAR_5)
  VAR_18 = 10;
 else
  VAR_18 = 1;


 if (FUNC_4(VAR_16, VAR_20, VAR_9, &VAR_19))
  goto out;

 VAR_16->bst.state = 0;
 if (VAR_19 & VAR_6)
  VAR_16->bst.state |= VAR_2;

 if (VAR_19 & VAR_7)
  VAR_16->bst.state |= VAR_1;





 if (FUNC_4(VAR_16, VAR_20, VAR_10, &VAR_19))
  goto out;

 if (VAR_19 > 0) {
  VAR_16->bst.rate = VAR_19 * VAR_18;
  VAR_16->bst.state &= ~VAR_6;
  VAR_16->bst.state |= VAR_0;
 } else if (VAR_19 < 0)
  VAR_16->bst.rate = (-VAR_19) * VAR_18;
 else
  VAR_16->bst.rate = 0;

 if (FUNC_4(VAR_16, VAR_20, VAR_11, &VAR_19))
  goto out;
 VAR_16->bst.cap = VAR_19 * VAR_18;

 if (FUNC_4(VAR_16, VAR_20, VAR_12, &VAR_19))
  goto out;
 VAR_16->bst.volt = VAR_19;

 FUNC_3(&VAR_16->bst_lastupdated);
 VAR_17 = 0;

out:
 if (VAR_17 == 0)
  FUNC_6(VAR_15, &VAR_16->bst, sizeof(VAR_16->bst));
 FUNC_1(VAR_13);
 return (VAR_17);
}
