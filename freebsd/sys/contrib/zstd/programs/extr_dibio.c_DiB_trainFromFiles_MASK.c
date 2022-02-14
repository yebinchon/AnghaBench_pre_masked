
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {int nbSamples; size_t const totalSizeToLoad; scalar_t__ oneSampleTooLarge; } ;
typedef TYPE_4__ fileStats ;
struct TYPE_17__ {unsigned int notificationLevel; } ;
struct TYPE_21__ {TYPE_1__ zParams; } ;
typedef TYPE_5__ ZDICT_legacy_params_t ;
struct TYPE_19__ {unsigned int notificationLevel; } ;
struct TYPE_22__ {int splitPoint; int accel; int steps; int f; int d; int k; TYPE_3__ zParams; } ;
typedef TYPE_6__ ZDICT_fastCover_params_t ;
struct TYPE_18__ {unsigned int notificationLevel; } ;
struct TYPE_23__ {int splitPoint; int steps; int d; int k; TYPE_2__ zParams; } ;
typedef TYPE_7__ ZDICT_cover_params_t ;


 size_t VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 TYPE_4__ FUNC_1 (char const**,unsigned int,size_t,unsigned int const) ;
 int FUNC_2 (char*,size_t) ;
 size_t const FUNC_3 (size_t const) ;
 int FUNC_4 (void* const,size_t*,size_t* const,int,char const**,unsigned int,size_t,unsigned int const) ;
 int FUNC_5 (char const*,void* const,size_t) ;
 int FUNC_6 (char const**,unsigned int) ;
 int FUNC_7 (int,char*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_8 (unsigned long long,size_t const) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (size_t) ;
 scalar_t__ FUNC_10 (size_t) ;
 size_t FUNC_11 (void* const,unsigned int,void* const,size_t* const,int,TYPE_7__*) ;
 size_t FUNC_12 (void* const,unsigned int,void* const,size_t* const,int,TYPE_6__*) ;
 size_t FUNC_13 (void* const,unsigned int,void* const,size_t* const,int,TYPE_7__) ;
 size_t FUNC_14 (void* const,unsigned int,void* const,size_t* const,int,TYPE_6__) ;
 size_t FUNC_15 (void* const,unsigned int,void* const,size_t* const,int,TYPE_5__) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (void* const) ;
 void* FUNC_18 (size_t) ;

int FUNC_19(const char* VAR_5, unsigned VAR_6,
                       const char** VAR_7, unsigned VAR_8, size_t VAR_9,
                       ZDICT_legacy_params_t* VAR_10, ZDICT_cover_params_t* VAR_11,
                       ZDICT_fastCover_params_t* VAR_12, int VAR_13)
{
    unsigned const VAR_14 = VAR_10 ? VAR_10->zParams.notificationLevel :
                        VAR_11 ? VAR_11->zParams.notificationLevel :
                        VAR_12 ? VAR_12->zParams.notificationLevel :
                        0;
    void* const VAR_15 = FUNC_18(VAR_6);
    fileStats const VAR_16 = FUNC_1(VAR_7, VAR_8, VAR_9, VAR_14);
    size_t* const VAR_17 = (size_t*)FUNC_18(VAR_16.nbSamples * sizeof(size_t));
    size_t const VAR_18 = VAR_10 ? VAR_2 :
                           VAR_11 ? VAR_0:
                           VAR_1;
    size_t const VAR_19 = FUNC_3(VAR_16.totalSizeToLoad * VAR_18) / VAR_18;
    size_t VAR_20 = (size_t) FUNC_8 ((unsigned long long)VAR_19, VAR_16.totalSizeToLoad);
    void* const VAR_21 = FUNC_18(VAR_20+VAR_3);
    int VAR_22 = 0;


    if ((!VAR_17) || (!VAR_21) || (!VAR_15))
        FUNC_7(12, "not enough memory for DiB_trainFiles");
    if (VAR_16.oneSampleTooLarge) {
        FUNC_0(2, "!  Warning : some sample(s) are very large \n");
        FUNC_0(2, "!  Note that dictionary is only useful for small samples. \n");
        FUNC_0(2, "!  As a consequence, only the first %u bytes of each sample are loaded \n", VAR_4);
    }
    if (VAR_16.nbSamples < 5) {
        FUNC_0(2, "!  Warning : nb of samples too low for proper processing ! \n");
        FUNC_0(2, "!  Please provide _one file per sample_. \n");
        FUNC_0(2, "!  Alternatively, split files into fixed-size blocks representative of samples, with -B# \n");
        FUNC_7(14, "nb of samples too low");
    }
    if (VAR_16.totalSizeToLoad < (unsigned long long)(8 * VAR_6)) {
        FUNC_0(2, "!  Warning : data size of samples too small for target dictionary size \n");
        FUNC_0(2, "!  Samples should be about 100x larger than target dictionary size \n");
    }


    if (VAR_20 < VAR_16.totalSizeToLoad)
        FUNC_0(1, "Not enough memory; training on %u MB only...\n", (unsigned)(VAR_20 >> 20));


    FUNC_0(3, "Shuffling input files\n");
    FUNC_6(VAR_7, VAR_8);

    FUNC_4(VAR_21, &VAR_20, VAR_17, VAR_16.nbSamples, VAR_7, VAR_8, VAR_9, VAR_14);

    { size_t VAR_23;
        if (VAR_10) {
            FUNC_2((char*)VAR_21 + VAR_20, VAR_3);
            VAR_23 = FUNC_15(VAR_15, VAR_6,
                                                           VAR_21, VAR_17, VAR_16.nbSamples,
                                                           *VAR_10);
        } else if (VAR_11) {
            if (VAR_13) {
              VAR_23 = FUNC_11(VAR_15, VAR_6,
                                                             VAR_21, VAR_17, VAR_16.nbSamples,
                                                             VAR_11);
              if (!FUNC_10(VAR_23)) {
                  unsigned VAR_24 = (unsigned)(VAR_11->splitPoint * 100);
                  FUNC_0(2, "k=%u\nd=%u\nsteps=%u\nsplit=%u\n", VAR_11->k, VAR_11->d,
                              VAR_11->steps, VAR_24);
              }
            } else {
              VAR_23 = FUNC_13(VAR_15, VAR_6, VAR_21,
                                                     VAR_17, VAR_16.nbSamples, *VAR_11);
            }
        } else {
            FUNC_16(VAR_12 != ((void*)0));
            if (VAR_13) {
              VAR_23 = FUNC_12(VAR_15, VAR_6,
                                                              VAR_21, VAR_17, VAR_16.nbSamples,
                                                              VAR_12);
              if (!FUNC_10(VAR_23)) {
                unsigned VAR_25 = (unsigned)(VAR_12->splitPoint * 100);
                FUNC_0(2, "k=%u\nd=%u\nf=%u\nsteps=%u\nsplit=%u\naccel=%u\n", VAR_12->k,
                            VAR_12->d, VAR_12->f, VAR_12->steps, VAR_25,
                            VAR_12->accel);
              }
            } else {
              VAR_23 = FUNC_14(VAR_15, VAR_6, VAR_21,
                                                        VAR_17, VAR_16.nbSamples, *VAR_12);
            }
        }
        if (FUNC_10(VAR_23)) {
            FUNC_0(1, "dictionary training failed : %s \n", FUNC_9(VAR_23));
            VAR_22 = 1;
            goto _cleanup;
        }

        FUNC_0(2, "Save dictionary of size %u into file %s \n", (unsigned)VAR_23, VAR_5);
        FUNC_5(VAR_5, VAR_15, VAR_23);
    }


_cleanup:
    FUNC_17(VAR_21);
    FUNC_17(VAR_17);
    FUNC_17(VAR_15);
    return VAR_22;
}
