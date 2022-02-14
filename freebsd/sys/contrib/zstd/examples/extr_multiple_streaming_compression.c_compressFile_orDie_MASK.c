
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t buffInSize; int buffOut; int cctx; int buffOutSize; int buffIn; } ;
typedef TYPE_1__ resources ;
struct TYPE_8__ {int pos; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ ZSTD_outBuffer ;
struct TYPE_9__ {size_t member_1; scalar_t__ pos; scalar_t__ size; int member_2; int member_0; } ;
typedef TYPE_3__ ZSTD_inBuffer ;
typedef int ZSTD_EndDirective ;
typedef int FILE ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (size_t const) ;
 size_t const FUNC_2 (int ,int ) ;
 size_t FUNC_3 (int ,TYPE_2__*,TYPE_3__*,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int * const) ;
 int * FUNC_5 (char const*,char*) ;
 size_t FUNC_6 (int ,size_t const,int * const) ;
 int FUNC_7 (int ,int ,int * const) ;

__attribute__((used)) static void FUNC_8(resources VAR_3, const char* VAR_4, const char* VAR_5)
{

    FILE* const VAR_6 = FUNC_5(VAR_4, "rb");
    FILE* const VAR_7 = FUNC_5(VAR_5, "wb");





    FUNC_1( FUNC_2(VAR_3.cctx, VAR_2) );

    size_t const VAR_8 = VAR_3.buffInSize;
    size_t VAR_9;
    while ( (VAR_9 = FUNC_6(VAR_3.buffIn, VAR_8, VAR_6)) ) {



        int const VAR_10 = (VAR_9 < VAR_8);
        ZSTD_EndDirective const VAR_11 = VAR_10 ? VAR_1 : VAR_0;

        ZSTD_inBuffer VAR_12 = { VAR_3.buffIn, VAR_9, 0 };
        int VAR_13;
        do {
            ZSTD_outBuffer VAR_14 = { VAR_3.buffOut, VAR_3.buffOutSize, 0 };
            size_t const VAR_15 = FUNC_3(VAR_3.cctx, &VAR_14, &VAR_12, VAR_11);
            FUNC_1(VAR_15);
            FUNC_7(VAR_3.buffOut, VAR_14.pos, VAR_7);
            VAR_13 = VAR_10 ? (VAR_15 == 0) : (VAR_12.pos == VAR_12.size);
        } while (!VAR_13);
        FUNC_0(VAR_12.pos == VAR_12.size,
              "Impossible: zstd only returns 0 when the input is completely consumed!");
    }

    FUNC_4(VAR_7);
    FUNC_4(VAR_6);
}
