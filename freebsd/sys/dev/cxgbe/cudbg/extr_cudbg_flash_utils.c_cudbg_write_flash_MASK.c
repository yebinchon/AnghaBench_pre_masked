
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct cudbg_flash_sec_info {int sec_data; int par_sec; int par_sec_offset; scalar_t__ cur_seq_no; } ;
struct cudbg_init {int (* print ) (char*,int) ;struct adapter* adap; } ;
struct cudbg_private {struct cudbg_flash_sec_info sec_info; struct cudbg_init dbg_init; } ;
struct cudbg_hdr {int dummy; } ;
struct cudbg_flash_hdr {scalar_t__ data_len; scalar_t__ sec_seq_no; } ;
struct cudbg_entity_hdr {int dummy; } ;
struct cudbg_buffer {int offset; scalar_t__ data; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cudbg_flash_sec_info*) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (struct cudbg_flash_sec_info*,int,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (void*,struct cudbg_buffer*,int ,int,int,int) ;
 int FUNC_5 (struct adapter*,int,int,int) ;

int FUNC_6(void *VAR_4, u64 VAR_5, void *VAR_6,
        u32 VAR_7, u32 VAR_8,
        u32 VAR_9,
        u32 VAR_10)
{
 struct cudbg_private *VAR_11 = VAR_4;
 struct cudbg_init *VAR_12 = &VAR_11->dbg_init;
 struct cudbg_flash_sec_info *VAR_13 = &VAR_11->sec_info;
 struct adapter *VAR_14 = VAR_12->adap;
 struct cudbg_flash_hdr *VAR_15 = ((void*)0);
 struct cudbg_buffer *VAR_16 = (struct cudbg_buffer *)VAR_6;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 int VAR_24 = 0;
 int VAR_25;

 VAR_17 = VAR_1 * sizeof(struct cudbg_entity_hdr) +
   sizeof(struct cudbg_hdr);
 VAR_18 = VAR_17 + sizeof(struct cudbg_flash_hdr);
 VAR_21 = VAR_2 - VAR_18;
 VAR_22 = VAR_21;

 VAR_12->print("\tWriting %u bytes to flash\n", VAR_9);





 FUNC_4(VAR_4, VAR_16, VAR_5,
         VAR_8,
         VAR_7, VAR_10);

 if (VAR_10) {
  VAR_9 += sizeof(struct cudbg_entity_hdr);
  VAR_7 = VAR_16->offset - VAR_9;
 }

 VAR_15 = (struct cudbg_flash_hdr *)(VAR_13->sec_data +
   VAR_21);

 if (VAR_15->data_len > VAR_0) {
  VAR_24 = VAR_3;
  goto out;
 }

 VAR_23 = VAR_0 - VAR_15->data_len;

 if (VAR_9 > VAR_23) {
  VAR_24 = VAR_3;
  goto out;
 }

 while (VAR_9 > 0) {
  VAR_25 = FUNC_0(VAR_13);
  if (VAR_13->par_sec) {
   VAR_20 = VAR_13->par_sec_offset;
   FUNC_2(VAR_13, VAR_13->par_sec, 0);
   VAR_13->par_sec = 0;
   VAR_13->par_sec_offset = 0;

  } else {
   VAR_13->cur_seq_no++;
   VAR_15->sec_seq_no = VAR_13->cur_seq_no;
   VAR_20 = 0;
  }

  if (VAR_9 + VAR_20 > VAR_22) {
   VAR_19 = VAR_22 - VAR_20;
  } else {
   VAR_19 = VAR_9;
   VAR_13->par_sec = VAR_25;
   VAR_13->par_sec_offset = VAR_9 +
        VAR_20;
  }

  FUNC_1((void *)((char *)VAR_13->sec_data + VAR_20),
         (void *)((char *)VAR_16->data + VAR_7),
         VAR_19);

  VAR_24 = FUNC_5(VAR_14, VAR_25, VAR_13->sec_data,
    VAR_2);
  if (VAR_24)
   goto out;

  VAR_9 -= VAR_19;
  FUNC_2(VAR_13, VAR_25, 1);
  VAR_7 += VAR_19;
 }
out:
 return VAR_24;
}
