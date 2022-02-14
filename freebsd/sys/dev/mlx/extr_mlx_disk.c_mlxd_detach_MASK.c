
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxd_softc {int mlxd_disk; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
    struct mlxd_softc *VAR_1 = (struct mlxd_softc *)FUNC_1(VAR_0);

    FUNC_0(1);

    FUNC_2(VAR_1->mlxd_disk);

    return(0);
}
