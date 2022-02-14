
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_flash_sec_info {int sec_bitmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static
void FUNC_2(struct cudbg_flash_sec_info *VAR_1,
    int VAR_2, int VAR_3)
{
 VAR_2 -= VAR_0;
 if (VAR_3)
  FUNC_1(VAR_1->sec_bitmap, VAR_2);
 else
  FUNC_0(VAR_1->sec_bitmap, VAR_2);
}
