
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int nbSamples; int samplesSizes; int srcBuffer; } ;
typedef TYPE_2__ sampleInfo ;
struct TYPE_8__ {unsigned int notificationLevel; } ;
struct TYPE_10__ {int splitPoint; int steps; int f; int d; int k; TYPE_1__ zParams; } ;
typedef TYPE_3__ ZDICT_fastCover_params_t ;
typedef int U32 ;


 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 size_t FUNC_4 (void* const,unsigned int,int ,int ,int ,TYPE_3__*) ;
 size_t FUNC_5 (void* const,unsigned int,int ,int ,int ,TYPE_3__) ;
 int FUNC_6 (void* const) ;
 void* FUNC_7 (unsigned int) ;
 int FUNC_8 (char const*,void* const,size_t) ;

int FUNC_9(const char* VAR_0, sampleInfo *VAR_1,
                          unsigned VAR_2,
                          ZDICT_fastCover_params_t *VAR_3) {
    unsigned const VAR_4 = VAR_3->zParams.notificationLevel;
    void* const VAR_5 = FUNC_7(VAR_2);

    int VAR_6 = 0;


    if (!VAR_5)
        FUNC_1(12, "not enough memory for trainFromFiles");

    { size_t VAR_7;

        if (!VAR_3->d || !VAR_3->k) {
          VAR_7 = FUNC_4(VAR_5, VAR_2, VAR_1->srcBuffer,
                                               VAR_1->samplesSizes, VAR_1->nbSamples, VAR_3);
        } else {
          VAR_7 = FUNC_5(VAR_5, VAR_2, VAR_1->srcBuffer,
                                               VAR_1->samplesSizes, VAR_1->nbSamples, *VAR_3);
        }
        FUNC_0(2, "k=%u\nd=%u\nf=%u\nsteps=%u\nsplit=%u\n", VAR_3->k, VAR_3->d, VAR_3->f, VAR_3->steps, (unsigned)(VAR_3->splitPoint*100));
        if (FUNC_3(VAR_7)) {
            FUNC_0(1, "dictionary training failed : %s \n", FUNC_2(VAR_7));
            VAR_6 = 1;
            goto _done;
        }

        FUNC_0(2, "Save dictionary of size %u into file %s \n", (U32)VAR_7, VAR_0);
        FUNC_8(VAR_0, VAR_5, VAR_7);
    }


_done:
    FUNC_6(VAR_5);
    return VAR_6;
}
