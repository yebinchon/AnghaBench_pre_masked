
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t contentSize; size_t windowSize; } ;
struct TYPE_6__ {TYPE_1__ header; } ;
typedef TYPE_2__ frame_t ;
typedef int dictInfo ;
typedef int U32 ;


 int FUNC_0 (size_t const,size_t) ;
 int FUNC_1 (int *) ;
 size_t const VAR_0 ;
 int FUNC_2 (int *,TYPE_2__*,size_t,int const,int ) ;

__attribute__((used)) static void FUNC_3(U32* VAR_1, frame_t* VAR_2, dictInfo VAR_3)
{
    size_t VAR_4 = VAR_2->header.contentSize;
    size_t const VAR_5 = FUNC_0(VAR_0, VAR_2->header.windowSize);
    while (1) {

        int const VAR_6 = VAR_4 > VAR_5 ? 0 : !(FUNC_1(VAR_1) & 3);
        size_t VAR_7;
        if (VAR_6) {
            VAR_7 = VAR_4;
        } else {
            if (VAR_4 > 0 && (FUNC_1(VAR_1) & 7)) {

                VAR_7 = FUNC_1(VAR_1) % (FUNC_0(VAR_5, VAR_4)+1);
            } else if (VAR_4 > VAR_5 && (FUNC_1(VAR_1) & 1)) {

                VAR_7 = VAR_5;
            } else {

                VAR_7 = 0;
            }
        }

        FUNC_2(VAR_1, VAR_2, VAR_7, VAR_6, VAR_3);

        VAR_4 -= VAR_7;
        if (VAR_6) break;
    }
}
