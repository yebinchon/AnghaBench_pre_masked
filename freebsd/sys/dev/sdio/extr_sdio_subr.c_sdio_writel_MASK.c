
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint8_t ;
typedef int uint32_t ;
struct sdio_func {int fn; int dev; } ;


 int FUNC_0 (int ,int ,int ,int,int *,int) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct sdio_func *VAR_0, uint32_t VAR_1, uint32_t VAR_2, int *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(FUNC_1(VAR_0->dev), VAR_0->fn, VAR_2,
     sizeof(VAR_1), (uint8_t *)&VAR_1, 0);
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_4;
}
