
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct chacha_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct chacha_ctx*,int const*,int) ;
 struct chacha_ctx* FUNC_1 (int,int ,int) ;

__attribute__((used)) static int
FUNC_2(u_int8_t **VAR_6, const u_int8_t *VAR_7, int VAR_8)
{
 struct chacha_ctx *VAR_9;

 if (VAR_8 != VAR_0 && VAR_8 != 32)
  return (VAR_1);

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_3, VAR_4 | VAR_5);
 *VAR_6 = (void *)VAR_9;
 if (VAR_9 == ((void*)0))
  return (VAR_2);

 FUNC_0(VAR_9, VAR_7, VAR_8 * 8);
 return (0);
}
