
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct crypto_blkcipher* data; } ;
struct key {TYPE_1__ payload; int type_data; } ;
struct crypto_blkcipher {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct crypto_blkcipher*) ;
 int FUNC_2 (struct crypto_blkcipher*) ;
 int FUNC_3 (char*,int ,size_t) ;
 int FUNC_4 (char*,...) ;
 struct crypto_blkcipher* FUNC_5 (char*,int ,int ) ;
 scalar_t__ FUNC_6 (struct crypto_blkcipher*,void const*,int) ;
 int FUNC_7 (struct key*) ;
 int FUNC_8 (int *,void const*,int) ;

__attribute__((used)) static int FUNC_9(struct key *VAR_2, const void *VAR_3,
          size_t VAR_4)
{
 struct crypto_blkcipher *VAR_5;

 FUNC_3("{%x},,%zu", FUNC_7(VAR_2), VAR_4);

 if (VAR_4 != 8)
  return -VAR_1;

 FUNC_8(&VAR_2->type_data, VAR_3, 8);

 VAR_5 = FUNC_5("pcbc(des)", 0, VAR_0);
 if (FUNC_1(VAR_5)) {
  FUNC_4(" = %ld", FUNC_2(VAR_5));
  return FUNC_2(VAR_5);
 }

 if (FUNC_6(VAR_5, VAR_3, 8) < 0)
  FUNC_0();

 VAR_2->payload.data = VAR_5;
 FUNC_4(" = 0");
 return 0;
}
