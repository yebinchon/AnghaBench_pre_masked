
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kern_data_resid; int kern_data_ptr; } ;
struct TYPE_5__ {scalar_t__ io_type; scalar_t__ port_status; int status; int flags; } ;
union ctl_io {TYPE_2__ scsiio; TYPE_1__ io_hdr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int,char*) ;
 int VAR_11 ;
 int FUNC_2 (union ctl_io*) ;
 int VAR_12 ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int,scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int ) ;

int
FUNC_8(union ctl_io *VAR_13)
{
 int VAR_14;

 FUNC_0(("ctl_config_move_done\n"));
 FUNC_1(VAR_13->io_hdr.io_type == VAR_6,
     ("Config I/O type isn't CTL_IO_SCSI (%d)!", VAR_13->io_hdr.io_type));

 if ((VAR_13->io_hdr.port_status != 0) &&
     ((VAR_13->io_hdr.status & VAR_8) == VAR_9 ||
      (VAR_13->io_hdr.status & VAR_8) == VAR_10)) {
  FUNC_5(&VAR_13->scsiio, 1,
                      VAR_13->io_hdr.port_status);
 } else if (VAR_13->scsiio.kern_data_resid != 0 &&
     (VAR_13->io_hdr.flags & VAR_4) == VAR_5 &&
     ((VAR_13->io_hdr.status & VAR_8) == VAR_9 ||
      (VAR_13->io_hdr.status & VAR_8) == VAR_10)) {
  FUNC_6(&VAR_13->scsiio);
 }

 if (VAR_12 & VAR_0)
  FUNC_2(VAR_13);
 if (((VAR_13->io_hdr.flags & VAR_4) == VAR_3) ||
     ((VAR_13->io_hdr.status & VAR_8) != VAR_9 &&
      (VAR_13->io_hdr.status & VAR_8) != VAR_10) ||
     ((VAR_13->io_hdr.flags & VAR_1) != 0)) {





  if (VAR_13->io_hdr.flags & VAR_2)
   FUNC_7(VAR_13->scsiio.kern_data_ptr, VAR_11);
  FUNC_3(VAR_13);
  VAR_14 = VAR_7;
 } else {
  VAR_14 = FUNC_4(&VAR_13->scsiio);
 }
 return (VAR_14);
}
