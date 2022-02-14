
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int ostream_t ;
typedef int istream_t ;
typedef int dictionary_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int * const,int) ;
 int FUNC_2 (int * const,int * const,int const* const) ;

__attribute__((used)) static void FUNC_3(ostream_t *const VAR_0, istream_t *const VAR_1,
                         const dictionary_t *const VAR_2) {
    const u32 VAR_3 = (u32)FUNC_1(VAR_1, 32);





    if (VAR_3 == 0xFD2FB528U) {

        FUNC_2(VAR_0, VAR_1, VAR_2);

        return;
    }


    FUNC_0("Tried to decode non-ZSTD frame");
}
