
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hmac_ctx {int outerctx; int innerctx; } ;
typedef struct hmac_ctx u_char ;
typedef int digest ;


 int FUNC_0 (struct hmac_ctx*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct hmac_ctx*,int) ;
 int FUNC_2 (struct hmac_ctx*,int *,size_t) ;
 int FUNC_3 (struct hmac_ctx*,int) ;

void
FUNC_4(struct hmac_ctx *VAR_1, uint8_t *VAR_2, size_t VAR_3)
{
 u_char VAR_4[VAR_0];


 FUNC_0(VAR_4, &VAR_1->innerctx);


 FUNC_1(&VAR_1->outerctx, VAR_4, sizeof(VAR_4));
 FUNC_0(VAR_4, &VAR_1->outerctx);

 FUNC_3(VAR_1, sizeof(*VAR_1));

 if (VAR_3 == 0)
  VAR_3 = VAR_0;
 FUNC_2(VAR_4, VAR_2, VAR_3);
 FUNC_3(VAR_4, sizeof(VAR_4));
}
