
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct rss_cfg_msg {size_t vf_id; int tbl_offset; int tbl_len; int* ind_tbl; int hash_bits; } ;
struct nicpf {int* rssi_base; int* cpi_base; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nicpf*,int) ;
 int FUNC_1 (struct nicpf*,int,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct nicpf *VAR_3, struct rss_cfg_msg *VAR_4)
{
 uint8_t VAR_5, VAR_6;
 uint64_t VAR_7, VAR_8, VAR_9, VAR_10;
 uint64_t VAR_11;

 VAR_6 = 0;
 VAR_9 = VAR_3->rssi_base[VAR_4->vf_id] + VAR_4->tbl_offset;

 VAR_10 = VAR_9;
 VAR_5 = VAR_4->vf_id;

 for (; VAR_10 < (VAR_9 + VAR_4->tbl_len); VAR_10++) {
  FUNC_1(VAR_3, VAR_2 | (VAR_10 << 3),
      (VAR_5 << 3) | (VAR_4->ind_tbl[VAR_6] & 0x7));
  VAR_6++;
 }

 VAR_8 = VAR_3->cpi_base[VAR_4->vf_id];
 if (FUNC_2(VAR_3->dev))
  VAR_11 = VAR_0;
 else
  VAR_11 = VAR_1;
 VAR_7 = FUNC_0(VAR_3, VAR_11 | (VAR_8 << 3));
 VAR_7 &= ~(0xFUL << 20);
 VAR_7 |= (VAR_4->hash_bits << 20);
 FUNC_1(VAR_3, VAR_11 | (VAR_8 << 3), VAR_7);
}
