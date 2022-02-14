
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int data ;
typedef int ZSTD_DCtx ;
typedef int ZSTD_CCtx ;
typedef int XXH64_state_t ;
struct TYPE_3__ {int member_1; int pos; int dst; int member_2; int * member_0; } ;
typedef int SEQ_stream ;
typedef TYPE_1__ SEQ_outBuffer ;
typedef int SEQ_gen_type ;
typedef int BYTE ;


 size_t FUNC_0 (int *,int ,unsigned int,TYPE_1__*) ;
 size_t FUNC_1 (int *,int *,int *,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (size_t) ;

__attribute__((used)) static size_t FUNC_3(ZSTD_CCtx* VAR_1, ZSTD_DCtx* VAR_2,
                                    XXH64_state_t* VAR_3, SEQ_stream* VAR_4,
                                    SEQ_gen_type VAR_5, unsigned VAR_6)
{
    static BYTE VAR_7[1024];
    size_t VAR_8;

    do {
        SEQ_outBuffer VAR_9 = {VAR_7, sizeof(VAR_7), 0};
        size_t VAR_10;
        VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, &VAR_9);

        VAR_10 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_9.dst, VAR_9.pos, VAR_0);
        if (FUNC_2(VAR_10))
            return VAR_10;
    } while (VAR_8 != 0);

    return 0;
}
