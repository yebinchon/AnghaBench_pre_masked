
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_ident {int desc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 struct mlx_ident* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
    struct mlx_ident *VAR_3;

    FUNC_0(1);

    VAR_3 = FUNC_2(VAR_2);
    if (VAR_3 != ((void*)0)) {
 FUNC_1(VAR_2, VAR_3->desc);
 return(VAR_0);
    }
    return(VAR_1);
}
