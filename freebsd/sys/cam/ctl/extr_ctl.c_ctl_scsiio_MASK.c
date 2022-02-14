
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct TYPE_2__ {int flags; } ;
struct ctl_scsiio {TYPE_1__ io_hdr; int * cdb; } ;
struct ctl_cmd_entry {int (* execute ) (struct ctl_scsiio*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (union ctl_io*) ;
 struct ctl_cmd_entry* FUNC_2 (struct ctl_scsiio*,int *) ;
 int FUNC_3 (struct ctl_scsiio*) ;

__attribute__((used)) static int
FUNC_4(struct ctl_scsiio *VAR_2)
{
 int VAR_3;
 const struct ctl_cmd_entry *VAR_4;

 VAR_3 = VAR_1;

 FUNC_0(("ctl_scsiio cdb[0]=%02X\n", VAR_2->cdb[0]));

 VAR_4 = FUNC_2(VAR_2, ((void*)0));





 if (VAR_2->io_hdr.flags & VAR_0) {
  FUNC_1((union ctl_io *)VAR_2);
  goto bailout;
 }





 VAR_3 = VAR_4->execute(VAR_2);

bailout:
 return (VAR_3);
}
