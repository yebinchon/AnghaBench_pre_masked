
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct md4_ctx {int byte_count; char* block; } ;


 int FUNC_0 (struct md4_ctx*) ;
 int FUNC_1 (char*,unsigned char const*,unsigned int const) ;

__attribute__((used)) static void FUNC_2(struct md4_ctx *VAR_0,
         const unsigned char *VAR_1, unsigned int VAR_2)
{
 const uint32_t VAR_3 = sizeof(VAR_0->block) - (VAR_0->byte_count & 0x3f);

 VAR_0->byte_count += VAR_2;

 if (VAR_3 > VAR_2) {
  FUNC_1((char *)VAR_0->block + (sizeof(VAR_0->block) - VAR_3),
         VAR_1, VAR_2);
  return;
 }

 FUNC_1((char *)VAR_0->block + (sizeof(VAR_0->block) - VAR_3),
        VAR_1, VAR_3);

 FUNC_0(VAR_0);
 VAR_1 += VAR_3;
 VAR_2 -= VAR_3;

 while (VAR_2 >= sizeof(VAR_0->block)) {
  FUNC_1(VAR_0->block, VAR_1, sizeof(VAR_0->block));
  FUNC_0(VAR_0);
  VAR_1 += sizeof(VAR_0->block);
  VAR_2 -= sizeof(VAR_0->block);
 }

 FUNC_1(VAR_0->block, VAR_1, VAR_2);
}
