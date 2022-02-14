
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ contentSize; } ;
struct TYPE_6__ {int* data; int* src; int oldStats; int stats; TYPE_1__ header; } ;
typedef TYPE_2__ frame_t ;
typedef int dictInfo ;
typedef int U32 ;
typedef int U16 ;
typedef int BYTE ;


 unsigned int* VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int* const,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*,size_t) ;
 int FUNC_4 (int*,int*,size_t) ;
 int FUNC_5 (int*,int const,size_t) ;
 size_t FUNC_6 (int *,TYPE_2__*,size_t,int ) ;

__attribute__((used)) static void FUNC_7(U32* VAR_1, frame_t* VAR_2, size_t VAR_3,
                       int VAR_4, dictInfo VAR_5)
{
    int const VAR_6 = FUNC_2(VAR_1) % 8;
    size_t VAR_7;
    int VAR_8;

    BYTE *const VAR_9 = (BYTE*)VAR_2->data;
    BYTE *VAR_10 = VAR_9 + 3;

    FUNC_0(4, " block:\n");
    FUNC_0(4, "  block content size: %u\n", (unsigned)VAR_3);
    FUNC_0(4, "  last block: %s\n", VAR_4 ? "yes" : "no");

    if (VAR_6 == 0) {


        FUNC_3(VAR_1, VAR_2->src, VAR_3);
        FUNC_4(VAR_10, VAR_2->src, VAR_3);

        VAR_10 += VAR_3;
        VAR_8 = 0;
        VAR_7 = VAR_3;
    } else if (VAR_6 == 1 && VAR_2->header.contentSize > 0) {

        BYTE const VAR_11 = FUNC_2(VAR_1) & 0xff;

        VAR_10[0] = VAR_11;
        FUNC_5(VAR_2->src, VAR_11, VAR_3);

        VAR_10++;
        VAR_8 = 1;
        VAR_7 = VAR_3;
    } else {

        size_t VAR_12;
        VAR_8 = 2;

        VAR_2->oldStats = VAR_2->stats;

        VAR_2->data = VAR_10;
        VAR_12 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_5);
        if (VAR_12 >= VAR_3) {
            VAR_8 = 0;
            FUNC_4(VAR_10, VAR_2->src, VAR_3);

            VAR_10 += VAR_3;
            VAR_7 = VAR_3;


            VAR_2->stats = VAR_2->oldStats;
        } else {
            VAR_10 += VAR_12;
            VAR_7 = VAR_12;
        }
    }
    VAR_2->src = (BYTE*)VAR_2->src + VAR_3;

    FUNC_0(4, "  block type: %s\n", VAR_0[VAR_8]);
    FUNC_0(4, "  block size field: %u\n", (unsigned)VAR_7);

    VAR_9[0] = (BYTE) ((VAR_4 | (VAR_8 << 1) | (VAR_7 << 3)) & 0xff);
    FUNC_1(VAR_9 + 1, (U16) (VAR_7 >> 5));

    VAR_2->data = VAR_10;
}
