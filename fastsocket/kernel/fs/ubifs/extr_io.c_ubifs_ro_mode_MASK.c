
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int ro_media; scalar_t__ no_chk_data_crc; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;

void FUNC_2(struct ubifs_info *VAR_0, int VAR_1)
{
 if (!VAR_0->ro_media) {
  VAR_0->ro_media = 1;
  VAR_0->no_chk_data_crc = 0;
  FUNC_1("switched to read-only mode, error %d", VAR_1);
  FUNC_0();
 }
}
