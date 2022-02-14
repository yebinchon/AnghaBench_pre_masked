
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int (* bar1_idx_read ) (struct octeon_device*,int) ;int (* bar1_idx_write ) (struct octeon_device*,int,int) ;int (* bar1_idx_setup ) (struct octeon_device*,int,int,int) ;} ;
struct TYPE_3__ {int dram_region_base; int bar1_index; } ;
struct octeon_device {int mem_access_lock; TYPE_2__ fn_list; TYPE_1__ console_nb_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct octeon_device*,int,int *,int) ;
 int FUNC_1 (struct octeon_device*,int,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct octeon_device*,int) ;
 int FUNC_5 (struct octeon_device*,int,int,int) ;
 int FUNC_6 (struct octeon_device*,int,int) ;

__attribute__((used)) static void
FUNC_7(struct octeon_device *VAR_1, uint64_t VAR_2,
      uint8_t *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 uint64_t VAR_6;
 uint32_t VAR_7 = 0, VAR_8 = 0;
 uint32_t VAR_9;

 VAR_6 = VAR_1->console_nb_info.dram_region_base;

 if (VAR_6 && VAR_6 ==
     (VAR_2 & 0xFFFFFFFFFFC00000ULL)) {
  int VAR_10 = VAR_1->console_nb_info.bar1_index;

  VAR_9 = (VAR_10 << 22) + (VAR_2 & 0x3fffff);

  if (VAR_5)
   FUNC_0(VAR_1, VAR_9, VAR_3, VAR_4);
  else
   FUNC_1(VAR_1, VAR_9, VAR_3, VAR_4);

  return;
 }
 FUNC_2(&VAR_1->mem_access_lock);


 VAR_8 = VAR_1->fn_list.bar1_idx_read(VAR_1, VAR_0);
 do {
  VAR_1->fn_list.bar1_idx_setup(VAR_1, VAR_2, VAR_0, 1);
  VAR_9 = (VAR_0 << 22) + (VAR_2 & 0x3fffff);





  if (((VAR_2 + VAR_4 - 1) & ~(0x3fffff)) != (VAR_2 & ~(0x3fffff))) {
   VAR_7 = (uint32_t)(((VAR_2 & ~(0x3fffff)) +
            (VAR_0 << 22)) - VAR_2);
  } else {
   VAR_7 = VAR_4;
  }

  if (VAR_5) {
   FUNC_0(VAR_1, VAR_9, VAR_3,
      VAR_7);
  } else {
   FUNC_1(VAR_1, VAR_9, VAR_3,
       VAR_7);
  }

  VAR_4 -= VAR_7;
  VAR_2 += VAR_7;
  VAR_3 += VAR_7;

 } while (VAR_4);

 VAR_1->fn_list.bar1_idx_write(VAR_1, VAR_0, VAR_8);

 FUNC_3(&VAR_1->mem_access_lock);
}
