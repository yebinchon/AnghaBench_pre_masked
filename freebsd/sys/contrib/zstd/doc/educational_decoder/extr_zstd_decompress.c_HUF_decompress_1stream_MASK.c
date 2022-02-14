
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
typedef int ostream_t ;
typedef int istream_t ;
typedef size_t i64 ;
struct TYPE_5__ {size_t max_bits; } ;
typedef TYPE_1__ HUF_dtable ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__ const* const,int *,int const* const,size_t*) ;
 int FUNC_2 (TYPE_1__ const* const,int *,int const* const,size_t*) ;
 int FUNC_3 () ;
 int * FUNC_4 (int * const,size_t const) ;
 size_t FUNC_5 (int * const) ;
 int FUNC_6 (int * const,int ) ;
 int FUNC_7 (int const) ;

__attribute__((used)) static size_t FUNC_8(const HUF_dtable *const VAR_0,
                                     ostream_t *const VAR_1,
                                     istream_t *const VAR_2) {
    const size_t VAR_3 = FUNC_5(VAR_2);
    if (VAR_3 == 0) {
        FUNC_3();
    }
    const u8 *const VAR_4 = FUNC_4(VAR_2, VAR_3);
    const int VAR_5 = 8 - FUNC_7(VAR_4[VAR_3 - 1]);


    i64 VAR_6 = VAR_3 * 8 - VAR_5;
    u16 VAR_7;

    FUNC_2(VAR_0, &VAR_7, VAR_4, &VAR_6);

    size_t VAR_8 = 0;
    while (VAR_6 > -VAR_0->max_bits) {

        FUNC_6(VAR_1, FUNC_1(VAR_0, &VAR_7, VAR_4, &VAR_6));
        VAR_8++;
    }
    if (VAR_6 != -VAR_0->max_bits) {
        FUNC_0();
    }

    return VAR_8;
}
