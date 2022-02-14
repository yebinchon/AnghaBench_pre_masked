
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int key_len; int key_ctx_hdr; int deckey; int enckey; } ;
struct TYPE_3__ {unsigned int mk_size; int partial_digest_len; } ;
struct ccr_session {int mode; TYPE_2__ blkcipher; TYPE_1__ hmac; } ;
struct _key_ctx {int dummy; } ;




 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;



 unsigned int VAR_7 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,void const*,int) ;
 int FUNC_9 (char*) ;
 unsigned int FUNC_10 (int,int) ;
 int FUNC_11 (int ,void const*,unsigned int) ;

__attribute__((used)) static void
FUNC_12(struct ccr_session *VAR_8, int VAR_9, const void *VAR_10, int VAR_11)
{
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 unsigned int VAR_18;

 if (VAR_9 == 129)
  VAR_16 = VAR_11 / 2;
 else
  VAR_16 = VAR_11;
 switch (VAR_16) {
 case 128:
  VAR_12 = VAR_0;
  break;
 case 192:
  VAR_12 = VAR_1;
  break;
 case 256:
  VAR_12 = VAR_2;
  break;
 default:
  FUNC_9("should not get here");
 }

 VAR_8->blkcipher.key_len = VAR_11 / 8;
 FUNC_8(VAR_8->blkcipher.enckey, VAR_10, VAR_8->blkcipher.key_len);
 switch (VAR_9) {
 case 130:
 case 129:
  FUNC_11(VAR_8->blkcipher.deckey, VAR_10, VAR_16);
  break;
 }

 VAR_15 = FUNC_10(VAR_8->blkcipher.key_len, 16);
 switch (VAR_8->mode) {
 case 132:
  VAR_17 = VAR_8->hmac.mk_size;
  VAR_18 = 1;
  VAR_13 = FUNC_10(VAR_8->hmac.partial_digest_len, 16);
  VAR_15 += VAR_13 * 2;
  break;
 case 128:
  VAR_17 = VAR_3;
  VAR_18 = 0;
  VAR_15 += VAR_7;
  break;
 case 131:
  switch (VAR_16) {
  case 128:
   VAR_17 = VAR_3;
   break;
  case 192:
   VAR_17 = VAR_4;
   break;
  case 256:
   VAR_17 = VAR_5;
   break;
  default:
   FUNC_9("should not get here");
  }
  VAR_18 = 0;
  VAR_15 *= 2;
  break;
 default:
  VAR_17 = VAR_6;
  VAR_18 = 0;
  break;
 }
 VAR_14 = (sizeof(struct _key_ctx) + VAR_15) / 16;
 VAR_8->blkcipher.key_ctx_hdr = FUNC_7(FUNC_1(VAR_14) |
     FUNC_2(VAR_9 == 129) |
     FUNC_4(VAR_18) |
     FUNC_5(1) | FUNC_0(VAR_12) |
     FUNC_3(VAR_17) | FUNC_6(1));
}
