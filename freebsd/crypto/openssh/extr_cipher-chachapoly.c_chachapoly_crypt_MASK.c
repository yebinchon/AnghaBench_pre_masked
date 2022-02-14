
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct chachapoly_ctx {int main_ctx; int header_ctx; } ;
typedef int seqbuf ;
typedef int poly_key ;
typedef int expected_tag ;


 int FUNC_0 (int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int const*,int*,int) ;
 int FUNC_2 (int *,int*,int const*) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int*,int const*,int,int*) ;
 scalar_t__ FUNC_6 (int*,int const*,int) ;

int
FUNC_7(struct chachapoly_ctx *VAR_4, u_int VAR_5, u_char *VAR_6,
    const u_char *VAR_7, u_int VAR_8, u_int VAR_9, u_int VAR_10, int VAR_11)
{
 u_char VAR_12[8];
 const u_char VAR_13[8] = { 1, 0, 0, 0, 0, 0, 0, 0 };
 u_char VAR_14[VAR_1], VAR_15[VAR_0];
 int VAR_16 = VAR_2;





 FUNC_4(VAR_15, 0, sizeof(VAR_15));
 FUNC_0(VAR_12, VAR_5);
 FUNC_2(&VAR_4->main_ctx, VAR_12, ((void*)0));
 FUNC_1(&VAR_4->main_ctx,
     VAR_15, VAR_15, sizeof(VAR_15));


 if (!VAR_11) {
  const u_char *VAR_17 = VAR_7 + VAR_9 + VAR_8;

  FUNC_5(VAR_14, VAR_7, VAR_9 + VAR_8, VAR_15);
  if (FUNC_6(VAR_14, VAR_17, VAR_1) != 0) {
   VAR_16 = VAR_3;
   goto out;
  }
 }


 if (VAR_9) {
  FUNC_2(&VAR_4->header_ctx, VAR_12, ((void*)0));
  FUNC_1(&VAR_4->header_ctx, VAR_7, VAR_6, VAR_9);
 }


 FUNC_2(&VAR_4->main_ctx, VAR_12, VAR_13);
 FUNC_1(&VAR_4->main_ctx, VAR_7 + VAR_9,
     VAR_6 + VAR_9, VAR_8);


 if (VAR_11) {
  FUNC_5(VAR_6 + VAR_9 + VAR_8, VAR_6, VAR_9 + VAR_8,
      VAR_15);
 }
 VAR_16 = 0;
 out:
 FUNC_3(VAR_14, sizeof(VAR_14));
 FUNC_3(VAR_12, sizeof(VAR_12));
 FUNC_3(VAR_15, sizeof(VAR_15));
 return VAR_16;
}
