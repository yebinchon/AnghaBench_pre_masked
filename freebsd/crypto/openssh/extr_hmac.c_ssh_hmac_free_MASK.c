
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh_hmac_ctx {int buf_len; struct ssh_hmac_ctx* buf; int digest; int octx; int ictx; } ;


 int FUNC_0 (struct ssh_hmac_ctx*,int) ;
 int FUNC_1 (struct ssh_hmac_ctx*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct ssh_hmac_ctx *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  FUNC_2(VAR_0->ictx);
  FUNC_2(VAR_0->octx);
  FUNC_2(VAR_0->digest);
  if (VAR_0->buf) {
   FUNC_0(VAR_0->buf, VAR_0->buf_len);
   FUNC_1(VAR_0->buf);
  }
  FUNC_0(VAR_0, sizeof(*VAR_0));
  FUNC_1(VAR_0);
 }
}
