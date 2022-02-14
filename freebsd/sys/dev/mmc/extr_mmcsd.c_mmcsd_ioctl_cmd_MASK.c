
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_long ;
struct mmcsd_softc {int rca; int ext_csd; int flags; int mmcbus; int dev; } ;
struct mmcsd_part {scalar_t__ ro; int ioctl; int type; struct mmcsd_softc* sc; int ioctl_mtx; } ;
struct mmc_ioc_cmd {int write_flag; int blksz; int blocks; int opcode; int arg; scalar_t__ is_acmd; scalar_t__ data_ptr; int response; int flags; } ;
struct mmc_data {int opcode; int arg; int len; int error; int resp; struct mmc_data* data; int flags; } ;
struct mmc_command {int opcode; int arg; int len; int error; int resp; struct mmc_command* data; int flags; } ;
typedef int device_t ;
typedef int data ;
typedef int cmd ;


 int FUNC_0 (int) ;
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
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct mmcsd_part*) ;
 int FUNC_4 (struct mmcsd_part*) ;

 int VAR_17 ;
 int VAR_18 ;


 int VAR_19 ;




 int VAR_20 ;







 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_25 ;
 int FUNC_7 (void*,void*,int) ;
 int FUNC_8 (void*,void*,int) ;
 int FUNC_9 (void*,int ) ;
 void* FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (struct mmc_data*,int ,int) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ,int,int *) ;
 int FUNC_15 (int ,int ,int,struct mmc_data*,int ) ;
 int FUNC_16 (int ,int ,struct mmc_data*,int ) ;
 int FUNC_17 (struct mmcsd_softc*,int,int) ;
 int FUNC_18 (int ,int ,int,int) ;
 int FUNC_19 (struct mmcsd_part*,int *,int ,char*,int ) ;
 int FUNC_20 (struct mmcsd_part*) ;

