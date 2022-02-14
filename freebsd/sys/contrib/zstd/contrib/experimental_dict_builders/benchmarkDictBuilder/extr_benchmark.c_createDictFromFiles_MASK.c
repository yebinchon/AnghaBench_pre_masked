
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_28__ {int nbSamples; int samplesSizes; int srcBuffer; } ;
typedef TYPE_5__ sampleInfo ;
struct TYPE_29__ {void* dictBuffer; size_t dictSize; } ;
typedef TYPE_6__ dictInfo ;
struct TYPE_24__ {unsigned int notificationLevel; } ;
struct TYPE_30__ {TYPE_1__ zParams; } ;
typedef TYPE_7__ ZDICT_random_params_t ;
struct TYPE_26__ {unsigned int notificationLevel; } ;
struct TYPE_31__ {TYPE_3__ zParams; } ;
typedef TYPE_8__ ZDICT_legacy_params_t ;
struct TYPE_27__ {unsigned int notificationLevel; } ;
struct TYPE_32__ {int k; int d; TYPE_4__ zParams; } ;
typedef TYPE_9__ ZDICT_fastCover_params_t ;
struct TYPE_25__ {unsigned int notificationLevel; } ;
struct TYPE_23__ {int k; int d; TYPE_2__ zParams; } ;
typedef TYPE_10__ ZDICT_cover_params_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 size_t FUNC_4 (void* const,unsigned int,int ,int ,int ,TYPE_10__*) ;
 size_t FUNC_5 (void* const,unsigned int,int ,int ,int ,TYPE_9__*) ;
 size_t FUNC_6 (void* const,unsigned int,int ,int ,int ,TYPE_10__) ;
 size_t FUNC_7 (void* const,unsigned int,int ,int ,int ,TYPE_9__) ;
 size_t FUNC_8 (void* const,unsigned int,int ,int ,int ,TYPE_8__) ;
 size_t FUNC_9 (void* const,unsigned int,int ,int ,int ,TYPE_7__) ;
 int FUNC_10 (void* const) ;
 void* FUNC_11 (int) ;

dictInfo* FUNC_12(sampleInfo *VAR_1, unsigned VAR_2,
                  ZDICT_random_params_t *VAR_3, ZDICT_cover_params_t *VAR_4,
                  ZDICT_legacy_params_t *VAR_5, ZDICT_fastCover_params_t *VAR_6) {
    unsigned const VAR_7 = VAR_3 ? VAR_3->zParams.notificationLevel :
                                  VAR_4 ? VAR_4->zParams.notificationLevel :
                                  VAR_5 ? VAR_5->zParams.notificationLevel :
                                  VAR_6 ? VAR_6->zParams.notificationLevel :
                                  VAR_0;
    void* const VAR_8 = FUNC_11(VAR_2);

    dictInfo* VAR_9 = ((void*)0);


    if (!VAR_8)
        FUNC_1(12, "not enough memory for trainFromFiles");

    { size_t VAR_10;
        if(VAR_3) {
          VAR_10 = FUNC_9(VAR_8, VAR_2, VAR_1->srcBuffer,
                                               VAR_1->samplesSizes, VAR_1->nbSamples, *VAR_3);
        }else if(VAR_4) {

          if (!VAR_4->d || !VAR_4->k){
            VAR_10 = FUNC_4(VAR_8, VAR_2, VAR_1->srcBuffer,
                                                  VAR_1->samplesSizes, VAR_1->nbSamples, VAR_4);
          } else {
            VAR_10 = FUNC_6(VAR_8, VAR_2, VAR_1->srcBuffer,
                                                  VAR_1->samplesSizes, VAR_1->nbSamples, *VAR_4);
          }
        } else if(VAR_5) {
          VAR_10 = FUNC_8(VAR_8, VAR_2, VAR_1->srcBuffer,
                                               VAR_1->samplesSizes, VAR_1->nbSamples, *VAR_5);
        } else if(VAR_6) {

          if (!VAR_6->d || !VAR_6->k) {
            VAR_10 = FUNC_5(VAR_8, VAR_2, VAR_1->srcBuffer,
                                                  VAR_1->samplesSizes, VAR_1->nbSamples, VAR_6);
          } else {
            VAR_10 = FUNC_7(VAR_8, VAR_2, VAR_1->srcBuffer,
                                                  VAR_1->samplesSizes, VAR_1->nbSamples, *VAR_6);
          }
        } else {
          VAR_10 = 0;
        }
        if (FUNC_3(VAR_10)) {
            FUNC_0(1, "dictionary training failed : %s \n", FUNC_2(VAR_10));
            FUNC_10(VAR_8);
            return VAR_9;
        }
        VAR_9 = (dictInfo *)FUNC_11(sizeof(dictInfo));
        VAR_9->dictBuffer = VAR_8;
        VAR_9->dictSize = VAR_10;
    }
    return VAR_9;
}
