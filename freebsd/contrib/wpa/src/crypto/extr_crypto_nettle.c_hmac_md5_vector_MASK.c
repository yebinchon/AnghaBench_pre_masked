
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hmac_md5_ctx {int dummy; } ;
typedef int ctx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct hmac_md5_ctx*,int ,int *) ;
 int FUNC_2 (struct hmac_md5_ctx*,size_t,int const*) ;
 int FUNC_3 (struct hmac_md5_ctx*,size_t const,int const*) ;
 int FUNC_4 (struct hmac_md5_ctx*,int ,int) ;

int FUNC_5(const u8 *VAR_1, size_t VAR_2, size_t VAR_3,
      const u8 *VAR_4[], const size_t *VAR_5, u8 *VAR_6)
{
 struct hmac_md5_ctx VAR_7;
 size_t VAR_8;

 if (FUNC_0())
  return -1;

 FUNC_2(&VAR_7, VAR_2, VAR_1);
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  FUNC_3(&VAR_7, VAR_5[VAR_8], VAR_4[VAR_8]);
 FUNC_1(&VAR_7, VAR_0, VAR_6);
 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 return 0;
}
