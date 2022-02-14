
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_ident {scalar_t__ vendor; scalar_t__ device; scalar_t__ subvendor; scalar_t__ subdevice; } ;
typedef int device_t ;


 struct mlx_ident* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static struct mlx_ident *
FUNC_4(device_t VAR_1)
{
    struct mlx_ident *VAR_2;

    for (VAR_2 = VAR_0; VAR_2->vendor != 0; VAR_2++) {
 if ((VAR_2->vendor == FUNC_3(VAR_1)) &&
     (VAR_2->device == FUNC_0(VAR_1)) &&
     ((VAR_2->subvendor == 0) || ((VAR_2->subvendor == FUNC_2(VAR_1)) &&
         (VAR_2->subdevice == FUNC_1(VAR_1)))))
     return (VAR_2);
    }
    return (((void*)0));
}
