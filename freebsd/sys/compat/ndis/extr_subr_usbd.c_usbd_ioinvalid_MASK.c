
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct io_stack_location {int isl_minor; int isl_major; } ;
struct TYPE_8__ {scalar_t__ isb_info; int isb_status; } ;
struct TYPE_9__ {TYPE_1__ irp_iostat; } ;
typedef TYPE_2__ irp ;
typedef int int32_t ;
typedef int device_t ;
struct TYPE_10__ {int do_devext; } ;
typedef TYPE_3__ device_object ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 struct io_stack_location* FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static int32_t
FUNC_3(device_object *VAR_2, irp *VAR_3)
{
 device_t VAR_4 = VAR_2->do_devext;
 struct io_stack_location *VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 FUNC_2(VAR_4, "invalid I/O dispatch %d:%d\n", VAR_5->isl_major,
     VAR_5->isl_minor);

 VAR_3->irp_iostat.isb_status = VAR_1;
 VAR_3->irp_iostat.isb_info = 0;

 FUNC_0(VAR_3, VAR_0);

 return (VAR_1);
}
