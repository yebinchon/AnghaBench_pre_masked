
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ io_error; int io_size; int io_abd; int io_bp; } ;
typedef TYPE_1__ zio_t ;
typedef int uint64_t ;
typedef int abd_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,void*,int ) ;
 int FUNC_4 (int ,int ,void*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(zio_t *VAR_1, abd_t *VAR_2, uint64_t VAR_3)
{
 if (VAR_1->io_error == 0) {
  void *VAR_4 = FUNC_2(VAR_2, VAR_3);
  int VAR_5 = FUNC_4(FUNC_0(VAR_1->io_bp),
      VAR_1->io_abd, VAR_4, VAR_1->io_size, VAR_3);
  FUNC_3(VAR_2, VAR_4, VAR_3);

  if (VAR_5 != 0)
   VAR_1->io_error = FUNC_1(VAR_0);
 }
}
