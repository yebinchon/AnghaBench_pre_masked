
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key_len; int enckey; int cipher_type; } ;
struct ccp_session {TYPE_1__ blkcipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void const*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct ccp_session *VAR_4, int VAR_5, const void *VAR_6, int VAR_7)
{
 unsigned VAR_8;

 if (VAR_5 == VAR_3)
  VAR_8 = VAR_7 / 2;
 else
  VAR_8 = VAR_7;

 switch (VAR_8) {
 case 128:
  VAR_4->blkcipher.cipher_type = VAR_0;
  break;
 case 192:
  VAR_4->blkcipher.cipher_type = VAR_1;
  break;
 case 256:
  VAR_4->blkcipher.cipher_type = VAR_2;
  break;
 default:
  FUNC_1("should not get here");
 }

 VAR_4->blkcipher.key_len = VAR_7 / 8;
 FUNC_0(VAR_4->blkcipher.enckey, VAR_6, VAR_4->blkcipher.key_len);
}
