
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ if_type; int * if_softc; int * if_dname; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static bool FUNC_1(struct net_device *VAR_1,
         struct mlx5_core_dev *VAR_2,
         const char *VAR_3)
{
 return VAR_1->if_type == VAR_0 &&
   VAR_1->if_dname != ((void*)0) &&
   FUNC_0(VAR_1->if_dname, VAR_3) == 0 &&
   VAR_1->if_softc != ((void*)0) &&
   *(struct mlx5_core_dev **)VAR_1->if_softc == VAR_2;
}
