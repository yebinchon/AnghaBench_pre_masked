
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union ctl_io {int scsiio; } ;
struct mount {int dummy; } ;
struct ctl_be_block_lun {int io_lock; TYPE_2__* vn; } ;
struct ctl_be_block_io {int ds_t0; int ds_trans_type; int ds_tag_type; int io_len; TYPE_1__* lun; scalar_t__ io_arg; union ctl_io* io; } ;
struct TYPE_7__ {struct mount* v_mount; } ;
struct TYPE_6__ {int disk_stats; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct mount*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ctl_be_block_io*) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *) ;
 int VAR_6 ;
 int FUNC_8 (int ,int ,int ,int ,int *,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct mount*) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (TYPE_2__*,struct mount**,int ) ;

__attribute__((used)) static void
FUNC_15(struct ctl_be_block_lun *VAR_7,
   struct ctl_be_block_io *VAR_8)
{
 union ctl_io *VAR_9 = VAR_8->io;
 struct mount *VAR_10;
 int VAR_11, VAR_12;

 FUNC_0("entered\n");

 FUNC_4(&VAR_8->ds_t0);
 FUNC_10(&VAR_7->io_lock);
 FUNC_9(VAR_8->lun->disk_stats, &VAR_8->ds_t0);
 FUNC_11(&VAR_7->io_lock);

 (void) FUNC_14(VAR_7->vn, &VAR_10, VAR_5);

 if (FUNC_1(VAR_10) ||
     ((VAR_10 == ((void*)0)) && FUNC_1(VAR_7->vn->v_mount)))
  VAR_12 = VAR_2;
 else
  VAR_12 = VAR_0;
 FUNC_13(VAR_7->vn, VAR_12 | VAR_1);
 VAR_11 = FUNC_2(VAR_7->vn, VAR_8->io_arg ? VAR_3 : VAR_4,
     VAR_6);
 FUNC_3(VAR_7->vn, 0);

 FUNC_12(VAR_10);

 FUNC_10(&VAR_7->io_lock);
 FUNC_8(VAR_8->lun->disk_stats, VAR_8->io_len,
     VAR_8->ds_tag_type, VAR_8->ds_trans_type,
             ((void*)0), &VAR_8->ds_t0);
 FUNC_11(&VAR_7->io_lock);

 if (VAR_11 == 0)
  FUNC_7(&VAR_9->scsiio);
 else {

  FUNC_6(&VAR_9->scsiio,
                    1,
                      0xbad1);
 }

 FUNC_5(VAR_8);
}
