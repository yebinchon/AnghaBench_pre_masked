
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct blake2b_xform_ctx {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1, const uint8_t *VAR_2, uint16_t VAR_3)
{
 struct blake2b_xform_ctx *VAR_4 = VAR_1;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4->state, VAR_2, VAR_3);
 if (VAR_5 != 0)
  return (VAR_0);
 return (0);
}
