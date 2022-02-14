
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct hmac_ctx {int outerctx; int innerctx; } ;
typedef int key ;
typedef int k_opad ;
typedef int k_ipad ;
typedef int SHA512_CTX ;


 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,...) ;
 int FUNC_3 (char const*,int*,size_t) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int*,int) ;

void
FUNC_6(struct hmac_ctx *VAR_0, const char *VAR_1,
    size_t VAR_2)
{
 u_char VAR_3[128], VAR_4[128], VAR_5[128];
 SHA512_CTX VAR_6;
 u_int VAR_7;

 FUNC_4(VAR_5, sizeof(VAR_5));
 if (VAR_2 == 0)
  ;
 else if (VAR_2 <= 128)
  FUNC_3(VAR_1, VAR_5, VAR_2);
 else {

  FUNC_1(&VAR_6);
  FUNC_2(&VAR_6, VAR_1, VAR_2);
  FUNC_0(VAR_5, &VAR_6);
 }


 for (VAR_7 = 0; VAR_7 < sizeof(VAR_5); VAR_7++) {
  VAR_3[VAR_7] = VAR_5[VAR_7] ^ 0x36;
  VAR_4[VAR_7] = VAR_5[VAR_7] ^ 0x5c;
 }
 FUNC_5(VAR_5, sizeof(VAR_5));

 FUNC_1(&VAR_0->innerctx);
 FUNC_2(&VAR_0->innerctx, VAR_3, sizeof(VAR_3));
 FUNC_5(VAR_3, sizeof(VAR_3));

 FUNC_1(&VAR_0->outerctx);
 FUNC_2(&VAR_0->outerctx, VAR_4, sizeof(VAR_4));
 FUNC_5(VAR_4, sizeof(VAR_4));
}
