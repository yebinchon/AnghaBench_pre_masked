
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sum_job {int done; unsigned long long sum; int frameNb; int fname; } ;
typedef int ZSTD_seekable ;
typedef int FILE ;


 char* FUNC_0 (size_t const) ;
 scalar_t__ FUNC_1 (size_t const) ;
 int * FUNC_2 () ;
 size_t FUNC_3 (int * const,unsigned char*,size_t const,int ) ;
 int FUNC_4 (int * const) ;
 size_t FUNC_5 (int * const,int ) ;
 size_t FUNC_6 (int * const,int * const) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int * const) ;
 int * FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (unsigned char*) ;
 unsigned char* FUNC_12 (size_t const) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_13(void* VAR_1)
{
    struct sum_job* VAR_2 = (struct sum_job*)VAR_1;
    VAR_2->done = 0;

    FILE* const VAR_3 = FUNC_9(VAR_2->fname, "rb");

    ZSTD_seekable* const VAR_4 = FUNC_2();
    if (VAR_4==((void*)0)) { FUNC_10(VAR_0, "ZSTD_seekable_create() error \n"); FUNC_7(10); }

    size_t const VAR_5 = FUNC_6(VAR_4, VAR_3);
    if (FUNC_1(VAR_5)) { FUNC_10(VAR_0, "ZSTD_seekable_init() error : %s \n", FUNC_0(VAR_5)); FUNC_7(11); }

    size_t const VAR_6 = FUNC_5(VAR_4, VAR_2->frameNb);
    unsigned char* VAR_7 = FUNC_12(VAR_6);

    size_t VAR_8 = FUNC_3(VAR_4, VAR_7, VAR_6, VAR_2->frameNb);
    if (FUNC_1(VAR_8)) { FUNC_10(VAR_0, "ZSTD_seekable_decompressFrame() error : %s \n", FUNC_0(VAR_8)); FUNC_7(12); }

    unsigned long long VAR_9 = 0;
    size_t VAR_10;
    for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
        VAR_9 += VAR_7[VAR_10];
    }
    VAR_2->sum = VAR_9;
    VAR_2->done = 1;

    FUNC_8(VAR_3);
    FUNC_4(VAR_4);
    FUNC_11(VAR_7);
}
