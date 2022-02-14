
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int sampleInfo ;
typedef int dictInfo ;
struct TYPE_17__ {unsigned int notificationLevel; unsigned int compressionLevel; } ;
struct TYPE_21__ {TYPE_1__ zParams; } ;
typedef TYPE_5__ ZDICT_random_params_t ;
struct TYPE_19__ {unsigned int notificationLevel; unsigned int compressionLevel; } ;
struct TYPE_22__ {TYPE_3__ zParams; } ;
typedef TYPE_6__ ZDICT_legacy_params_t ;
struct TYPE_20__ {unsigned int notificationLevel; unsigned int compressionLevel; } ;
struct TYPE_23__ {TYPE_4__ zParams; } ;
typedef TYPE_7__ ZDICT_fastCover_params_t ;
struct TYPE_18__ {unsigned int notificationLevel; unsigned int compressionLevel; } ;
struct TYPE_24__ {TYPE_2__ zParams; } ;
typedef TYPE_8__ ZDICT_cover_params_t ;
typedef int UTIL_time_t ;
typedef double U64 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,char*,char const*,...) ;
 scalar_t__ VAR_2 ;
 double FUNC_1 (int const) ;
 int FUNC_2 () ;
 double FUNC_3 (int *,int *,unsigned int const,unsigned int const) ;
 int * FUNC_4 (int *,unsigned int,TYPE_5__*,TYPE_8__*,TYPE_6__*,TYPE_7__*) ;
 int FUNC_5 (int *) ;

int FUNC_6(sampleInfo *VAR_3, unsigned VAR_4, ZDICT_random_params_t *VAR_5,
                        ZDICT_cover_params_t *VAR_6, ZDICT_legacy_params_t *VAR_7,
                        ZDICT_fastCover_params_t *VAR_8) {

  const unsigned VAR_9 = VAR_5 ? VAR_5->zParams.notificationLevel :
                                VAR_6 ? VAR_6->zParams.notificationLevel :
                                VAR_7 ? VAR_7->zParams.notificationLevel :
                                VAR_8 ? VAR_8->zParams.notificationLevel:
                                VAR_1;
  const char* VAR_10 = VAR_5 ? "RANDOM" :
                    VAR_6 ? "COVER" :
                    VAR_7 ? "LEGACY" :
                    VAR_8 ? "FAST":
                    "NODICT";
  const unsigned VAR_11 = VAR_5 ? VAR_5->zParams.compressionLevel :
                          VAR_6 ? VAR_6->zParams.compressionLevel :
                          VAR_7 ? VAR_7->zParams.compressionLevel :
                          VAR_8 ? VAR_8->zParams.compressionLevel:
                          VAR_0;
  int VAR_12 = 0;


  const UTIL_time_t VAR_13 = FUNC_2();
  dictInfo* VAR_14 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  const U64 VAR_15 = FUNC_1(VAR_13);
  const double VAR_16 = VAR_15 / (double)VAR_2;
  if (!VAR_14) {
    FUNC_0(1, "%s does not train successfully\n", VAR_10);
    VAR_12 = 1;
    goto _cleanup;
  }
  FUNC_0(1, "%s took %f seconds to execute \n", VAR_10, VAR_16);


  const double VAR_17 = FUNC_3(VAR_3, VAR_14, VAR_11, VAR_9);
  if (VAR_17 < 0) {
    FUNC_0(1, "Compressing with %s dictionary does not work\n", VAR_10);
    VAR_12 = 1;
    goto _cleanup;

  }
  FUNC_0(1, "Compression ratio with %s dictionary is %f\n", VAR_10, VAR_17);

_cleanup:
  FUNC_5(VAR_14);
  return VAR_12;
}
