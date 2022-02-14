
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trad_enc_ctx {long* keys; } ;


 int FUNC_0 (struct trad_enc_ctx*,int ) ;

__attribute__((used)) static int
FUNC_1(struct trad_enc_ctx *VAR_0, const char *VAR_1, size_t VAR_2)
{

 VAR_0->keys[0] = 305419896L;
 VAR_0->keys[1] = 591751049L;
 VAR_0->keys[2] = 878082192L;

 for (;VAR_2; --VAR_2)
  FUNC_0(VAR_0, *VAR_1++);
 return 0;
}
