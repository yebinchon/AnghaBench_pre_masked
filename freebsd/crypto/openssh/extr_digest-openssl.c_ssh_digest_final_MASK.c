
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int u_char ;
struct ssh_digest_ctx {int mdctx; int alg; } ;
struct ssh_digest {size_t digest_len; } ;


 int FUNC_0 (int ,int *,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct ssh_digest* FUNC_1 (int ) ;

int
FUNC_2(struct ssh_digest_ctx *VAR_4, u_char *VAR_5, size_t VAR_6)
{
 const struct ssh_digest *VAR_7 = FUNC_1(VAR_4->alg);
 u_int VAR_8 = VAR_6;

 if (VAR_7 == ((void*)0) || VAR_6 > VAR_3)
  return VAR_1;
 if (VAR_6 < VAR_7->digest_len)
  return VAR_1;
 if (FUNC_0(VAR_4->mdctx, VAR_5, &VAR_8) != 1)
  return VAR_2;
 if (VAR_8 != VAR_7->digest_len)
  return VAR_0;
 return 0;
}
