
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int * irp_csl; } ;
struct TYPE_6__ {TYPE_1__ irp_overlay; } ;
struct TYPE_7__ {int irp_stackcnt; int irp_currentstackloc; TYPE_2__ irp_tail; int irp_thlist; int irp_size; } ;
typedef TYPE_3__ irp ;
typedef int io_stack_location ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3(irp *VAR_0, uint16_t VAR_1, uint8_t VAR_2)
{
 FUNC_2((char *)VAR_0, FUNC_1(VAR_2));
 VAR_0->irp_size = VAR_1;
 VAR_0->irp_stackcnt = VAR_2;
 VAR_0->irp_currentstackloc = VAR_2;
 FUNC_0(&VAR_0->irp_thlist);
 VAR_0->irp_tail.irp_overlay.irp_csl =
     (io_stack_location *)(VAR_0 + 1) + VAR_2;
}
