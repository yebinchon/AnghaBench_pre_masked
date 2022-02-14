
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct blake2s_xform_ctx {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(uint8_t *VAR_1, void *VAR_2)
{
 struct blake2s_xform_ctx *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3->state, VAR_1, VAR_0);
 if (VAR_4 != 0)
  FUNC_1("blake2s_final: invalid");
}
