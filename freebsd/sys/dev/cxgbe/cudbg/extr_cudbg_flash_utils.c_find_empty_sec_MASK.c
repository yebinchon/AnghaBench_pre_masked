
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_flash_sec_info {int* sec_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct cudbg_flash_sec_info *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 for (VAR_4 = VAR_1; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = (VAR_4 - VAR_1) / 8;
  VAR_6 = (VAR_4 - VAR_1) % 8;
  if (!(VAR_3->sec_bitmap[VAR_5] & (1 << VAR_6)))
   return VAR_4;
 }

 return VAR_2;
}
