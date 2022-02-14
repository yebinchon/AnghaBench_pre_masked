
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct sq_cfg_msg {size_t sq_num; } ;
struct nicpf {int * vf_lmac_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct nicpf*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct nicpf *VAR_17, uint8_t VAR_18, struct sq_cfg_msg *VAR_19)
{
 uint32_t VAR_20, VAR_21, VAR_22;
 uint32_t VAR_23, VAR_24, VAR_25;
 uint32_t VAR_26;
 uint8_t VAR_27 = VAR_19->sq_num;
 uint8_t VAR_28;

 VAR_28 = VAR_18;

 VAR_20 = FUNC_0(VAR_17->vf_lmac_map[VAR_28]);
 VAR_21 = FUNC_1(VAR_17->vf_lmac_map[VAR_28]);


 VAR_26 = ((VAR_2 + 24) / 4);

 VAR_25 = (VAR_21 * VAR_16) + (VAR_20 * VAR_15);
 VAR_25 += VAR_27;

 VAR_24 = VAR_25 / (VAR_4 / VAR_3);
 FUNC_2(VAR_17, VAR_6 |
     ((uint64_t)VAR_18 << VAR_13) |
     ((uint32_t)VAR_27 << VAR_14), VAR_25);
 FUNC_2(VAR_17, VAR_12 | (VAR_25 << 3),
     ((uint64_t)VAR_18 << 27) | ((uint32_t)VAR_27 << 24) | VAR_26);

 FUNC_2(VAR_17, VAR_10 | (VAR_24 << 3), VAR_26);
 VAR_22 = (VAR_21 * VAR_0) + (VAR_20 * VAR_1);
 FUNC_2(VAR_17, VAR_11 | (VAR_24 << 3), VAR_22);

 FUNC_2(VAR_17, VAR_5 | (VAR_22 << 3), 1);

 VAR_23 = VAR_24 >> 2;
 FUNC_2(VAR_17, VAR_9 | (VAR_23 << 3), VAR_23);
 FUNC_2(VAR_17, VAR_7 | (VAR_23 << 3), VAR_26);

 FUNC_2(VAR_17, VAR_8 | (VAR_23 << 3), 0x00);
}
