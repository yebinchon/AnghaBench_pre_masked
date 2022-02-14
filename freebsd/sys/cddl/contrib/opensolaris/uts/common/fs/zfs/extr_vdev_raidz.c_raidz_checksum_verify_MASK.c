
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* io_vsd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_8__ {scalar_t__ zbc_injected; } ;
typedef TYPE_2__ zio_bad_cksum_t ;
struct TYPE_9__ {int rm_ecksuminjected; } ;
typedef TYPE_3__ raidz_map_t ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(zio_t *VAR_0)
{
 zio_bad_cksum_t VAR_1;
 raidz_map_t *VAR_2 = VAR_0->io_vsd;

 int VAR_3 = FUNC_0(VAR_0, &VAR_1);
 if (VAR_3 != 0 && VAR_1.zbc_injected != 0)
  VAR_2->rm_ecksuminjected = 1;

 return (VAR_3);
}
