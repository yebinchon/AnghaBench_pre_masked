
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct sdio_func {int fn; int cur_blksize; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct sdio_func *VAR_3, uint16_t VAR_4)
{
 device_t VAR_5;
 int VAR_6;
 uint32_t VAR_7;
 uint16_t VAR_8;

 if (!FUNC_3(VAR_3->dev))
  return (VAR_0);

 VAR_5 = FUNC_1(VAR_3->dev);
 VAR_7 = VAR_2 * VAR_3->fn + VAR_1;
 VAR_8 = FUNC_2(VAR_4);

 VAR_6 = FUNC_0(VAR_5, 0, VAR_7, VAR_8 & 0xff);
 if (VAR_6 == 0)
  VAR_6 = FUNC_0(VAR_5, 0, VAR_7 + 1,
      (VAR_8 >> 8) & 0xff);
 if (VAR_6 == 0)
  VAR_3->cur_blksize = VAR_4;

 return (VAR_6);
}
