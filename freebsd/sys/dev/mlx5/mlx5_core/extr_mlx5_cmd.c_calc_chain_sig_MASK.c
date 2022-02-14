
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_cmd_prot_block {scalar_t__ next; } ;
struct mlx5_cmd_msg {size_t numpages; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct mlx5_cmd_prot_block*,int ,int) ;
 int FUNC_1 (struct mlx5_cmd_msg*) ;
 struct mlx5_cmd_prot_block* FUNC_2 (struct mlx5_cmd_msg*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct mlx5_cmd_msg *VAR_2, u8 VAR_3, int VAR_4)
{
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 != (VAR_2->numpages * VAR_1); VAR_5++) {
  struct mlx5_cmd_prot_block *VAR_6;

  VAR_6 = FUNC_2(VAR_2, VAR_5 * VAR_0);


  FUNC_0(VAR_6, VAR_3, VAR_4);


  if (VAR_6->next == 0)
   break;
 }


 FUNC_1(VAR_2);
}
