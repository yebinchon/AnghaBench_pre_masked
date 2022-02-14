
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct hifn_command {int base_masks; int src_mapsize; int sloplen; int dst_mapsize; int mac_masks; int cry_masks; int cklen; int iv; int ck; int mac; TYPE_2__* enccrd; TYPE_1__* maccrd; } ;
struct TYPE_8__ {scalar_t__ reserved; void* header_skip; void* masks; void* source_count; } ;
typedef TYPE_3__ hifn_mac_command_t ;
struct TYPE_9__ {scalar_t__ reserved; void* header_skip; void* masks; void* source_count; } ;
typedef TYPE_4__ hifn_crypt_command_t ;
struct TYPE_10__ {void* session_num; void* total_dest_count; void* total_source_count; void* masks; } ;
typedef TYPE_5__ hifn_base_command_t ;
struct TYPE_7__ {int crd_len; int crd_skip; } ;
struct TYPE_6__ {int crd_len; int crd_skip; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *,int) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static u_int
FUNC_4(struct hifn_command *VAR_20, u_int8_t *VAR_21)
{
 u_int8_t *VAR_22;
 hifn_base_command_t *VAR_23;
 hifn_mac_command_t *VAR_24;
 hifn_crypt_command_t *VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29;
 u_int32_t VAR_30, VAR_31;

 VAR_22 = VAR_21;
 VAR_26 = VAR_20->base_masks & VAR_6;
 VAR_27 = VAR_20->base_masks & VAR_2;

 VAR_23 = (hifn_base_command_t *)VAR_22;
 VAR_23->masks = FUNC_3(VAR_20->base_masks);
 VAR_31 = VAR_20->src_mapsize;
 if (VAR_20->sloplen)
  VAR_30 = VAR_20->dst_mapsize - VAR_20->sloplen + sizeof(u_int32_t);
 else
  VAR_30 = VAR_20->dst_mapsize;
 VAR_23->total_source_count = FUNC_3(VAR_31 & VAR_5);
 VAR_23->total_dest_count = FUNC_3(VAR_30 & VAR_5);
 VAR_30 >>= 16;
 VAR_31 >>= 16;
 VAR_23->session_num = FUNC_3(
     ((VAR_31 << VAR_8) & VAR_7) |
     ((VAR_30 << VAR_4) & VAR_3));
 VAR_22 += sizeof(hifn_base_command_t);

 if (VAR_26) {
  VAR_24 = (hifn_mac_command_t *)VAR_22;
  VAR_30 = VAR_20->maccrd->crd_len;
  VAR_24->source_count = FUNC_3(VAR_30 & 0xffff);
  VAR_30 >>= 16;
  VAR_24->masks = FUNC_3(VAR_20->mac_masks |
      ((VAR_30 << VAR_18) & VAR_17));
  VAR_24->header_skip = FUNC_3(VAR_20->maccrd->crd_skip);
  VAR_24->reserved = 0;
  VAR_22 += sizeof(hifn_mac_command_t);
 }

 if (VAR_27) {
  VAR_25 = (hifn_crypt_command_t *)VAR_22;
  VAR_30 = VAR_20->enccrd->crd_len;
  VAR_25->source_count = FUNC_3(VAR_30 & 0xffff);
  VAR_30 >>= 16;
  VAR_25->masks = FUNC_3(VAR_20->cry_masks |
      ((VAR_30 << VAR_13) & VAR_12));
  VAR_25->header_skip = FUNC_3(VAR_20->enccrd->crd_skip);
  VAR_25->reserved = 0;
  VAR_22 += sizeof(hifn_crypt_command_t);
 }

 if (VAR_26 && VAR_20->mac_masks & VAR_16) {
  FUNC_1(VAR_20->mac, VAR_22, VAR_19);
  VAR_22 += VAR_19;
 }

 if (VAR_27 && VAR_20->cry_masks & VAR_11) {
  switch (VAR_20->cry_masks & VAR_9) {
  case 131:
   FUNC_1(VAR_20->ck, VAR_22, VAR_0);
   VAR_22 += VAR_0;
   break;
  case 129:
   FUNC_1(VAR_20->ck, VAR_22, VAR_14);
   VAR_22 += VAR_14;
   break;
  case 128:
   VAR_28 = 256;
   do {
    int VAR_32;

    VAR_32 = FUNC_0(VAR_20->cklen, VAR_28);
    FUNC_1(VAR_20->ck, VAR_22, VAR_32);
    VAR_28 -= VAR_32;
    VAR_22 += VAR_32;
   } while (VAR_28 > 0);
   FUNC_2(VAR_22, 4);
   VAR_22 += 4;
   break;
  case 130:




   FUNC_1(VAR_20->ck, VAR_22, VAR_20->cklen);
   VAR_22 += VAR_20->cklen;
   break;
  }
 }

 if (VAR_27 && VAR_20->cry_masks & VAR_10) {
  switch (VAR_20->cry_masks & VAR_9) {
  case 130:
   VAR_29 = VAR_1;
   break;
  default:
   VAR_29 = VAR_15;
   break;
  }
  FUNC_1(VAR_20->iv, VAR_22, VAR_29);
  VAR_22 += VAR_29;
 }

 if ((VAR_20->base_masks & (VAR_6|VAR_2)) == 0) {
  FUNC_2(VAR_22, 8);
  VAR_22 += 8;
 }

 return (VAR_22 - VAR_21);
}
