
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;
struct tegra_xusb_fw_hdr {int fwimg_len; int boot_codetag; int boot_codesize; int version_id; int fwimg_created_time; } ;
struct tegra_xhci_softc {int fw_size; int dev; scalar_t__ fw_vaddr; int fw_name; } ;
struct firmware {scalar_t__ data; } ;
struct clocktime {int sec; int min; int hour; int year; int mon; int day; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tegra_xhci_softc*,int ) ;
 int FUNC_1 (struct tegra_xhci_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct tegra_xhci_softc*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_8 (struct timespec*,struct clocktime*) ;
 int FUNC_9 (int ,char*,...) ;
 struct firmware* FUNC_10 (int ) ;
 int FUNC_11 (struct firmware const*,int ) ;
 int FUNC_12 (int,int ) ;
 scalar_t__ FUNC_13 (int,int ,int ,unsigned long,int ,int ,int ) ;
 int FUNC_14 (void*,scalar_t__,int) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static int
FUNC_16(struct tegra_xhci_softc *VAR_27)
{
 const struct firmware *VAR_28;
 const struct tegra_xusb_fw_hdr *VAR_29;
 vm_paddr_t VAR_30, VAR_31;
 vm_offset_t VAR_32;
 vm_size_t VAR_33;
 uint32_t VAR_34, VAR_35;
 struct clocktime VAR_36;
 struct timespec VAR_37;
 int VAR_38;


 FUNC_3(VAR_27, VAR_13, VAR_1);
 FUNC_2(3000);


 if (FUNC_0(VAR_27, VAR_18) != 0) {
  FUNC_9(VAR_27->dev,
      "XUSB CPU is already loaded, CPUCTL: 0x%08X\n",
    FUNC_0(VAR_27, VAR_23));
  return (0);
 }

 VAR_28 = FUNC_10(VAR_27->fw_name);
 if (VAR_28 == ((void*)0)) {
  FUNC_9(VAR_27->dev, "Cannot read xusb firmware\n");
  return (VAR_4);
 }


 VAR_29 = (const struct tegra_xusb_fw_hdr *)VAR_28->data;
 VAR_33 = VAR_29->fwimg_len;

 VAR_32 = FUNC_13(VAR_33, VAR_10, 0, -1UL, VAR_11, 0,
     VAR_12);
 VAR_30 = FUNC_15(VAR_32);
 VAR_29 = (const struct tegra_xusb_fw_hdr *)VAR_32;
 FUNC_14((void *)VAR_32, VAR_28->data, VAR_33);

 FUNC_11(VAR_28, VAR_6);
 VAR_27->fw_vaddr = VAR_32;
 VAR_27->fw_size = VAR_33;


 VAR_31 = VAR_30 + sizeof(*VAR_29);
 FUNC_1(VAR_27, VAR_16, VAR_33);
 FUNC_1(VAR_27, VAR_18, VAR_31 & 0xFFFFFFFF);
 FUNC_1(VAR_27, VAR_17, (uint64_t)VAR_31 >> 32);
 FUNC_1(VAR_27, VAR_15, VAR_0);


 FUNC_1(VAR_27, VAR_21,
     VAR_7);


 VAR_34 = FUNC_12(VAR_29->boot_codetag, VAR_14);
 VAR_35 = FUNC_12(VAR_29->boot_codesize, VAR_14);
 FUNC_1(VAR_27, VAR_20,
     FUNC_6(VAR_34) |
     FUNC_7(VAR_35));


 FUNC_1(VAR_27, VAR_21,
     VAR_8);


 FUNC_1(VAR_27, VAR_25, VAR_35);
 FUNC_1(VAR_27, VAR_26,
     FUNC_5(VAR_34) |
     FUNC_4(VAR_34 + VAR_35));

 FUNC_1(VAR_27, VAR_24, 0);

 for (VAR_38 = 500; VAR_38 > 0; VAR_38--) {
  if (FUNC_0(VAR_27, VAR_19) &
       VAR_9)
   break;
  FUNC_2(100);
 }
 if (VAR_38 <= 0) {
  FUNC_9(VAR_27->dev, "Timedout while wating for DMA, "
      "state: 0x%08X\n",
      FUNC_0(VAR_27, VAR_19));
  return (VAR_5);
 }


 FUNC_1(VAR_27, VAR_22, VAR_29->boot_codetag);
 FUNC_1(VAR_27, VAR_23, VAR_2);


 for (VAR_38 = 50; VAR_38 > 0; VAR_38--) {
  if (FUNC_0(VAR_27, VAR_23) == VAR_3)
   break;
  FUNC_2(100);
 }
 if (VAR_38 <= 0) {
  FUNC_9(VAR_27->dev, "Timedout while wating for FALCON cpu, "
      "state: 0x%08X\n", FUNC_0(VAR_27, VAR_23));
  return (VAR_5);
 }

 VAR_37.tv_sec = VAR_29->fwimg_created_time;
 VAR_37.tv_nsec = 0;
 FUNC_8(&VAR_37, &VAR_36);
 FUNC_9(VAR_27->dev,
     " Falcon firmware version: %02X.%02X.%04X,"
     " (%d/%d/%d %d:%02d:%02d UTC)\n",
     (VAR_29->version_id >> 24) & 0xFF,(VAR_29->version_id >> 15) & 0xFF,
     VAR_29->version_id & 0xFFFF,
     VAR_36.day, VAR_36.mon, VAR_36.year,
     VAR_36.hour, VAR_36.min, VAR_36.sec);

 return (0);
}
