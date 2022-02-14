
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int blocked_queue; int * blocker; } ;
union ctl_io {TYPE_1__ io_hdr; } ;
struct ctl_lun {int lun_lock; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct ctl_lun*,union ctl_io*,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct ctl_lun *VAR_2, union ctl_io *VAR_3, bool VAR_4)
{
 union ctl_io *VAR_5, *VAR_6;

 FUNC_5(&VAR_2->lun_lock, VAR_0);

 for (VAR_5 = (union ctl_io *)FUNC_2(&VAR_3->io_hdr.blocked_queue);
      VAR_5 != ((void*)0); VAR_5 = VAR_6) {
  VAR_6 = (union ctl_io *)FUNC_3(&VAR_5->io_hdr, VAR_1);

  FUNC_0(VAR_5->io_hdr.blocker != ((void*)0),
      ("I/O %p on blocked list without blocker", VAR_5));
  FUNC_4(VAR_2, VAR_5, VAR_4);
 }
 FUNC_0(!VAR_4 || FUNC_1(&VAR_3->io_hdr.blocked_queue),
     ("blocked_queue is not empty after skipping %p", VAR_3));
}
