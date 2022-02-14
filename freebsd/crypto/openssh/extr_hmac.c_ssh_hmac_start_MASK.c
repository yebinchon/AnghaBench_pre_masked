
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh_hmac_ctx {int alg; int buf_len; int * buf; int * ictx; int * digest; int * octx; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ssh_hmac_ctx*) ;

struct ssh_hmac_ctx *
FUNC_4(int VAR_0)
{
 struct ssh_hmac_ctx *VAR_1;

 if ((VAR_1 = FUNC_0(1, sizeof(*VAR_1))) == ((void*)0))
  return ((void*)0);
 VAR_1->alg = VAR_0;
 if ((VAR_1->ictx = FUNC_2(VAR_0)) == ((void*)0) ||
     (VAR_1->octx = FUNC_2(VAR_0)) == ((void*)0) ||
     (VAR_1->digest = FUNC_2(VAR_0)) == ((void*)0))
  goto fail;
 VAR_1->buf_len = FUNC_1(VAR_1->ictx);
 if ((VAR_1->buf = FUNC_0(1, VAR_1->buf_len)) == ((void*)0))
  goto fail;
 return VAR_1;
fail:
 FUNC_3(VAR_1);
 return ((void*)0);
}
