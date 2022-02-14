
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int io_stage; scalar_t__ io_error; int io_flags; } ;
typedef TYPE_1__ zio_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_1(zio_t *VAR_3)
{
 FUNC_0(VAR_3->io_stage == VAR_2);
 FUNC_0(VAR_3->io_error == 0);

 VAR_3->io_flags |= VAR_0;
 VAR_3->io_stage = VAR_1 >> 1;
}
