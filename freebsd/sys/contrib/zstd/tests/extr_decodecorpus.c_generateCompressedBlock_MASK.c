
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int windowSize; } ;
struct TYPE_7__ {int * src; int oldStats; int stats; int * data; TYPE_1__ header; } ;
typedef TYPE_2__ frame_t ;
typedef int dictInfo ;
typedef scalar_t__ U32 ;
typedef int BYTE ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 size_t FUNC_1 (unsigned int,int) ;
 size_t const FUNC_2 (scalar_t__*) ;
 unsigned int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 size_t FUNC_4 (scalar_t__*,TYPE_2__*,size_t,int ) ;

__attribute__((used)) static U32 FUNC_5(U32 VAR_2, frame_t* VAR_3, dictInfo VAR_4)
{
    size_t VAR_5;
    int VAR_6 = 0;
    BYTE* VAR_7;
    FUNC_0(4, "block seed: %u\n", (unsigned)VAR_2);
    FUNC_3(VAR_3);
    VAR_7 = (BYTE*)VAR_3->data;

    while (!VAR_6) {
        size_t VAR_8;

        { int const VAR_9 = FUNC_2(&VAR_2) % (VAR_0 - 10);
            int const VAR_10 = FUNC_2(&VAR_2) % 8;
            VAR_3->header.windowSize = (1U << (VAR_9 + 10));
            VAR_3->header.windowSize += (VAR_3->header.windowSize / 8) * VAR_10;
        }


        { size_t const VAR_11 = FUNC_1(VAR_1, VAR_3->header.windowSize);
            if (FUNC_2(&VAR_2) & 15) {

                VAR_5 = VAR_11;
            } else if (FUNC_2(&VAR_2) & 7 && VAR_1 >= (1U << 7)) {

                VAR_5 = FUNC_2(&VAR_2) % (1U << 7);
            } else {

                VAR_5 = FUNC_2(&VAR_2) % VAR_11;
            }
        }


        VAR_3->oldStats = VAR_3->stats;
        VAR_3->data = VAR_7;
        VAR_8 = FUNC_4(&VAR_2, VAR_3, VAR_5, VAR_4);
        if (VAR_8 >= VAR_5) {

            VAR_3->stats = VAR_3->oldStats;
            FUNC_0(5, "   can't compress block : try again \n");
        } else {
            VAR_6 = 1;
            FUNC_0(4, "   block size: %u \n", (unsigned)VAR_8);
            VAR_3->src = (BYTE*)VAR_3->src + VAR_5;
        }
    }
    return VAR_2;
}
