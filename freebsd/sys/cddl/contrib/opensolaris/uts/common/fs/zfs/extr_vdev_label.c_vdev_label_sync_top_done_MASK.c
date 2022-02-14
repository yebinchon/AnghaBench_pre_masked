
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int io_error; scalar_t__* io_private; } ;
typedef TYPE_1__ zio_t ;
typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_2(zio_t *VAR_1)
{
 uint64_t *VAR_2 = VAR_1->io_private;

 if (*VAR_2 == 0)
  VAR_1->io_error = FUNC_0(VAR_0);

 FUNC_1(VAR_2, sizeof (uint64_t));
}
