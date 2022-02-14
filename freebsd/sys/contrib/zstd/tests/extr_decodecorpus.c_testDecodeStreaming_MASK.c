
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int srcStart; scalar_t__ dataStart; scalar_t__ data; } ;
typedef TYPE_1__ frame_t ;
struct TYPE_8__ {size_t pos; int dst; scalar_t__ size; } ;
typedef TYPE_2__ ZSTD_outBuffer ;
struct TYPE_9__ {int size; scalar_t__ pos; scalar_t__ src; } ;
typedef TYPE_3__ ZSTD_inBuffer ;
typedef int ZSTD_DStream ;
typedef int BYTE ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int * FUNC_3 () ;
 size_t FUNC_4 (int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (size_t) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int ,int ,size_t) ;
 int VAR_3 ;

__attribute__((used)) static size_t FUNC_9(frame_t* VAR_4)
{

    ZSTD_DStream* VAR_5 = FUNC_3();
    ZSTD_inBuffer VAR_6;
    ZSTD_outBuffer VAR_7;
    size_t VAR_8;

    if (!VAR_5) return FUNC_0(VAR_3);

    VAR_6.src = VAR_4->dataStart;
    VAR_6.pos = 0;
    VAR_6.size = (BYTE*)VAR_4->data - (BYTE*)VAR_4->dataStart;

    VAR_7.dst = VAR_0;
    VAR_7.pos = 0;
    VAR_7.size = FUNC_2();

    FUNC_6(VAR_5);
    while (1) {
        VAR_8 = FUNC_4(VAR_5, &VAR_7, &VAR_6);
        if (FUNC_7(VAR_8)) goto cleanup;
        if (VAR_8 == 0) break;


        VAR_7.size += FUNC_1(FUNC_2(), VAR_1 - VAR_7.size);
    }

    VAR_8 = VAR_7.pos;

    if (FUNC_8(VAR_7.dst, VAR_4->srcStart, VAR_7.pos) != 0) {
        return FUNC_0(VAR_2);
    }

cleanup:
    FUNC_5(VAR_5);
    return VAR_8;
}
