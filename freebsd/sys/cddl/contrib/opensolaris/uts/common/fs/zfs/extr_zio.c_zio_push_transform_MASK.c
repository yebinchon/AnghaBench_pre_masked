
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* zt_next; int * zt_transform; void* zt_bufsize; void* zt_orig_size; int * zt_orig_abd; } ;
typedef TYPE_1__ zio_transform_t ;
typedef int zio_transform_func_t ;
struct TYPE_6__ {void* io_size; int * io_abd; TYPE_1__* io_transform_stack; } ;
typedef TYPE_2__ zio_t ;
typedef void* uint64_t ;
typedef int abd_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int,int ) ;

void
FUNC_3(zio_t *VAR_1, abd_t *VAR_2, uint64_t VAR_3, uint64_t VAR_4,
    zio_transform_func_t *VAR_5)
{
 zio_transform_t *VAR_6 = FUNC_2(sizeof (zio_transform_t), VAR_0);
 FUNC_0(VAR_1->io_abd != ((void*)0) && FUNC_1(VAR_1->io_abd),
     FUNC_1(VAR_2));


 VAR_6->zt_orig_abd = VAR_1->io_abd;
 VAR_6->zt_orig_size = VAR_1->io_size;
 VAR_6->zt_bufsize = VAR_4;
 VAR_6->zt_transform = VAR_5;

 VAR_6->zt_next = VAR_1->io_transform_stack;
 VAR_1->io_transform_stack = VAR_6;

 VAR_1->io_abd = VAR_2;
 VAR_1->io_size = VAR_3;
}
