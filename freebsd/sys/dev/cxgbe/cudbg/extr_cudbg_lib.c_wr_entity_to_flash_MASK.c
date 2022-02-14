
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct cudbg_flash_sec_info {int dummy; } ;
struct cudbg_init {int (* print ) (char*) ;scalar_t__ verbose; } ;
struct cudbg_private {struct cudbg_flash_sec_info sec_info; struct cudbg_init dbg_init; } ;
struct cudbg_hdr {int dummy; } ;
struct cudbg_flash_hdr {int dummy; } ;
struct cudbg_entity_hdr {int dummy; } ;
struct cudbg_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,scalar_t__,struct cudbg_buffer*,int,int,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct cudbg_flash_sec_info*,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_4, struct cudbg_buffer *VAR_5,
         u32 VAR_6,
         u32 VAR_7,
         int VAR_8, u32 VAR_9)
{
 struct cudbg_private *VAR_10 = VAR_4;
 struct cudbg_init *VAR_11 = &VAR_10->dbg_init;
 struct cudbg_flash_sec_info *VAR_12 = &VAR_10->sec_info;
 u64 VAR_13;
 u32 VAR_14 = sizeof(struct cudbg_hdr);
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 int VAR_18 = -1;

 VAR_17 = VAR_1 * sizeof(struct cudbg_entity_hdr) +
   sizeof(struct cudbg_hdr);

 VAR_16 = (VAR_3 *
        (sizeof(struct cudbg_flash_hdr) +
         VAR_17)) +
       (VAR_6 - VAR_17);

 if (VAR_16 > VAR_0) {
  FUNC_4(VAR_12, VAR_7);
  if (VAR_11->verbose)
   VAR_11->print("Large entity skipping...\n");
  return VAR_18;
 }

 VAR_15 = VAR_0 - VAR_16;

 if (VAR_7 > VAR_15) {
  FUNC_4(VAR_12, VAR_7);
  if (VAR_11->verbose)
   VAR_11->print("Large entity skipping...\n");
 } else {
  VAR_13 = 0;

  VAR_14 +=
   (sizeof(struct cudbg_entity_hdr) *
   (VAR_8 - 1));

  VAR_18 = FUNC_0(VAR_4, VAR_13, VAR_5,
           VAR_6,
           VAR_14,
           VAR_7,
           VAR_9);
  if (VAR_18 == VAR_2 && VAR_11->verbose)
   VAR_11->print("\n\tFLASH is full... "
    "can not write in flash more\n\n");
 }

 return VAR_18;
}
