
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct trad_enc_ctx {int* keys; } ;



__attribute__((used)) static uint8_t
FUNC_0(struct trad_enc_ctx *VAR_0)
{
 unsigned VAR_1 = VAR_0->keys[2] | 2;
 return (uint8_t)((VAR_1 * (VAR_1 ^ 1)) >> 8) & 0xff;
}
