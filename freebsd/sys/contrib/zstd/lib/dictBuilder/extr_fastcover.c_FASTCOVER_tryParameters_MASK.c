
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ZDICT_cover_params_t ;
typedef int U64 ;
struct TYPE_15__ {size_t dictBufferCapacity; int best; int parameters; TYPE_5__* ctx; } ;
typedef TYPE_2__ U32 ;
typedef TYPE_2__ U16 ;
struct TYPE_14__ {int finalize; } ;
struct TYPE_16__ {int f; int nbTrainSamples; int offsets; int nbSamples; int samplesSizes; int samples; TYPE_1__ accelParams; int freqs; } ;
typedef TYPE_2__ FASTCOVER_tryParameters_data_t ;
typedef TYPE_5__ FASTCOVER_ctx_t ;
typedef int COVER_dictSelection_t ;
typedef TYPE_2__ BYTE ;


 int FUNC_0 (int ,int const,int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__* const,size_t,int ,int ,unsigned int const,int,int ,int const,int ,size_t) ;
 int FUNC_5 (int,char*) ;
 size_t FUNC_6 (int ) ;
 size_t FUNC_7 (TYPE_5__ const* const,TYPE_2__*,TYPE_2__* const,size_t,int const,TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (TYPE_2__* const) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_12(void *VAR_1)
{

  FASTCOVER_tryParameters_data_t *const VAR_2 = (FASTCOVER_tryParameters_data_t *)VAR_1;
  const FASTCOVER_ctx_t *const VAR_3 = VAR_2->ctx;
  const ZDICT_cover_params_t VAR_4 = VAR_2->parameters;
  size_t VAR_5 = VAR_2->dictBufferCapacity;
  size_t VAR_6 = FUNC_6(VAR_0);

  U16* VAR_7 = (U16 *)FUNC_8(((U64)1 << VAR_3->f), sizeof(U16));

  BYTE *const VAR_8 = (BYTE * const)FUNC_10(VAR_5);
  COVER_dictSelection_t VAR_9 = FUNC_1(FUNC_6(VAR_0));
  U32 *VAR_10 = (U32*) FUNC_10(((U64)1 << VAR_3->f) * sizeof(U32));
  if (!VAR_7 || !VAR_8 || !VAR_10) {
    FUNC_5(1, "Failed to allocate buffers: out of memory\n");
    goto _cleanup;
  }

  FUNC_11(VAR_10, VAR_3->freqs, ((U64)1 << VAR_3->f) * sizeof(U32));

  { const size_t VAR_11 = FUNC_7(VAR_3, VAR_10, VAR_8, VAR_5,
                                                    VAR_4, VAR_7);

    const unsigned VAR_12 = (unsigned)(VAR_3->nbTrainSamples * VAR_3->accelParams.finalize / 100);
    VAR_9 = FUNC_4(VAR_8 + VAR_11, VAR_5 - VAR_11,
         VAR_3->samples, VAR_3->samplesSizes, VAR_12, VAR_3->nbTrainSamples, VAR_3->nbSamples, VAR_4, VAR_3->offsets,
         VAR_6);

    if (FUNC_3(VAR_9)) {
      FUNC_5(1, "Failed to select dictionary\n");
      goto _cleanup;
    }
  }
_cleanup:
  FUNC_9(VAR_8);
  FUNC_0(VAR_2->best, VAR_4, VAR_9);
  FUNC_9(VAR_2);
  FUNC_9(VAR_7);
  FUNC_2(VAR_9);
  FUNC_9(VAR_10);
}