__attribute__((used)) static int
FUNC_21(struct mmcsd_part *VAR_26, struct mmc_ioc_cmd *VAR_27, int VAR_28)
{
 struct mmc_command VAR_29;
 struct mmc_data VAR_30;
 struct mmcsd_softc *VAR_31;
 device_t VAR_32, VAR_33;
 void *VAR_34;
 u_long VAR_35;
 int VAR_36, VAR_37;
 uint32_t VAR_38;
 uint16_t VAR_39;

 if ((VAR_28 & VAR_14) == 0 && VAR_27->write_flag != 0)
  return (VAR_0);

 if (VAR_26->ro == VAR_25 && VAR_27->write_flag != 0)
  return (VAR_8);
 FUNC_3(VAR_26);
 while (VAR_26->ioctl != 0) {
  if (VAR_26->ioctl < 0) {
   FUNC_4(VAR_26);
   return (VAR_5);
  }
  FUNC_19(VAR_26, &VAR_26->ioctl_mtx, 0, "mmcsd IOCTL", 0);
 }
 VAR_26->ioctl = 1;
 FUNC_4(VAR_26);

 VAR_36 = 0;
 VAR_34 = ((void*)0);
 VAR_35 = VAR_27->blksz * VAR_27->blocks;
 if (VAR_35 > VAR_20) {
  VAR_36 = VAR_6;
  goto out;
 }
 if (VAR_35 != 0) {
  VAR_34 = FUNC_10(VAR_35, VAR_22, VAR_23);
  VAR_36 = FUNC_7((void *)(uintptr_t)VAR_27->data_ptr, VAR_34, VAR_35);
  if (VAR_36 != 0)
   goto out;
 }
 FUNC_12(&VAR_29, 0, sizeof(VAR_29));
 FUNC_12(&VAR_30, 0, sizeof(VAR_30));
 VAR_29.opcode = VAR_27->opcode;
 VAR_29.arg = VAR_27->arg;
 VAR_29.flags = VAR_27->flags;
 if (VAR_35 != 0) {
  VAR_30.len = VAR_35;
  VAR_30.data = VAR_34;
  VAR_30.flags = VAR_27->write_flag != 0 ? VAR_18 :
      VAR_17;
  VAR_29.data = &VAR_30;
 }
 VAR_31 = VAR_26->sc;
 VAR_39 = VAR_31->rca;
 if (VAR_27->is_acmd == 0) {

  switch (VAR_29.opcode) {
  case 130:
  case 134:
   VAR_36 = VAR_7;
   goto out;
  case 128:
   if ((VAR_29.arg & 0x1) == 0)
    break;

  case 129:
  case 132:
  case 133:
  case 131:
  case 135:
  case 136:
  case 141:
   VAR_29.arg = (VAR_29.arg & 0x0000FFFF) | (VAR_39 << 16);
   break;
  default:
   break;
  }




  if (VAR_29.opcode == VAR_21 && VAR_34 != ((void*)0) &&
      (((uint8_t *)VAR_34)[VAR_10] &
      VAR_12) != VAR_26->type) {
   VAR_36 = VAR_2;
   goto out;
  }
 }
 VAR_32 = VAR_31->dev;
 VAR_33 = VAR_31->mmcbus;
 FUNC_1(VAR_33, VAR_32);
 VAR_36 = FUNC_18(VAR_33, VAR_32, VAR_39, VAR_26->type);
 if (VAR_36 != VAR_19)
  goto release;
 if (VAR_26->type == VAR_13) {
  VAR_36 = FUNC_17(VAR_31, VAR_27->blocks,
      VAR_27->write_flag & (1 << 31));
  if (VAR_36 != VAR_19)
   goto switch_back;
 }
 if (VAR_27->write_flag != 0)
  VAR_31->flags |= VAR_16;
 if (VAR_27->is_acmd != 0)
  (void)FUNC_15(VAR_33, VAR_32, VAR_39, &VAR_29, 0);
 else
  (void)FUNC_16(VAR_33, VAR_32, &VAR_29, 0);
 if (VAR_26->type == VAR_13) {




  VAR_37 = VAR_15;
  do {
   VAR_36 = FUNC_14(VAR_33, VAR_32, VAR_39, &VAR_38);
   if (VAR_36 != VAR_19)
    break;
   if (FUNC_6(VAR_38) == 0 &&
       FUNC_5(VAR_38) != VAR_24)
    break;
   FUNC_0(1000);
  } while (VAR_37-- > 0);
 }





 if (VAR_29.opcode == VAR_21) {
  VAR_36 = FUNC_13(VAR_33, VAR_32, VAR_31->ext_csd);
  if (VAR_36 != VAR_19)
   goto release;
 }
switch_back:
 if (VAR_26->type == VAR_13) {




  VAR_36 = FUNC_18(VAR_33, VAR_32, VAR_39,
      VAR_11);
  if (VAR_36 != VAR_19)
   goto release;
 }
 FUNC_2(VAR_33, VAR_32);
 if (VAR_29.error != VAR_19) {
  switch (VAR_29.error) {
  case 137:
   VAR_36 = VAR_9;
   break;
  case 140:
   VAR_36 = VAR_1;
   break;
  case 139:
   VAR_36 = VAR_2;
   break;
  case 138:
   VAR_36 = VAR_4;
   break;
  default:
   VAR_36 = VAR_3;
   break;
  }
  goto out;
 }
 FUNC_11(VAR_27->response, VAR_29.resp, 4 * sizeof(uint32_t));
 if (VAR_27->write_flag == 0 && VAR_35 != 0) {
  VAR_36 = FUNC_8(VAR_34, (void *)(uintptr_t)VAR_27->data_ptr, VAR_35);
  if (VAR_36 != 0)
   goto out;
 }
 goto out;

release:
 FUNC_2(VAR_33, VAR_32);
 VAR_36 = VAR_3;

out:
 FUNC_3(VAR_26);
 VAR_26->ioctl = 0;
 FUNC_4(VAR_26);
 FUNC_20(VAR_26);
 if (VAR_34 != ((void*)0))
  FUNC_9(VAR_34, VAR_22);
 return (VAR_36);
}
