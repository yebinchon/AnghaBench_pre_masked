
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int secondLevelPagesSectionOffset; scalar_t__ functionOffset; } ;
struct TYPE_4__ {int entryPageOffset; scalar_t__ entryCount; } ;
struct baton {TYPE_1__ first_level_index_entry; TYPE_2__ regular_second_level_page_header; int * compact_unwind_start; } ;


 int FUNC_0 (struct baton,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

void FUNC_1(struct baton VAR_0) {
  uint8_t *VAR_1 =
      VAR_0.compact_unwind_start +
      VAR_0.first_level_index_entry.secondLevelPagesSectionOffset +
      VAR_0.regular_second_level_page_header.entryPageOffset;
  uint32_t VAR_2 = VAR_0.regular_second_level_page_header.entryCount;

  uint8_t *VAR_3 = VAR_1;

  uint32_t VAR_4 = 0;
  while (VAR_4 < VAR_2) {
    uint32_t VAR_5 = *((uint32_t *)(VAR_3));
    uint32_t VAR_6 = *((uint32_t *)(VAR_3 + 4));
    FUNC_0(VAR_0, VAR_4, VAR_6, (uint32_t)-1,
                            VAR_5 -
                                VAR_0.first_level_index_entry.functionOffset);
    VAR_4++;
    VAR_3 += 8;
  }
}
