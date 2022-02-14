
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ress ;
struct TYPE_6__ {int * dctx; void* dstBuffer; void* srcBuffer; int dstBufferSize; int srcBufferSize; } ;
typedef TYPE_1__ dRess_t ;
struct TYPE_7__ {int memLimit; } ;
typedef TYPE_2__ FIO_prefs_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 size_t FUNC_2 (void**,char const*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,void*,size_t const) ;
 int VAR_0 ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static dRess_t FUNC_12(FIO_prefs_t* const VAR_1, const char* VAR_2)
{
    dRess_t VAR_3;
    FUNC_10(&VAR_3, 0, sizeof(VAR_3));


    VAR_3.dctx = FUNC_6();
    if (VAR_3.dctx==((void*)0))
        FUNC_1(60, "Error: %s : can't create ZSTD_DStream", FUNC_11(VAR_0));
    FUNC_0( FUNC_3(VAR_3.dctx, VAR_1->memLimit) );
    VAR_3.srcBufferSize = FUNC_4();
    VAR_3.srcBuffer = FUNC_9(VAR_3.srcBufferSize);
    VAR_3.dstBufferSize = FUNC_5();
    VAR_3.dstBuffer = FUNC_9(VAR_3.dstBufferSize);
    if (!VAR_3.srcBuffer || !VAR_3.dstBuffer)
        FUNC_1(61, "Allocation error : not enough memory");


    { void* VAR_4;
        size_t const VAR_5 = FUNC_2(&VAR_4, VAR_2);
        FUNC_0( FUNC_7(VAR_3.dctx, VAR_4, VAR_5) );
        FUNC_8(VAR_4);
    }

    return VAR_3;
}
