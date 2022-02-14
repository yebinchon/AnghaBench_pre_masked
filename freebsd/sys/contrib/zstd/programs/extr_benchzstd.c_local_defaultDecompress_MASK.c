
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; size_t pos; void* dst; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_6__ {size_t size; scalar_t__ pos; void const* src; } ;
typedef TYPE_2__ ZSTD_inBuffer ;
typedef int ZSTD_DCtx ;


 size_t FUNC_0 (int * const,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (size_t) ;

__attribute__((used)) static size_t FUNC_2(
                    const void* VAR_1, size_t VAR_2,
                    void* VAR_3, size_t VAR_4,
                    void* VAR_5)
{
    size_t VAR_6 = 1;
    ZSTD_DCtx* const VAR_7 = (ZSTD_DCtx*)VAR_5;
    ZSTD_inBuffer VAR_8;
    ZSTD_outBuffer VAR_9;
    VAR_8.src = VAR_1; VAR_8.size = VAR_2; VAR_8.pos = 0;
    VAR_9.dst = VAR_3; VAR_9.size = VAR_4; VAR_9.pos = 0;
    while (VAR_6) {
        if(VAR_9.pos == VAR_9.size) {
            return (size_t)-VAR_0;
        }
        VAR_6 = FUNC_0(VAR_7, &VAR_9, &VAR_8);
        if (FUNC_1(VAR_6)) {
            return VAR_6;
        }
    }
    return VAR_9.pos;

}
