
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct trad_enc_ctx {int dummy; } ;


 int const FUNC_0 (struct trad_enc_ctx*) ;
 int FUNC_1 (struct trad_enc_ctx*,int) ;

__attribute__((used)) static void
FUNC_2(struct trad_enc_ctx *VAR_0, const uint8_t *VAR_1,
    size_t VAR_2, uint8_t *VAR_3, size_t VAR_4)
{
 unsigned VAR_5, VAR_6;

 VAR_6 = (unsigned)((VAR_2 < VAR_4)? VAR_2: VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  uint8_t VAR_7 = VAR_1[VAR_5] ^ FUNC_0(VAR_0);
  VAR_3[VAR_5] = VAR_7;
  FUNC_1(VAR_0, VAR_7);
 }
}
