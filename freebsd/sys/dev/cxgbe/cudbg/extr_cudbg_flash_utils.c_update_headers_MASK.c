
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct cudbg_flash_sec_info {int skip_size; void* sec_data; } ;
struct cudbg_private {struct cudbg_flash_sec_info sec_info; } ;
struct cudbg_hdr {int data_len; } ;
struct cudbg_flash_hdr {int hdr_len; int data_len; int timestamp; int build_ver; int minor_ver; int major_ver; int signature; } ;
struct cudbg_entity_hdr {int start_offset; } ;
struct cudbg_buffer {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,void*,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_6, struct cudbg_buffer *VAR_7,
      u64 VAR_8, u32 VAR_9,
      u32 VAR_10, u32 VAR_11)
{
 struct cudbg_private *VAR_12 = VAR_6;
 struct cudbg_flash_sec_info *VAR_13 = &VAR_12->sec_info;
 void *VAR_14;
 struct cudbg_hdr *VAR_15;
 struct cudbg_flash_hdr *VAR_16;
 struct cudbg_entity_hdr *VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;

 VAR_19 = VAR_4 * sizeof(struct cudbg_entity_hdr) +
    sizeof(struct cudbg_hdr);
 VAR_20 = VAR_19 + sizeof(struct cudbg_flash_hdr);
 VAR_21 = VAR_5 - VAR_20;
 VAR_14 = VAR_13->sec_data + VAR_21;

 VAR_16 = (struct cudbg_flash_hdr *)(VAR_14);
 VAR_15 = (struct cudbg_hdr *)VAR_7->data;




 if ((VAR_10 - VAR_13->skip_size) == VAR_19) {
  VAR_16->signature = VAR_3;
  VAR_16->major_ver = VAR_1;
  VAR_16->minor_ver = VAR_2;
  VAR_16->build_ver = VAR_0;
  VAR_16->hdr_len = sizeof(struct cudbg_flash_hdr);
  VAR_18 = sizeof(struct cudbg_flash_hdr);

  FUNC_0((void *)((char *)VAR_14 + VAR_18),
         (void *)((char *)VAR_7->data), VAR_19);
 } else
  FUNC_0((void *)((char *)VAR_14 +
   sizeof(struct cudbg_flash_hdr) +
   VAR_9),
   (void *)((char *)VAR_7->data +
   VAR_9),
   sizeof(struct cudbg_entity_hdr));

 VAR_18 = VAR_19 + sizeof(struct cudbg_flash_hdr);
 VAR_16->data_len = VAR_15->data_len - VAR_13->skip_size;
 VAR_16->timestamp = VAR_8;

 VAR_17 = (struct cudbg_entity_hdr *)((char *)VAR_14 +
        sizeof(struct cudbg_flash_hdr) +
        VAR_9);

 VAR_17->start_offset -= VAR_13->skip_size;

 VAR_15 = (struct cudbg_hdr *)((char *)VAR_14 +
   sizeof(struct cudbg_flash_hdr));
 VAR_15->data_len = VAR_16->data_len;
 VAR_16->data_len += VAR_11;
}
