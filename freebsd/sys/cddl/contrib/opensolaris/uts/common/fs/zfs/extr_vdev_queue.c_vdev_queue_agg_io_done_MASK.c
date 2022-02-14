
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ io_type; int io_abd; int io_size; scalar_t__ io_offset; } ;
typedef TYPE_1__ zio_t ;
typedef int zio_link_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int **) ;

__attribute__((used)) static void
FUNC_3(zio_t *VAR_1)
{
 if (VAR_1->io_type == VAR_0) {
  zio_t *VAR_2;
  zio_link_t *VAR_3 = ((void*)0);
  while ((VAR_2 = FUNC_2(VAR_1, &VAR_3)) != ((void*)0)) {
   FUNC_0(VAR_2->io_abd, VAR_1->io_abd,
       0, VAR_2->io_offset - VAR_1->io_offset, VAR_2->io_size);
  }
 }

 FUNC_1(VAR_1->io_abd);
}
