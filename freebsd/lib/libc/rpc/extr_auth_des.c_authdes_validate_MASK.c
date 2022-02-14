
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int u_int ;
struct timeval {int dummy; } ;
struct opaque_auth {int oa_length; scalar_t__ oa_base; } ;
struct TYPE_9__ {void* tv_usec; void* tv_sec; } ;
struct authdes_verf {int adv_nickname; TYPE_2__ adv_timestamp; void* adv_int_u; } ;
struct TYPE_10__ {int adc_namekind; } ;
struct ad_private {TYPE_3__ ad_cred; int ad_nickname; int ad_timestamp; } ;
struct TYPE_8__ {void* low; void* high; } ;
struct TYPE_11__ {scalar_t__ c; TYPE_1__ key; } ;
typedef TYPE_4__ des_block ;
typedef int bool_t ;
struct TYPE_12__ {int ah_key; } ;
typedef TYPE_5__ AUTH ;


 int VAR_0 ;
 struct ad_private* FUNC_0 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (void**) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int ,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static bool_t
FUNC_6(AUTH *VAR_8, struct opaque_auth *VAR_9)
{

 struct ad_private *VAR_10 = FUNC_0(VAR_8);
 struct authdes_verf VAR_11;
 int VAR_12;
 uint32_t *VAR_13;
 des_block VAR_14;

 if (VAR_9->oa_length != (2 + 1) * VAR_1) {
  return (VAR_4);
 }

 VAR_13 = (uint32_t *)VAR_9->oa_base;
 VAR_14.key.high = (uint32_t)*VAR_13++;
 VAR_14.key.low = (uint32_t)*VAR_13++;
 VAR_11.adv_int_u = (uint32_t)*VAR_13++;




 VAR_12 = FUNC_4((char *)&VAR_8->ah_key, (char *)&VAR_14,
  (u_int)sizeof (des_block), VAR_2 | VAR_3);

 if (FUNC_1(VAR_12)) {
  FUNC_5(VAR_6, "authdes_validate: DES decryption failure");
  return (VAR_4);
 }





 VAR_13 = (uint32_t *)VAR_14.c;
 VAR_11.adv_timestamp.tv_sec = FUNC_2(VAR_13) + 1;
 VAR_11.adv_timestamp.tv_usec = FUNC_2(VAR_13);




 if (FUNC_3((char *)&VAR_10->ad_timestamp, (char *)&VAR_11.adv_timestamp,
   sizeof(struct timeval)) != 0) {
  FUNC_5(VAR_5, "authdes_validate: verifier mismatch");
  return (VAR_4);
 }




 VAR_10->ad_nickname = VAR_11.adv_nickname;
 VAR_10->ad_cred.adc_namekind = VAR_0;
 return (VAR_7);
}
