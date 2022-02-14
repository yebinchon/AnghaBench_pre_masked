
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct trad_enc_ctx {long* keys; } ;


 void* FUNC_0 (long,int) ;

__attribute__((used)) static void
FUNC_1(struct trad_enc_ctx *VAR_0, uint8_t VAR_1)
{
 uint8_t VAR_2;


 VAR_0->keys[0] = (FUNC_0(VAR_0->keys[0] ^ 0xffffffffUL, &VAR_1, 1) ^ 0xffffffffUL);
 VAR_0->keys[1] = (VAR_0->keys[1] + (VAR_0->keys[0] & 0xff)) * 134775813L + 1;
 VAR_2 = (VAR_0->keys[1] >> 24) & 0xff;
 VAR_0->keys[2] = (FUNC_0(VAR_0->keys[2] ^ 0xffffffffUL, &VAR_2, 1) ^ 0xffffffffUL);

}
