
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ io_size; scalar_t__ io_type; int io_abd; } ;
typedef TYPE_1__ zio_t ;
typedef scalar_t__ uint64_t ;
typedef int abd_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(zio_t *VAR_1, abd_t *VAR_2, uint64_t VAR_3)
{
 FUNC_0(VAR_1->io_size > VAR_3);

 if (VAR_1->io_type == VAR_0)
  FUNC_1(VAR_2, VAR_1->io_abd, VAR_3);
}
