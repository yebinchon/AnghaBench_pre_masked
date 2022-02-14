
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
union ctl_io {TYPE_1__ io_hdr; } ;
typedef int uint32_t ;
struct ctl_lun {int lun_lock; scalar_t__ prevent_count; scalar_t__ prevent; int flags; int ** pending_sense; int ooa_queue; } ;
typedef int ctl_ua_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct ctl_lun*,int,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct ctl_lun*,int) ;
 int FUNC_5 (struct ctl_lun*,union ctl_io*,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_9(struct ctl_lun *VAR_8, uint32_t VAR_9, ctl_ua_type VAR_10)
{
 union ctl_io *VAR_11;
 int VAR_12;

 FUNC_7(&VAR_8->lun_lock);

 for (VAR_11 = (union ctl_io *)FUNC_0(&VAR_8->ooa_queue); VAR_11 != ((void*)0);
      VAR_11 = (union ctl_io *)FUNC_1(&VAR_11->io_hdr, VAR_7)) {
  VAR_11->io_hdr.flags |= VAR_0 | VAR_1;
  FUNC_5(VAR_8, VAR_11, VAR_4);
 }

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  FUNC_6(VAR_8->pending_sense[VAR_12], VAR_5);
  VAR_8->pending_sense[VAR_12] = ((void*)0);
 }

 VAR_8->flags &= ~VAR_2;

 if (VAR_8->prevent) {
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
   FUNC_2(VAR_8->prevent, VAR_12);
  VAR_8->prevent_count = 0;
 }

 FUNC_4(VAR_8, -1);




 FUNC_3(VAR_8, -1, VAR_10);

 FUNC_8(&VAR_8->lun_lock);
}
