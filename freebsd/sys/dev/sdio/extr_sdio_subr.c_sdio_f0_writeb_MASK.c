
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sdio_func {int dev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct sdio_func *VAR_0, uint8_t VAR_1, uint32_t VAR_2, int *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(FUNC_1(VAR_0->dev), 0, VAR_2, VAR_1);
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_4;
}
