
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int f_Exception; } ;
typedef TYPE_1__ t_FmMacsec ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static t_Error FUNC_1(t_FmMacsec *VAR_3)
{
    if (!VAR_3->f_Exception)
        FUNC_0(VAR_2, VAR_0, ("Exceptions callback not provided"));

    return VAR_1;
}
