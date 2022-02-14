
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct chachapoly_ctx {int header_ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int const*,int *,int) ;
 int FUNC_3 (int *,int *,int *) ;

int
FUNC_4(struct chachapoly_ctx *VAR_1,
    u_int *VAR_2, u_int VAR_3, const u_char *VAR_4, u_int VAR_5)
{
 u_char VAR_6[4], VAR_7[8];

 if (VAR_5 < 4)
  return VAR_0;
 FUNC_1(VAR_7, VAR_3);
 FUNC_3(&VAR_1->header_ctx, VAR_7, ((void*)0));
 FUNC_2(&VAR_1->header_ctx, VAR_4, VAR_6, 4);
 *VAR_2 = FUNC_0(VAR_6);
 return 0;
}
