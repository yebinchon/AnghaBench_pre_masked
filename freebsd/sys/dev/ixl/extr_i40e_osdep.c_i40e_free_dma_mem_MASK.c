
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_hw {int dummy; } ;
struct i40e_dma_mem {int tag; int map; int va; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

i40e_status
FUNC_4(struct i40e_hw *VAR_3, struct i40e_dma_mem *VAR_4)
{
 FUNC_1(VAR_4->tag, VAR_4->map,
     VAR_0 | VAR_1);
 FUNC_2(VAR_4->tag, VAR_4->map);
 FUNC_3(VAR_4->tag, VAR_4->va, VAR_4->map);
 FUNC_0(VAR_4->tag);
 return (VAR_2);
}
