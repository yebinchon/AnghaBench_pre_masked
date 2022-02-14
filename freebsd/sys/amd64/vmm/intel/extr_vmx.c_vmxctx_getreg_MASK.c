
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmxctx {int dummy; } ;
typedef int register_t ;


 int VAR_0 ;
 int * FUNC_0 (struct vmxctx*,int) ;

__attribute__((used)) static int
FUNC_1(struct vmxctx *VAR_1, int VAR_2, uint64_t *VAR_3)
{
 register_t *VAR_4;

 if ((VAR_4 = FUNC_0(VAR_1, VAR_2)) != ((void*)0)) {
  *VAR_3 = *VAR_4;
  return (0);
 } else
  return (VAR_0);
}
