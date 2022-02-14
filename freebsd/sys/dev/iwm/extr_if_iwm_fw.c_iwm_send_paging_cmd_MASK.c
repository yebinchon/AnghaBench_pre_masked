
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct iwm_softc {int num_of_pages_in_last_blk; int num_of_paging_blk; TYPE_2__* fw_paging_db; int sc_dmat; } ;
struct iwm_fw_paging_cmd {int * device_phy_addr; int block_num; int block_size; int flags; } ;
struct iwm_fw_img {int dummy; } ;
typedef int fw_paging_cmd ;
struct TYPE_3__ {int paddr; int map; } ;
struct TYPE_4__ {TYPE_1__ fw_paging_block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct iwm_softc*,int ,int ,int,struct iwm_fw_paging_cmd*) ;

int
FUNC_4(struct iwm_softc *VAR_9, const struct iwm_fw_img *VAR_10)
{
 int VAR_11;
 uint32_t VAR_12;
 struct iwm_fw_paging_cmd VAR_13 = {
  .flags =
   FUNC_1(VAR_7 |
    VAR_6 |
    (VAR_9->num_of_pages_in_last_blk <<
    VAR_8)),
  .block_size = FUNC_1(VAR_3),
  .block_num = FUNC_1(VAR_9->num_of_paging_blk),
 };


 for (VAR_11 = 0; VAR_11 < VAR_9->num_of_paging_blk + 1; VAR_11++) {
  VAR_12 = FUNC_1(
      VAR_9->fw_paging_db[VAR_11].fw_paging_block.paddr >>
      VAR_5);
  VAR_13.device_phy_addr[VAR_11] = VAR_12;
  FUNC_0(VAR_9->sc_dmat,
      VAR_9->fw_paging_db[VAR_11].fw_paging_block.map,
      VAR_1 | VAR_0);
 }

 return FUNC_3(VAR_9, FUNC_2(VAR_4,
         VAR_2, 0),
        0, sizeof(VAR_13), &VAR_13);
}
