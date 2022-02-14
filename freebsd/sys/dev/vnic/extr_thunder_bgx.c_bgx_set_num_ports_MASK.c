
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bgx {int qlm_mode; int lmac_count; int lane_to_sds; int use_training; int lmac_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 int FUNC_0 (struct bgx*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct bgx *VAR_8)
{
 uint64_t VAR_9;

 switch (VAR_8->qlm_mode) {
 case 131:
  VAR_8->lmac_count = 4;
  VAR_8->lmac_type = VAR_4;
  VAR_8->lane_to_sds = 0;
  break;
 case 130:
  VAR_8->lmac_count = 1;
  VAR_8->lmac_type = VAR_5;
  VAR_8->lane_to_sds = 0xE4;
   break;
 case 132:
  VAR_8->lmac_count = 2;
  VAR_8->lmac_type = VAR_3;
  VAR_8->lane_to_sds = 0xE4;
   break;
 case 129:
  VAR_8->lmac_count = 4;
  VAR_8->lmac_type = VAR_6;
  VAR_8->lane_to_sds = 0;
  break;
 case 128:
  VAR_8->lmac_count = 1;
  VAR_8->lmac_type = VAR_7;
  VAR_8->lane_to_sds = 0xE4;
  break;
 case 134:
  VAR_8->lmac_count = 4;
  VAR_8->lmac_type = VAR_1;
  VAR_8->lane_to_sds = 0;
  VAR_8->use_training = 1;
  break;
 case 133:
  VAR_8->lmac_count = 1;
  VAR_8->lmac_type = VAR_2;
  VAR_8->lane_to_sds = 0xE4;
  VAR_8->use_training = 1;
  break;
 default:
  VAR_8->lmac_count = 0;
  break;
 }






 VAR_9 = FUNC_0(VAR_8, 0, VAR_0) & 0x7;
 if (VAR_9 != 4)
  VAR_8->lmac_count = VAR_9;
}
