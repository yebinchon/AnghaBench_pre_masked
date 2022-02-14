
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmpstr ;
struct ctl_lun_create_params {int flags; int device_type; int lun_size_bytes; int blocksize_bytes; char* serial_num; char* device_id; scalar_t__ req_lun_id; } ;
struct TYPE_3__ {struct ctl_lun_create_params create; } ;
struct ctl_lun_req {int status; int error_str; int args_nvl; TYPE_1__ reqdata; } ;
struct ctl_be_lun {int lun_type; int flags; int blocksize; int maxlba; int options; scalar_t__ lun_id; scalar_t__ device_id; scalar_t__ serial_num; int * be; int lun_config_status; int lun_shutdown; scalar_t__ req_lun_id; struct ctl_be_block_lun* be_lun; } ;
struct ctl_be_block_softc {int num_luns; int lock; int lun_list; } ;
struct ctl_be_block_lun {int flags; int size_bytes; int size_blocks; int num_threads; int io_lock; int queue_lock; int * lun_zone; struct ctl_be_block_lun* dev_path; int * io_taskqueue; int disk_stats; struct ctl_be_lun cbe_lun; int lunname; int io_task; int * vn; int datamove_queue; int config_write_queue; int config_read_queue; int input_queue; struct ctl_be_block_softc* softc; struct ctl_lun_create_params params; } ;
struct TYPE_4__ {int flags; scalar_t__ ha_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
 int FUNC_0 (int,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ctl_be_block_lun*,int ) ;
 int FUNC_3 (int *,struct ctl_be_block_lun*,int ,int ) ;
 int FUNC_4 (int *,int ,int ,struct ctl_be_block_lun*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 TYPE_2__* VAR_28 ;
 int FUNC_5 (struct ctl_be_lun*) ;
 int FUNC_6 (struct ctl_be_block_lun*) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_7 (struct ctl_be_block_lun*,struct ctl_lun_req*) ;
 int VAR_33 ;
 int FUNC_8 (char*,scalar_t__,int,int ,int,int ) ;
 char* FUNC_9 (int ,char*,int *) ;
 int FUNC_10 (struct ctl_be_block_lun*,int ) ;
 int VAR_34 ;
 struct ctl_be_block_lun* FUNC_11 (int,int ,int) ;
 int FUNC_12 (struct ctl_be_block_lun*,int *,int ,char*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,char*,int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*,int,char*,...) ;
 int FUNC_20 (int ,char*,int) ;
 scalar_t__ FUNC_21 (char const*,char*) ;
 int FUNC_22 (char*,char*,int ) ;
 int FUNC_23 (char const*,int *,int ) ;
 int * FUNC_24 (int ,int,int ,int **) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int **,int,int ,char*,int ) ;
 int VAR_35 ;
 int * FUNC_27 (int ,int ,int *,int *,int *,int *,int ,int ) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static int
FUNC_29(struct ctl_be_block_softc *VAR_36, struct ctl_lun_req *VAR_37)
{
 struct ctl_be_lun *VAR_38;
 struct ctl_be_block_lun *VAR_39;
 struct ctl_lun_create_params *VAR_40;
 char VAR_41[16];
 char VAR_42[32];
 const char *VAR_43;
 int VAR_44, VAR_45;
 int VAR_46;

 VAR_40 = &VAR_37->reqdata.create;
 VAR_44 = 0;
 VAR_37->status = VAR_13;

 VAR_39 = FUNC_11(sizeof(*VAR_39), VAR_20, VAR_22 | VAR_21);
 VAR_38 = &VAR_39->cbe_lun;
 VAR_38->be_lun = VAR_39;
 VAR_39->params = VAR_37->reqdata.create;
 VAR_39->softc = VAR_36;
 FUNC_1(&VAR_39->input_queue);
 FUNC_1(&VAR_39->config_read_queue);
 FUNC_1(&VAR_39->config_write_queue);
 FUNC_1(&VAR_39->datamove_queue);
 FUNC_20(VAR_39->lunname, "cblk%d", VAR_36->num_luns);
 FUNC_14(&VAR_39->io_lock, "cblk io lock", ((void*)0), VAR_19);
 FUNC_14(&VAR_39->queue_lock, "cblk queue lock", ((void*)0), VAR_19);
 VAR_38->options = FUNC_17(VAR_37->args_nvl);
 VAR_39->lun_zone = FUNC_27(VAR_39->lunname, VAR_0,
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, 0);
 if (VAR_39->lun_zone == ((void*)0)) {
  FUNC_19(VAR_37->error_str, sizeof(VAR_37->error_str),
    "error allocating UMA zone");
  goto bailout_error;
 }

 if (VAR_40->flags & VAR_8)
  VAR_38->lun_type = VAR_40->device_type;
 else
  VAR_38->lun_type = VAR_26;
 VAR_39->flags = VAR_2;
 VAR_38->flags = 0;
 VAR_43 = FUNC_9(VAR_38->options, "ha_role", ((void*)0));
 if (VAR_43 != ((void*)0)) {
  if (FUNC_21(VAR_43, "primary") == 0)
   VAR_38->flags |= VAR_11;
 } else if (VAR_28->flags & VAR_4)
  VAR_38->flags |= VAR_11;

 if (VAR_38->lun_type == VAR_26 ||
     VAR_38->lun_type == VAR_25) {
  VAR_39->size_bytes = VAR_40->lun_size_bytes;
  if (VAR_40->blocksize_bytes != 0)
   VAR_38->blocksize = VAR_40->blocksize_bytes;
  else if (VAR_38->lun_type == VAR_25)
   VAR_38->blocksize = 2048;
  else
   VAR_38->blocksize = 512;
  VAR_39->size_blocks = VAR_39->size_bytes / VAR_38->blocksize;
  VAR_38->maxlba = (VAR_39->size_blocks == 0) ?
      0 : (VAR_39->size_blocks - 1);

  if ((VAR_38->flags & VAR_11) ||
      VAR_28->ha_mode == VAR_5) {
   VAR_44 = FUNC_7(VAR_39, VAR_37);
   if (VAR_44 != 0) {
    VAR_44 = 0;
    VAR_37->status = VAR_14;
   }
  }
  VAR_45 = VAR_27;
 } else {
  VAR_45 = 1;
 }

 VAR_43 = FUNC_9(VAR_38->options, "num_threads", ((void*)0));
 if (VAR_43 != ((void*)0)) {
  VAR_46 = FUNC_23(VAR_43, ((void*)0), 0);






  if (VAR_46 < 1) {
   FUNC_19(VAR_37->error_str, sizeof(VAR_37->error_str),
     "invalid number of threads %s",
     VAR_41);
   goto bailout_error;
  }
  VAR_45 = VAR_46;
 }

 if (VAR_39->vn == ((void*)0))
  VAR_38->flags |= VAR_10;

 VAR_40->lun_size_bytes = VAR_39->size_bytes;
 VAR_40->blocksize_bytes = VAR_38->blocksize;
 if (VAR_40->flags & VAR_9) {
  VAR_38->req_lun_id = VAR_40->req_lun_id;
  VAR_38->flags |= VAR_9;
 } else
  VAR_38->req_lun_id = 0;

 VAR_38->lun_shutdown = VAR_32;
 VAR_38->lun_config_status = VAR_31;
 VAR_38->be = &VAR_29;

 if ((VAR_40->flags & VAR_12) == 0) {
  FUNC_19(VAR_42, sizeof(VAR_42), "MYSERIAL%04d",
    VAR_36->num_luns);
  FUNC_22((char *)VAR_38->serial_num, VAR_42,
   FUNC_0(sizeof(VAR_38->serial_num), sizeof(VAR_42)));


  FUNC_22((char *)VAR_40->serial_num, VAR_42,
   FUNC_0(sizeof(VAR_40->serial_num), sizeof(VAR_42)));
 } else {
  FUNC_22((char *)VAR_38->serial_num, VAR_40->serial_num,
   FUNC_0(sizeof(VAR_38->serial_num),
   sizeof(VAR_40->serial_num)));
 }
 if ((VAR_40->flags & VAR_7) == 0) {
  FUNC_19(VAR_42, sizeof(VAR_42), "MYDEVID%04d", VAR_36->num_luns);
  FUNC_22((char *)VAR_38->device_id, VAR_42,
   FUNC_0(sizeof(VAR_38->device_id), sizeof(VAR_42)));


  FUNC_22((char *)VAR_40->device_id, VAR_42,
   FUNC_0(sizeof(VAR_40->device_id), sizeof(VAR_42)));
 } else {
  FUNC_22((char *)VAR_38->device_id, VAR_40->device_id,
   FUNC_0(sizeof(VAR_38->device_id),
       sizeof(VAR_40->device_id)));
 }

 FUNC_4(&VAR_39->io_task, 0, VAR_33, VAR_39);

 VAR_39->io_taskqueue = FUNC_24(VAR_39->lunname, VAR_21,
     VAR_35, &VAR_39->io_taskqueue);

 if (VAR_39->io_taskqueue == ((void*)0)) {
  FUNC_19(VAR_37->error_str, sizeof(VAR_37->error_str),
    "unable to create taskqueue");
  goto bailout_error;
 }
 VAR_44 = FUNC_26(&VAR_39->io_taskqueue,
                     VAR_45,
                  VAR_24,

      "%s taskq", VAR_39->lunname);

 if (VAR_44 != 0)
  goto bailout_error;

 VAR_39->num_threads = VAR_45;

 FUNC_15(&VAR_36->lock);
 VAR_36->num_luns++;
 FUNC_2(&VAR_36->lun_list, VAR_39, VAR_34);

 FUNC_16(&VAR_36->lock);

 VAR_44 = FUNC_5(&VAR_39->cbe_lun);
 if (VAR_44 != 0) {
  FUNC_15(&VAR_36->lock);
  FUNC_3(&VAR_36->lun_list, VAR_39, VAR_30,
         VAR_34);
  VAR_36->num_luns--;
  FUNC_16(&VAR_36->lock);
  FUNC_19(VAR_37->error_str, sizeof(VAR_37->error_str),
    "ctl_add_lun() returned error %d, see dmesg for "
    "details", VAR_44);
  VAR_44 = 0;
  goto bailout_error;
 }

 FUNC_15(&VAR_36->lock);





 VAR_39->flags |= VAR_3;

 while (VAR_39->flags & VAR_2) {
  VAR_44 = FUNC_12(VAR_39, &VAR_36->lock, VAR_23, "ctlblk", 0);
  if (VAR_44 == VAR_18)
   break;
 }
 VAR_39->flags &= ~VAR_3;

 if (VAR_39->flags & VAR_1) {
  FUNC_19(VAR_37->error_str, sizeof(VAR_37->error_str),
    "LUN configuration error, see dmesg for details");
  FUNC_3(&VAR_36->lun_list, VAR_39, VAR_30,
         VAR_34);
  VAR_36->num_luns--;
  FUNC_16(&VAR_36->lock);
  goto bailout_error;
 } else {
  VAR_40->req_lun_id = VAR_38->lun_id;
 }

 FUNC_16(&VAR_36->lock);

 VAR_39->disk_stats = FUNC_8("cbb", VAR_40->req_lun_id,
            VAR_38->blocksize,
            VAR_15,
            VAR_38->lun_type
            | VAR_17,
            VAR_16);

 return (VAR_44);

bailout_error:
 VAR_37->status = VAR_6;

 if (VAR_39->io_taskqueue != ((void*)0))
  FUNC_25(VAR_39->io_taskqueue);
 FUNC_6(VAR_39);
 if (VAR_39->dev_path != ((void*)0))
  FUNC_10(VAR_39->dev_path, VAR_20);
 if (VAR_39->lun_zone != ((void*)0))
  FUNC_28(VAR_39->lun_zone);
 FUNC_18(VAR_38->options);
 FUNC_13(&VAR_39->queue_lock);
 FUNC_13(&VAR_39->io_lock);
 FUNC_10(VAR_39, VAR_20);

 return (VAR_44);
}
