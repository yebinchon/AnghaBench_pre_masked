
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh_hmac_ctx {size_t buf_len; int* buf; int digest; int ictx; int octx; int alg; } ;


 int FUNC_0 (int*,size_t) ;
 int FUNC_1 (int*,void const*,size_t) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,void const*,size_t,int*,size_t) ;
 scalar_t__ FUNC_4 (int ,int*,size_t) ;

int
FUNC_5(struct ssh_hmac_ctx *VAR_0, const void *VAR_1, size_t VAR_2)
{
 size_t VAR_3;


 if (VAR_1 != ((void*)0)) {

  if (VAR_2 <= VAR_0->buf_len)
   FUNC_1(VAR_0->buf, VAR_1, VAR_2);
  else if (FUNC_3(VAR_0->alg, VAR_1, VAR_2, VAR_0->buf,
      VAR_0->buf_len) < 0)
   return -1;
  for (VAR_3 = 0; VAR_3 < VAR_0->buf_len; VAR_3++)
   VAR_0->buf[VAR_3] ^= 0x36;
  if (FUNC_4(VAR_0->ictx, VAR_0->buf, VAR_0->buf_len) < 0)
   return -1;
  for (VAR_3 = 0; VAR_3 < VAR_0->buf_len; VAR_3++)
   VAR_0->buf[VAR_3] ^= 0x36 ^ 0x5c;
  if (FUNC_4(VAR_0->octx, VAR_0->buf, VAR_0->buf_len) < 0)
   return -1;
  FUNC_0(VAR_0->buf, VAR_0->buf_len);
 }

 if (FUNC_2(VAR_0->ictx, VAR_0->digest) < 0)
  return -1;
 return 0;
}
