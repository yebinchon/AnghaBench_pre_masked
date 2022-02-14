
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iflib_dma_info_t ;
typedef int if_ctx_t ;


 int FUNC_0 (int ,int,int ,int) ;
 int FUNC_1 (int *,int) ;

int
FUNC_2(if_ctx_t VAR_0, int *VAR_1, iflib_dma_info_t *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 iflib_dma_info_t *VAR_7;

 VAR_7 = VAR_2;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_7++) {
  if ((VAR_6 = FUNC_0(VAR_0, VAR_1[VAR_5], *VAR_7, VAR_3)) != 0)
   break;
 }
 if (VAR_6)
  FUNC_1(VAR_2, VAR_5);
 return (VAR_6);
}
