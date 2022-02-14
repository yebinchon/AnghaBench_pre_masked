
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct raid_map {int data_encryption_key_index; int volume_blk_size; } ;
struct pqi_enc_info {int encrypt_tweak_upper; int encrypt_tweak_lower; int data_enc_key_index; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(
 struct pqi_enc_info *VAR_0, struct raid_map *VAR_1,
 uint64_t VAR_2)
{
 uint32_t VAR_3;






 VAR_3 = FUNC_1((uint8_t *)&VAR_1->volume_blk_size);
 if (VAR_3 != 512)
  VAR_2 = (VAR_2 * VAR_3) / 512;

 VAR_0->data_enc_key_index =
  FUNC_0((uint8_t *)&VAR_1->data_encryption_key_index);
 VAR_0->encrypt_tweak_upper = ((uint32_t)(((VAR_2) >> 16) >> 16));
 VAR_0->encrypt_tweak_lower = ((uint32_t)(VAR_2));
}
