
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md5_ctx {int D; int C; int B; int A; } ;
typedef int md5_uint32 ;


 int FUNC_0 (int ) ;

void *
FUNC_1 (const struct md5_ctx *VAR_0, void *VAR_1)
{
  ((md5_uint32 *) VAR_1)[0] = FUNC_0 (VAR_0->A);
  ((md5_uint32 *) VAR_1)[1] = FUNC_0 (VAR_0->B);
  ((md5_uint32 *) VAR_1)[2] = FUNC_0 (VAR_0->C);
  ((md5_uint32 *) VAR_1)[3] = FUNC_0 (VAR_0->D);

  return VAR_1;
}
