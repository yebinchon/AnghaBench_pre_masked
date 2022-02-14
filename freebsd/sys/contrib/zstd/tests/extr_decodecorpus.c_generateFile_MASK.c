
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ genType_e ;
struct TYPE_4__ {scalar_t__ srcStart; scalar_t__ src; scalar_t__ dataStart; scalar_t__ data; } ;
typedef TYPE_1__ frame_t ;
typedef int dictInfo ;
typedef scalar_t__ U32 ;
typedef int BYTE ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (scalar_t__,TYPE_1__*,int const) ;
 int FUNC_2 (scalar_t__,TYPE_1__*,int const) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 (scalar_t__,int,char const* const) ;

__attribute__((used)) static int FUNC_5(U32 VAR_1, const char* const VAR_2,
                        const char* const VAR_3, genType_e VAR_4)
{
    frame_t VAR_5;

    FUNC_0("seed: %u\n", (unsigned)VAR_1);

    { dictInfo const VAR_6 = FUNC_3(0, 0, ((void*)0), 0);
        if (VAR_4 == VAR_0) {
            FUNC_2(VAR_1, &VAR_5, VAR_6);
        } else {
            FUNC_1(VAR_1, &VAR_5, VAR_6);
        }
    }
    FUNC_4(VAR_5.dataStart, (BYTE*)VAR_5.data - (BYTE*)VAR_5.dataStart, VAR_2);
    if (VAR_3) {
        FUNC_4(VAR_5.srcStart, (BYTE*)VAR_5.src - (BYTE*)VAR_5.srcStart, VAR_3);
    }
    return 0;
}
