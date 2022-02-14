
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_CDict ;
typedef int ZSTD_CCtx ;
struct TYPE_4__ {int compressionLevel; } ;
struct TYPE_5__ {double splitPoint; TYPE_1__ zParams; } ;
typedef TYPE_2__ ZDICT_cover_params_t ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 size_t FUNC_1 (size_t const,size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (int *,void*,size_t,int const*,size_t const,int *) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int * const,size_t,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (size_t const) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (size_t) ;

size_t FUNC_11(const ZDICT_cover_params_t VAR_1,
                                    const size_t *VAR_2, const BYTE *VAR_3,
                                    size_t *VAR_4,
                                    size_t VAR_5, size_t VAR_6,
                                    BYTE *const VAR_7, size_t VAR_8) {
  size_t VAR_9 = FUNC_0(VAR_0);

  ZSTD_CCtx *VAR_10;
  ZSTD_CDict *VAR_11;
  void *VAR_12;

  size_t VAR_13;
  size_t VAR_14;

  {
    size_t VAR_15 = 0;
    VAR_14 = VAR_1.splitPoint < 1.0 ? VAR_5 : 0;
    for (; VAR_14 < VAR_6; ++VAR_14) {
      VAR_15 = FUNC_1(VAR_2[VAR_14], VAR_15);
    }
    VAR_13 = FUNC_2(VAR_15);
    VAR_12 = FUNC_10(VAR_13);
  }

  VAR_10 = FUNC_4();
  VAR_11 = FUNC_5(VAR_7, VAR_8,
                           VAR_1.zParams.compressionLevel);
  if (!VAR_12 || !VAR_10 || !VAR_11) {
    goto _compressCleanup;
  }

  VAR_9 = VAR_8;
  VAR_14 = VAR_1.splitPoint < 1.0 ? VAR_5 : 0;
  for (; VAR_14 < VAR_6; ++VAR_14) {
    const size_t VAR_16 = FUNC_3(
        VAR_10, VAR_12, VAR_13, VAR_3 + VAR_4[VAR_14],
        VAR_2[VAR_14], VAR_11);
    if (FUNC_8(VAR_16)) {
      VAR_9 = VAR_16;
      goto _compressCleanup;
    }
    VAR_9 += VAR_16;
  }
_compressCleanup:
  FUNC_6(VAR_10);
  FUNC_7(VAR_11);
  if (VAR_12) {
    FUNC_9(VAR_12);
  }
  return VAR_9;
}
