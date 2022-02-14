
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct chachapoly_ctx {int header_ctx; int main_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int) ;

int
FUNC_1(struct chachapoly_ctx *VAR_1,
    const u_char *VAR_2, u_int VAR_3)
{
 if (VAR_3 != (32 + 32))
  return VAR_0;
 FUNC_0(&VAR_1->main_ctx, VAR_2, 256);
 FUNC_0(&VAR_1->header_ctx, VAR_2 + 32, 256);
 return 0;
}
