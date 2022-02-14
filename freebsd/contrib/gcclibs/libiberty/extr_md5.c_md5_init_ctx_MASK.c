
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md5_ctx {scalar_t__ buflen; scalar_t__* total; void* D; void* C; void* B; void* A; } ;
typedef void* md5_uint32 ;



void
FUNC_0 (struct md5_ctx *VAR_0)
{
  VAR_0->A = (md5_uint32) 0x67452301;
  VAR_0->B = (md5_uint32) 0xefcdab89;
  VAR_0->C = (md5_uint32) 0x98badcfe;
  VAR_0->D = (md5_uint32) 0x10325476;

  VAR_0->total[0] = VAR_0->total[1] = 0;
  VAR_0->buflen = 0;
}
