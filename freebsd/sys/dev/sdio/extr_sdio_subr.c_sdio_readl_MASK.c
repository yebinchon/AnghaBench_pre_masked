
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef int uint8_t ;
typedef int uint32_t ;
struct sdio_func {int fn; int dev; } ;


 int FUNC_0 (int ,int ,int,int,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

uint32_t
FUNC_3(struct sdio_func *VAR_0, uint32_t VAR_1, int *VAR_2)
{
 int VAR_3;
 uint32_t VAR_4;

 VAR_3 = FUNC_0(FUNC_1(VAR_0->dev), VAR_0->fn, VAR_1,
     sizeof(VAR_4), (uint8_t *)&VAR_4, 0);
 if (VAR_3) {
  if (VAR_2 != ((void*)0))
   *VAR_2 = VAR_3;
  return (0xffffffff);
 } else {
  if (VAR_2 != ((void*)0))
   *VAR_2 = 0;
  return (FUNC_2(VAR_4));
 }
}
