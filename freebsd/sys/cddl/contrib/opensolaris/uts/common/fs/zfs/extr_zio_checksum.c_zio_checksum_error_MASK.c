
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zp_checksum; } ;
struct TYPE_9__ {scalar_t__ io_error; int * io_spa; int * io_abd; int io_offset; int io_size; TYPE_1__ io_prop; int * io_bp; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_10__ {int zbc_injected; } ;
typedef TYPE_3__ zio_bad_cksum_t ;
typedef int uint_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef int blkptr_t ;
typedef int abd_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,int ,int *,int ,int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ VAR_3 ;

int
FUNC_5(zio_t *VAR_4, zio_bad_cksum_t *VAR_5)
{
 blkptr_t *VAR_6 = VAR_4->io_bp;
 uint_t VAR_7 = (VAR_6 == ((void*)0) ? VAR_4->io_prop.zp_checksum :
     (FUNC_2(VAR_6) ? VAR_2 : FUNC_0(VAR_6)));
 int VAR_8;
 uint64_t VAR_9 = (VAR_6 == ((void*)0) ? VAR_4->io_size :
     (FUNC_2(VAR_6) ? VAR_1 : FUNC_1(VAR_6)));
 uint64_t VAR_10 = VAR_4->io_offset;
 abd_t *VAR_11 = VAR_4->io_abd;
 spa_t *VAR_12 = VAR_4->io_spa;

 VAR_8 = FUNC_3(VAR_12, VAR_6, VAR_7, VAR_11, VAR_9,
     VAR_10, VAR_5);

 if (VAR_3 && VAR_8 == 0 && VAR_4->io_error == 0) {
  VAR_8 = FUNC_4(VAR_4, VAR_0);
  if (VAR_8 != 0)
   VAR_5->zbc_injected = 1;
 }

 return (VAR_8);
}
