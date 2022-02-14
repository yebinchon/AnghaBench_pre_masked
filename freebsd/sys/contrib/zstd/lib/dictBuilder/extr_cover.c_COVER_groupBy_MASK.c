
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int COVER_ctx_t ;
typedef void BYTE ;



__attribute__((used)) static void
FUNC_0(const void *VAR_0, size_t VAR_1, size_t VAR_2, COVER_ctx_t *VAR_3,
              int (*VAR_4)(COVER_ctx_t *, const void *, const void *),
              void (*VAR_5)(COVER_ctx_t *, const void *, const void *)) {
  const BYTE *VAR_6 = (const BYTE *)VAR_0;
  size_t VAR_7 = 0;
  while (VAR_7 < VAR_1) {
    const BYTE *VAR_8 = VAR_6 + VAR_2;
    ++VAR_7;
    while (VAR_7 < VAR_1 && VAR_4(VAR_3, VAR_6, VAR_8) == 0) {
      VAR_8 += VAR_2;
      ++VAR_7;
    }
    VAR_5(VAR_3, VAR_6, VAR_8);
    VAR_6 = VAR_8;
  }
}
