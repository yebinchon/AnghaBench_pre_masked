
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockaddr_dl {scalar_t__ sdl_alen; } ;
struct mlx4_en_priv {int mc_list; } ;
struct mlx4_en_addr_list {int list; int addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 struct mlx4_en_addr_list* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static u_int FUNC_5(void *VAR_3, struct sockaddr_dl *VAR_4, u_int VAR_5)
{
 struct mlx4_en_priv *VAR_6 = VAR_3;
 struct mlx4_en_addr_list *VAR_7;

 if (VAR_4->sdl_alen != VAR_0)
  return (0);
 VAR_7 = FUNC_2(sizeof(struct mlx4_en_addr_list), VAR_2);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_6, "Failed to allocate address list\n");
  return (0);
 }
 FUNC_4(VAR_7->addr, FUNC_0(VAR_4), VAR_1);
 FUNC_3(&VAR_7->list, &VAR_6->mc_list);
 return (1);
}
