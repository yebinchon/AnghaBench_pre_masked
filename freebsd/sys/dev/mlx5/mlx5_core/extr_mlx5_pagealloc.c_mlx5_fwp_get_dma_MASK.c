
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mlx5_fw_page {size_t numpages; scalar_t__ dma_addr; } ;


 int FUNC_0 (int,char*) ;
 size_t VAR_0 ;

u64
FUNC_1(struct mlx5_fw_page *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = (VAR_2 / VAR_0);
 FUNC_0(VAR_3 < VAR_1->numpages, ("Invalid offset: %lld", (long long)VAR_2));

 return ((VAR_1 + VAR_3)->dma_addr + (VAR_2 % VAR_0));
}
