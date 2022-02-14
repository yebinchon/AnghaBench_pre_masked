
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MD5Context {int* buf; scalar_t__* bits; } ;



void FUNC_0(struct MD5Context *VAR_0)
{
    VAR_0->buf[0] = 0x67452301;
    VAR_0->buf[1] = 0xefcdab89;
    VAR_0->buf[2] = 0x98badcfe;
    VAR_0->buf[3] = 0x10325476;

    VAR_0->bits[0] = 0;
    VAR_0->bits[1] = 0;
}
