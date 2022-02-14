
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_h {int dummy; } ;
struct fw_info {struct fw_h fw_h; } ;
struct fw_hdr {int flags; } ;
struct adapter {int flags; int pf; int mbox; scalar_t__ cfcsum; int cfg_file; int dev; } ;
typedef enum dev_state { ____Placeholder_dev_state } dev_state ;


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
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (int ,char*,int,...) ;
 struct fw_info* FUNC_4 (int ) ;
 int FUNC_5 (struct fw_hdr*,int ) ;
 int FUNC_6 (struct adapter*,struct fw_h*,struct fw_h const*,char*,int*) ;
 struct fw_hdr* FUNC_7 (int,int ,int) ;
 int FUNC_8 (int ,int,char*,int) ;
 int FUNC_9 (struct adapter*,int ) ;
 int FUNC_10 (struct adapter*,int ,int ,int ,int*) ;
 int FUNC_11 (struct adapter*,struct fw_hdr*) ;
 int FUNC_12 (struct adapter*,int ) ;

__attribute__((used)) static int
FUNC_13(struct adapter *VAR_13)
{
 int VAR_14, VAR_15 = 0;
 enum dev_state VAR_16;
 struct fw_info *VAR_17;
 struct fw_hdr *VAR_18;
 const struct fw_h *VAR_19;

 VAR_17 = FUNC_4(FUNC_2(VAR_13));
 if (VAR_17 == ((void*)0)) {
  FUNC_3(VAR_13->dev,
      "unable to look up firmware information for chip %d.\n",
      FUNC_2(VAR_13));
  return (VAR_3);
 }
 VAR_19 = &VAR_17->fw_h;


 VAR_18 = FUNC_7(sizeof(*VAR_18), VAR_10, VAR_12 | VAR_11);
restart:
 VAR_14 = -FUNC_11(VAR_13, VAR_18);
 if (VAR_14 != 0) {
  FUNC_3(VAR_13->dev,
      "unable to read firmware header from card's flash: %d\n",
      VAR_14);
  goto done;
 }

 VAR_14 = FUNC_6(VAR_13, (struct fw_h *)VAR_18, VAR_19, ((void*)0),
     &VAR_15);
 if (VAR_14 == VAR_5)
  goto restart;
 if (VAR_14 != 0)
  goto done;

 VAR_14 = FUNC_10(VAR_13, VAR_13->mbox, VAR_13->mbox, VAR_8, &VAR_16);
 if (VAR_14 < 0 || VAR_16 == VAR_1) {
  VAR_14 = -VAR_14;
  FUNC_3(VAR_13->dev,
      "failed to connect to the firmware: %d, %d.  "
      "PCIE_FW 0x%08x\n", VAR_14, VAR_16, FUNC_12(VAR_13, VAR_0));





  goto done;
 }
 FUNC_0(FUNC_1(VAR_18->flags) & VAR_6);
 VAR_13->flags |= VAR_7;

 if (VAR_14 == VAR_13->pf) {
  VAR_13->flags |= VAR_9;
  VAR_14 = FUNC_6(VAR_13, (struct fw_h *)VAR_18, VAR_19,
      ((void*)0), &VAR_15);
  if (VAR_14 == VAR_5)
   VAR_14 = 0;
  else if (VAR_14 != 0)
   goto done;
 } else if (VAR_16 == VAR_2) {





  FUNC_3(VAR_13->dev, "couldn't be master(%d), "
      "device not already initialized either(%d).  "
      "PCIE_FW 0x%08x\n", VAR_14, VAR_16, FUNC_12(VAR_13, VAR_0));
  VAR_14 = VAR_4;
  goto done;
 } else {




  FUNC_3(VAR_13->dev, "PF%d is master, device state %d.  "
      "PCIE_FW 0x%08x\n", VAR_14, VAR_16, FUNC_12(VAR_13, VAR_0));
  FUNC_8(VAR_13->cfg_file, sizeof(VAR_13->cfg_file), "pf%d", VAR_14);
  VAR_13->cfcsum = 0;
  VAR_14 = 0;
 }
done:
 if (VAR_14 != 0 && VAR_13->flags & VAR_7) {
  FUNC_9(VAR_13, VAR_13->mbox);
  VAR_13->flags &= ~VAR_7;
 }
 FUNC_5(VAR_18, VAR_10);
 return (VAR_14);
}
