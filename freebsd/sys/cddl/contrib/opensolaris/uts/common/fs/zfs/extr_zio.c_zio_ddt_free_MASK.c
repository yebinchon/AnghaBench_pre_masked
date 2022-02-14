
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ io_child_type; int * io_bp; int * io_spa; } ;
typedef TYPE_1__ zio_t ;
typedef int spa_t ;
typedef int ddt_t ;
typedef int ddt_phys_t ;
typedef int ddt_entry_t ;
typedef int blkptr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,int *) ;
 int * VAR_2 ;

__attribute__((used)) static zio_t *
FUNC_8(zio_t *VAR_3)
{
 spa_t *VAR_4 = VAR_3->io_spa;
 blkptr_t *VAR_5 = VAR_3->io_bp;
 ddt_t *VAR_6 = FUNC_7(VAR_4, VAR_5);
 ddt_entry_t *VAR_7;
 ddt_phys_t *VAR_8;

 FUNC_0(FUNC_1(VAR_5));
 FUNC_0(VAR_3->io_child_type == VAR_1);

 FUNC_2(VAR_6);
 VAR_2 = VAR_7 = FUNC_4(VAR_6, VAR_5, VAR_0);
 VAR_8 = FUNC_6(VAR_7, VAR_5);
 FUNC_5(VAR_8);
 FUNC_3(VAR_6);

 return (VAR_3);
}
