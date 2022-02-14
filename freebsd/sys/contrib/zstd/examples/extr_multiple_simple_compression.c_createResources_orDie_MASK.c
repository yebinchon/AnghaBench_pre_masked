
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t fBufferSize; size_t cBufferSize; int * cctx; void* cBuffer; void* fBuffer; } ;
typedef TYPE_1__ resources ;


 int FUNC_0 (int ,char*) ;
 size_t FUNC_1 (size_t) ;
 int * FUNC_2 () ;
 size_t FUNC_3 (char const* const) ;
 void* FUNC_4 (size_t) ;
 size_t FUNC_5 (char const* const) ;

__attribute__((used)) static resources FUNC_6(int VAR_0, const char** VAR_1, char **VAR_2, size_t* VAR_3)
{
    size_t VAR_4=0;
    size_t VAR_5 = 0;

    int VAR_6;
    for (VAR_6 = 1; VAR_6 < VAR_0; VAR_6++) {
      const char* const VAR_7 = VAR_1[VAR_6];
      size_t const VAR_8 = FUNC_5(VAR_7);
      size_t const VAR_9 = FUNC_3(VAR_7);

      if (VAR_8 > VAR_4) VAR_4 = VAR_8;
      if (VAR_9 > VAR_5) VAR_5 = VAR_9;
    }

    resources VAR_10;
    VAR_10.fBufferSize = VAR_5;
    VAR_10.cBufferSize = FUNC_1(VAR_5);

    *VAR_3 = VAR_4 + 5;
    *VAR_2 = (char*)FUNC_4(*VAR_3);
    VAR_10.fBuffer = FUNC_4(VAR_10.fBufferSize);
    VAR_10.cBuffer = FUNC_4(VAR_10.cBufferSize);
    VAR_10.cctx = FUNC_2();
    FUNC_0(VAR_10.cctx != ((void*)0), "ZSTD_createCCtx() failed!");
    return VAR_10;
}
