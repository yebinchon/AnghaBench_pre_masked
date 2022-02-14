
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int * blocker; int start_bt; } ;
struct TYPE_3__ {int cdb_len; int cdb; int tag_num; } ;
union ctl_io {TYPE_2__ io_hdr; TYPE_1__ scsiio; } ;
typedef scalar_t__ uint32_t ;
struct ctl_ooa_entry {int cmd_flags; int cdb_len; int cdb; int start_bt; int lun_num; int tag_num; } ;
struct ctl_ooa {scalar_t__ alloc_num; } ;
struct ctl_lun {int lun_lock; int lun; int ooa_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_5(struct ctl_lun *VAR_10, uint32_t *VAR_11,
     struct ctl_ooa *VAR_12, struct ctl_ooa_entry *VAR_13)
{
 union ctl_io *VAR_14;

 FUNC_3(&VAR_10->lun_lock);
 for (VAR_14 = (union ctl_io *)FUNC_0(&VAR_10->ooa_queue); (VAR_14 != ((void*)0));
      (*VAR_11)++, VAR_14 = (union ctl_io *)FUNC_1(&VAR_14->io_hdr,
      VAR_9)) {
  struct ctl_ooa_entry *VAR_15;





  if (*VAR_11 >= VAR_12->alloc_num)
   continue;

  VAR_15 = &VAR_13[*VAR_11];

  VAR_15->tag_num = VAR_14->scsiio.tag_num;
  VAR_15->lun_num = VAR_10->lun;



  FUNC_2(VAR_14->scsiio.cdb, VAR_15->cdb, VAR_14->scsiio.cdb_len);
  VAR_15->cdb_len = VAR_14->scsiio.cdb_len;
  if (VAR_14->io_hdr.blocker != ((void*)0))
   VAR_15->cmd_flags |= VAR_5;

  if (VAR_14->io_hdr.flags & VAR_1)
   VAR_15->cmd_flags |= VAR_6;

  if (VAR_14->io_hdr.flags & VAR_0)
   VAR_15->cmd_flags |= VAR_4;

  if (VAR_14->io_hdr.flags & VAR_3)
   VAR_15->cmd_flags |= VAR_8;

  if (VAR_14->io_hdr.flags & VAR_2)
   VAR_15->cmd_flags |= VAR_7;
 }
 FUNC_4(&VAR_10->lun_lock);
}
