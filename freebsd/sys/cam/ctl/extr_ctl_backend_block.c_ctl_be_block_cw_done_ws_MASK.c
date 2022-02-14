
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int status; } ;
union ctl_io {TYPE_1__ io_hdr; } ;
struct ctl_be_block_io {union ctl_io* io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_be_block_io*) ;

__attribute__((used)) static void
FUNC_3(struct ctl_be_block_io *VAR_4)
{
 union ctl_io *VAR_5;

 VAR_5 = VAR_4->io;
 FUNC_2(VAR_4);
 if ((VAR_5->io_hdr.flags & VAR_0) ||
     ((VAR_5->io_hdr.status & VAR_1) != VAR_2 &&
      (VAR_5->io_hdr.status & VAR_1) != VAR_3)) {
  FUNC_1(VAR_5);
  return;
 }

 FUNC_0(VAR_5);
}
