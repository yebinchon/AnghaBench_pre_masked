
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* io_child_error; scalar_t__ io_error; } ;
typedef TYPE_1__ zio_t ;
typedef enum zio_child { ____Placeholder_zio_child } zio_child ;



__attribute__((used)) static void
FUNC_0(zio_t *VAR_0, enum zio_child VAR_1)
{
 if (VAR_0->io_child_error[VAR_1] != 0 && VAR_0->io_error == 0)
  VAR_0->io_error = VAR_0->io_child_error[VAR_1];
}
