
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ssh_hmac_ctx {int digest; int * buf; int octx; int alg; } ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *,size_t) ;
 scalar_t__ FUNC_3 (int ,int *,size_t) ;

int
FUNC_4(struct ssh_hmac_ctx *VAR_0, u_char *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 VAR_3 = FUNC_0(VAR_0->alg);
 if (VAR_2 < VAR_3 ||
     FUNC_2(VAR_0->digest, VAR_0->buf, VAR_3))
  return -1;

 if (FUNC_1(VAR_0->octx, VAR_0->digest) < 0 ||
     FUNC_3(VAR_0->digest, VAR_0->buf, VAR_3) < 0 ||
     FUNC_2(VAR_0->digest, VAR_1, VAR_2) < 0)
  return -1;
 return 0;
}
