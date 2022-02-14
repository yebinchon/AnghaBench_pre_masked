
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct blake2b_xform_ctx {int klen; int key; } ;


 int FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, const uint8_t *VAR_1, uint16_t VAR_2)
{
 struct blake2b_xform_ctx *VAR_3 = VAR_0;

 if (VAR_2 > sizeof(VAR_3->key))
  FUNC_1("invalid klen %u", (unsigned)VAR_2);
 FUNC_0(VAR_3->key, VAR_1, VAR_2);
 VAR_3->klen = VAR_2;
}
