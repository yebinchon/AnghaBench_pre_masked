
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct svm_regctx {int sctx_rsi; int sctx_rdi; } ;



__attribute__((used)) static uint64_t
FUNC_0(struct svm_regctx *VAR_0, int VAR_1)
{
 uint64_t VAR_2;

 VAR_2 = VAR_1 ? VAR_0->sctx_rdi : VAR_0->sctx_rsi;

 return (VAR_2);
}
