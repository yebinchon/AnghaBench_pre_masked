
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int be_move_done; int * kern_data_ptr; } ;
union ctl_io {TYPE_1__ scsiio; } ;
typedef int uint8_t ;
struct TYPE_4__ {void (* fe_datamove ) (union ctl_io*) ;} ;


 scalar_t__ FUNC_0 (union ctl_io*) ;
 TYPE_2__* FUNC_1 (union ctl_io*) ;
 int VAR_0 ;
 int FUNC_2 (union ctl_io*) ;

__attribute__((used)) static void
FUNC_3(union ctl_io *VAR_1)
{
 int VAR_2;
 void (*VAR_3)(union ctl_io *VAR_4);







 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 != 0)
  return;


 VAR_1->scsiio.kern_data_ptr = (uint8_t *)FUNC_0(VAR_1);





 VAR_1->scsiio.be_move_done = VAR_0;

 VAR_3 = FUNC_1(VAR_1)->fe_datamove;
 VAR_3(VAR_1);
}
