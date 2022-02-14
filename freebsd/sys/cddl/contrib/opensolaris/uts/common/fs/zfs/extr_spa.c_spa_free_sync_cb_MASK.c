
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int io_flags; int io_spa; } ;
typedef TYPE_1__ zio_t ;
typedef int dmu_tx_t ;
typedef int blkptr_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int const*,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_0, const blkptr_t *VAR_1, dmu_tx_t *VAR_2)
{
 zio_t *VAR_3 = VAR_0;

 FUNC_3(FUNC_2(VAR_3, VAR_3->io_spa, FUNC_1(VAR_2), VAR_1,
     FUNC_0(VAR_1), VAR_3->io_flags));
 return (0);
}
