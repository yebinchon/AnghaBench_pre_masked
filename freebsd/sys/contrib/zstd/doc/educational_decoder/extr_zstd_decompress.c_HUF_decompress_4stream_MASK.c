
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ostream_t ;
typedef int istream_t ;
typedef int HUF_dtable ;


 scalar_t__ FUNC_0 (int const* const,int * const,int *) ;
 size_t const FUNC_1 (int * const) ;
 int FUNC_2 (int * const,size_t const) ;
 size_t FUNC_3 (int * const,int) ;

__attribute__((used)) static size_t FUNC_4(const HUF_dtable *const VAR_0,
                                     ostream_t *const VAR_1, istream_t *const VAR_2) {





    const size_t VAR_3 = FUNC_3(VAR_2, 16);
    const size_t VAR_4 = FUNC_3(VAR_2, 16);
    const size_t VAR_5 = FUNC_3(VAR_2, 16);

    istream_t VAR_6 = FUNC_2(VAR_2, VAR_3);
    istream_t VAR_7 = FUNC_2(VAR_2, VAR_4);
    istream_t VAR_8 = FUNC_2(VAR_2, VAR_5);
    istream_t VAR_9 = FUNC_2(VAR_2, FUNC_1(VAR_2));

    size_t VAR_10 = 0;



    VAR_10 += FUNC_0(VAR_0, VAR_1, &VAR_6);
    VAR_10 += FUNC_0(VAR_0, VAR_1, &VAR_7);
    VAR_10 += FUNC_0(VAR_0, VAR_1, &VAR_8);
    VAR_10 += FUNC_0(VAR_0, VAR_1, &VAR_9);

    return VAR_10;
}
