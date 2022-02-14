
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;
struct nicpf {size_t rss_ind_tbl_size; int* cpi_base; int* rssi_base; int dev; int * vf_lmac_map; } ;
struct cpi_cfg_msg {size_t vf_id; scalar_t__ cpi_alg; int rq_cnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int FUNC_2 (struct nicpf*,int,size_t) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct nicpf *VAR_14, struct cpi_cfg_msg *VAR_15)
{
 uint32_t VAR_16, VAR_17, VAR_18, VAR_19;
 uint32_t VAR_20, VAR_21 = 0;
 uint64_t VAR_22, VAR_23, VAR_24, VAR_25;
 uint8_t VAR_26, VAR_27 = 0;

 VAR_16 = VAR_15->vf_id;
 VAR_17 = FUNC_0(VAR_14->vf_lmac_map[VAR_16]);
 VAR_18 = FUNC_1(VAR_14->vf_lmac_map[VAR_16]);

 VAR_19 = (VAR_18 * VAR_4) + (VAR_17 * VAR_5);
 VAR_22 = (VAR_18 * VAR_7) + (VAR_17 * VAR_6);
 VAR_24 = (VAR_18 * VAR_14->rss_ind_tbl_size) + (VAR_17 * VAR_13);


 FUNC_2(VAR_14, VAR_8 | (VAR_19 << 3),
     (1UL << 63) | (VAR_16 << 0));
 FUNC_2(VAR_14, VAR_9 | (VAR_19 << 3),
     ((uint64_t)VAR_15->cpi_alg << 62) | (VAR_22 << 48));

 if (VAR_15->cpi_alg == VAR_1)
  VAR_21 = 1;
 else if (VAR_15->cpi_alg == VAR_2)
  VAR_21 = 8;
 else if (VAR_15->cpi_alg == VAR_3)
  VAR_21 = 16;
 else if (VAR_15->cpi_alg == VAR_0)
  VAR_21 = VAR_7;


 VAR_26 = VAR_15->vf_id;
 VAR_25 = VAR_24;
 for (; VAR_25 < (VAR_24 + VAR_15->rq_cnt); VAR_25++) {
  FUNC_2(VAR_14, VAR_12 | (VAR_25 << 3),
      (VAR_26 << 3) | VAR_27);
  VAR_27++;
 }

 VAR_25 = 0;
 VAR_23 = VAR_22;
 for (; VAR_23 < (VAR_22 + VAR_21); VAR_23++) {

  if (VAR_15->cpi_alg != VAR_0)
   VAR_20 = VAR_23 % VAR_21;
  else
   VAR_20 = VAR_23 % 8;


  if (FUNC_3(VAR_14->dev)) {
   FUNC_2(VAR_14, VAR_10 | (VAR_23 << 3),
       (VAR_16 << 24) | (VAR_20 << 16) | (VAR_24 + VAR_25));
  } else {

   FUNC_2(VAR_14, VAR_10 | (VAR_23 << 3),
       (VAR_20 << 16));

   FUNC_2(VAR_14, VAR_11 | (VAR_23 << 3),
       (VAR_16 << 24) | (VAR_24 + VAR_25));
  }

  if ((VAR_25 + 1) >= VAR_15->rq_cnt)
   continue;

  if (VAR_15->cpi_alg == VAR_2)
   VAR_25++;
  else if (VAR_15->cpi_alg == VAR_3)
   VAR_25 = ((VAR_23 - VAR_22) & 0xe) >> 1;
  else if (VAR_15->cpi_alg == VAR_0)
   VAR_25 = ((VAR_23 - VAR_22) & 0x38) >> 3;
 }
 VAR_14->cpi_base[VAR_15->vf_id] = VAR_22;
 VAR_14->rssi_base[VAR_15->vf_id] = VAR_24;
}
