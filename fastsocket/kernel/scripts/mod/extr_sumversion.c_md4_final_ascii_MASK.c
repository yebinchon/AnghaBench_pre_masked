
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct md4_ctx {int byte_count; int* block; int* hash; } ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (struct md4_ctx*) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (char*,unsigned int,char*,int,int,int,int) ;

__attribute__((used)) static void FUNC_6(struct md4_ctx *VAR_0, char *VAR_1, unsigned int VAR_2)
{
 const unsigned int VAR_3 = VAR_0->byte_count & 0x3f;
 char *VAR_4 = (char *)VAR_0->block + VAR_3;
 int VAR_5 = 56 - (VAR_3 + 1);

 *VAR_4++ = 0x80;
 if (VAR_5 < 0) {
  FUNC_4(VAR_4, 0x00, VAR_5 + sizeof (uint64_t));
  FUNC_3(VAR_0);
  VAR_4 = (char *)VAR_0->block;
  VAR_5 = 56;
 }

 FUNC_4(VAR_4, 0, VAR_5);
 VAR_0->block[14] = VAR_0->byte_count << 3;
 VAR_0->block[15] = VAR_0->byte_count >> 29;
 FUNC_1(VAR_0->block, (sizeof(VAR_0->block) -
                   sizeof(uint64_t)) / sizeof(uint32_t));
 FUNC_2(VAR_0->hash, VAR_0->block);
 FUNC_0(VAR_0->hash, sizeof(VAR_0->hash) / sizeof(uint32_t));

 FUNC_5(VAR_1, VAR_2, "%08X%08X%08X%08X",
   VAR_0->hash[0], VAR_0->hash[1], VAR_0->hash[2], VAR_0->hash[3]);
}
