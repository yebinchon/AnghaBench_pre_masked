
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zap_salt; } ;
typedef TYPE_1__ zap_t ;
struct TYPE_7__ {int* zn_key_norm; int zn_key_intlen; int zn_key_norm_numints; scalar_t__ zn_key_orig; TYPE_1__* zn_zap; } ;
typedef TYPE_2__ zap_name_t ;
typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static uint64_t
FUNC_3(zap_name_t *VAR_5)
{
 zap_t *VAR_6 = VAR_5->zn_zap;
 uint64_t VAR_7 = 0;

 if (FUNC_1(VAR_6) & VAR_1) {
  FUNC_0(FUNC_1(VAR_6) & VAR_2);
  VAR_7 = *(uint64_t *)VAR_5->zn_key_orig;
 } else {
  VAR_7 = VAR_6->zap_salt;
  FUNC_0(VAR_7 != 0);
  FUNC_0(VAR_4[128] == VAR_3);

  if (FUNC_1(VAR_6) & VAR_2) {
   const uint64_t *VAR_8 = VAR_5->zn_key_norm;

   FUNC_0(VAR_5->zn_key_intlen == 8);
   for (int VAR_9 = 0; VAR_9 < VAR_5->zn_key_norm_numints;
       VAR_8++, VAR_9++) {
    uint64_t VAR_10 = *VAR_8;

    for (int VAR_11 = 0; VAR_11 < VAR_5->zn_key_intlen; VAR_11++) {
     VAR_7 = (VAR_7 >> 8) ^
         VAR_4[(VAR_7 ^ VAR_10) & 0xFF];
     VAR_10 >>= VAR_0;
    }
   }
  } else {
   const uint8_t *VAR_12 = VAR_5->zn_key_norm;
   int VAR_13 = VAR_5->zn_key_norm_numints - 1;

   FUNC_0(VAR_5->zn_key_intlen == 1);
   for (int VAR_14 = 0; VAR_14 < VAR_13; VAR_12++, VAR_14++) {
    VAR_7 = (VAR_7 >> 8) ^
        VAR_4[(VAR_7 ^ *VAR_12) & 0xFF];
   }
  }
 }






 VAR_7 &= ~((1ULL << (64 - FUNC_2(VAR_6))) - 1);

 return (VAR_7);
}
