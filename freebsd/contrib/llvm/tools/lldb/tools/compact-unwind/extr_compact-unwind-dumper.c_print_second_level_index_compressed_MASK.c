
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {int entryPageOffset; scalar_t__ entryCount; int encodingsPageOffset; } ;
struct TYPE_5__ {int commonEncodingsArrayCount; int commonEncodingsArraySectionOffset; } ;
struct TYPE_4__ {int secondLevelPagesSectionOffset; } ;
struct baton {TYPE_3__ compressed_second_level_page_header; TYPE_2__ unwind_header; int * compact_unwind_start; TYPE_1__ first_level_index_entry; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct baton,scalar_t__,int,int,int) ;

void FUNC_3(struct baton VAR_0) {
  uint8_t *VAR_1 =
      VAR_0.compact_unwind_start +
      VAR_0.first_level_index_entry.secondLevelPagesSectionOffset;
  uint8_t *VAR_2 =
      VAR_1 + VAR_0.compressed_second_level_page_header.entryPageOffset;
  uint8_t *VAR_3 = VAR_2;
  for (uint16_t VAR_4 = 0;
       VAR_4 < VAR_0.compressed_second_level_page_header.entryCount; VAR_4++) {
    uint32_t VAR_5 = *((uint32_t *)VAR_3);
    VAR_3 += 4;
    uint32_t VAR_6;

    uint32_t VAR_7 =
        FUNC_0(VAR_5);
    uint32_t VAR_8 =
        FUNC_1(VAR_5);

    if (VAR_7 < VAR_0.unwind_header.commonEncodingsArrayCount) {

      VAR_6 =
          *((uint32_t *)(VAR_0.compact_unwind_start +
                         VAR_0.unwind_header.commonEncodingsArraySectionOffset +
                         (VAR_7 * sizeof(uint32_t))));
    } else {

      uint32_t VAR_9 =
          VAR_7 - VAR_0.unwind_header.commonEncodingsArrayCount;
      VAR_6 = *((uint32_t *)(VAR_1 +
                                VAR_0.compressed_second_level_page_header
                                    .encodingsPageOffset +
                                (VAR_9 * sizeof(uint32_t))));
    }

    FUNC_2(VAR_0, VAR_4, VAR_6, VAR_7,
                            VAR_8);
  }
}
