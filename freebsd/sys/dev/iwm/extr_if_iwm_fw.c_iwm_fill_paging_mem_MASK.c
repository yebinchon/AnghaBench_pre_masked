
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct iwm_softc {int num_of_paging_blk; int num_of_pages_in_last_blk; TYPE_2__* fw_paging_db; int sc_dev; } ;
struct iwm_fw_img {TYPE_3__* sec; } ;
struct TYPE_6__ {scalar_t__ offset; char const* data; } ;
struct TYPE_4__ {int vaddr; } ;
struct TYPE_5__ {int fw_paging_size; TYPE_1__ fw_paging_block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwm_softc*,int ,char*,int,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct iwm_softc*) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_5(struct iwm_softc *VAR_5, const struct iwm_fw_img *VAR_6)
{
 int VAR_7, VAR_8;
 uint32_t VAR_9 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (VAR_6->sec[VAR_7].offset == VAR_3) {
   VAR_7++;
   break;
  }
 }





 if (VAR_7 >= FUNC_4(VAR_6->sec) - 1) {
  FUNC_1(VAR_5->sc_dev,
      "Paging: Missing CSS and/or paging sections\n");
  FUNC_2(VAR_5);
  return VAR_0;
 }


 FUNC_0(VAR_5, VAR_1,
      "Paging: load paging CSS to FW, sec = %d\n",
      VAR_7);

 FUNC_3(VAR_5->fw_paging_db[0].fw_paging_block.vaddr,
        VAR_6->sec[VAR_7].data,
        VAR_5->fw_paging_db[0].fw_paging_size);

 FUNC_0(VAR_5, VAR_1,
      "Paging: copied %d CSS bytes to first block\n",
      VAR_5->fw_paging_db[0].fw_paging_size);

 VAR_7++;







 for (VAR_8 = 1; VAR_8 < VAR_5->num_of_paging_blk; VAR_8++) {
  FUNC_3(VAR_5->fw_paging_db[VAR_8].fw_paging_block.vaddr,
         (const char *)VAR_6->sec[VAR_7].data + VAR_9,
         VAR_5->fw_paging_db[VAR_8].fw_paging_size);

  FUNC_0(VAR_5, VAR_1,
       "Paging: copied %d paging bytes to block %d\n",
       VAR_5->fw_paging_db[VAR_8].fw_paging_size,
       VAR_8);

  VAR_9 += VAR_5->fw_paging_db[VAR_8].fw_paging_size;
 }


 if (VAR_5->num_of_pages_in_last_blk > 0) {
  FUNC_3(VAR_5->fw_paging_db[VAR_8].fw_paging_block.vaddr,
         (const char *)VAR_6->sec[VAR_7].data + VAR_9,
         VAR_2 * VAR_5->num_of_pages_in_last_blk);

  FUNC_0(VAR_5, VAR_1,
       "Paging: copied %d pages in the last block %d\n",
       VAR_5->num_of_pages_in_last_blk, VAR_8);
 }

 return 0;
}
