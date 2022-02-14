
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct viawd_softc {int * wd_res; int wd_rid; int ev_tag; int * sb_dev; int * dev; } ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct viawd_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_1 (int *,int ,int *,int) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int * FUNC_3 (int *) ;
 struct viawd_softc* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,...) ;
 scalar_t__ FUNC_6 (int *,int ,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (struct viawd_softc*,int ) ;
 int FUNC_9 (struct viawd_softc*,int ,scalar_t__) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_10(device_t VAR_10)
{
 device_t VAR_11;
 struct viawd_softc *VAR_12;
 uint32_t VAR_13, VAR_14;

 VAR_12 = FUNC_4(VAR_10);
 VAR_12->dev = VAR_10;

 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_5(VAR_10, "Can not find watchdog device.\n");
  goto fail;
 }
 VAR_12->sb_dev = VAR_11;


 VAR_13 = FUNC_6(VAR_11, VAR_4, 4);
 if (VAR_13 == 0) {
  FUNC_5(VAR_10,
      "Watchdog disabled in BIOS or hardware\n");
  goto fail;
 }


 VAR_12->wd_rid = VAR_4;
 VAR_12->wd_res = FUNC_1(VAR_11, VAR_3, &VAR_12->wd_rid,
     VAR_1 | VAR_2);
 if (VAR_12->wd_res == ((void*)0)) {
  FUNC_5(VAR_10, "Unable to map watchdog memory\n");
  goto fail;
 }
 if (FUNC_7(VAR_12->wd_res) < VAR_7) {
  FUNC_5(VAR_10, "Bad size for watchdog memory: %#x\n",
      (unsigned)FUNC_7(VAR_12->wd_res));
  goto fail;
 }


 VAR_14 = FUNC_8(VAR_12, VAR_5);
 if (VAR_14 & VAR_6) {
  FUNC_5(VAR_10,
      "ERROR: watchdog rebooted the system\n");

  FUNC_9(VAR_12, VAR_5, VAR_14);
 }


 VAR_12->ev_tag = FUNC_0(VAR_9, VAR_8, VAR_12, 0);

 return (0);
fail:
 if (VAR_12->wd_res != ((void*)0))
  FUNC_2(VAR_11, VAR_3,
      VAR_12->wd_rid, VAR_12->wd_res);
 return (VAR_0);
}
