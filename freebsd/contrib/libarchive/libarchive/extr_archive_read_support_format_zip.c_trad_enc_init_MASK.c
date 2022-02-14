
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct trad_enc_ctx {long* keys; } ;


 int FUNC_0 (struct trad_enc_ctx*,int const*,int,int*,int) ;
 int FUNC_1 (struct trad_enc_ctx*,int ) ;

__attribute__((used)) static int
FUNC_2(struct trad_enc_ctx *VAR_0, const char *VAR_1, size_t VAR_2,
    const uint8_t *VAR_3, size_t VAR_4, uint8_t *VAR_5)
{
 uint8_t VAR_6[12];

 if (VAR_4 < 12) {
  *VAR_5 = 0xff;
  return -1;
 }

 VAR_0->keys[0] = 305419896L;
 VAR_0->keys[1] = 591751049L;
 VAR_0->keys[2] = 878082192L;

 for (;VAR_2; --VAR_2)
  FUNC_1(VAR_0, *VAR_1++);

 FUNC_0(VAR_0, VAR_3, 12, VAR_6, 12);

 *VAR_5 = VAR_6[11];
 return 0;
}
