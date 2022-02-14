
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ubifs_info {int leb_cnt; int leb_size; scalar_t__ no_chk_data_crc; int always_chk_crc; TYPE_1__* ranges; } ;
struct ubifs_ch {int node_type; int crc; int len; int magic; } ;
struct TYPE_2__ {int max_len; int len; int min_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,void const*,int) ;
 int FUNC_1 (struct ubifs_info const*,void const*) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,...) ;

int FUNC_6(const struct ubifs_info *VAR_6, const void *VAR_7, int VAR_8,
       int VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12 = -VAR_0, VAR_13, VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17;
 const struct ubifs_ch *VAR_18 = VAR_7;

 FUNC_4(VAR_8 >= 0 && VAR_8 < VAR_6->leb_cnt && VAR_9 >= 0);
 FUNC_4(!(VAR_9 & 7) && VAR_9 < VAR_6->leb_size);

 VAR_17 = FUNC_3(VAR_18->magic);
 if (VAR_17 != VAR_4) {
  if (!VAR_10)
   FUNC_5("bad magic %#08x, expected %#08x",
      VAR_17, VAR_4);
  VAR_12 = -VAR_1;
  goto out;
 }

 VAR_13 = VAR_18->node_type;
 if (VAR_13 < 0 || VAR_13 >= VAR_5) {
  if (!VAR_10)
   FUNC_5("bad node type %d", VAR_13);
  goto out;
 }

 VAR_14 = FUNC_3(VAR_18->len);
 if (VAR_14 + VAR_9 > VAR_6->leb_size)
  goto out_len;

 if (VAR_6->ranges[VAR_13].max_len == 0) {
  if (VAR_14 != VAR_6->ranges[VAR_13].len)
   goto out_len;
 } else if (VAR_14 < VAR_6->ranges[VAR_13].min_len ||
     VAR_14 > VAR_6->ranges[VAR_13].max_len)
  goto out_len;

 if (!VAR_11 && VAR_13 == VAR_3 && !VAR_6->always_chk_crc &&
      VAR_6->no_chk_data_crc)
  return 0;

 VAR_15 = FUNC_0(VAR_2, VAR_7 + 8, VAR_14 - 8);
 VAR_16 = FUNC_3(VAR_18->crc);
 if (VAR_15 != VAR_16) {
  if (!VAR_10)
   FUNC_5("bad CRC: calculated %#08x, read %#08x",
      VAR_15, VAR_16);
  VAR_12 = -VAR_1;
  goto out;
 }

 return 0;

out_len:
 if (!VAR_10)
  FUNC_5("bad node length %d", VAR_14);
out:
 if (!VAR_10) {
  FUNC_5("bad node at LEB %d:%d", VAR_8, VAR_9);
  FUNC_1(VAR_6, VAR_7);
  FUNC_2();
 }
 return VAR_12;
}
