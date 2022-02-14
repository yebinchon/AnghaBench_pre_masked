
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int * const) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char const*) ;
 size_t FUNC_4 (int *,int,size_t const,int * const) ;
 int FUNC_5 (int * const,long,int ) ;
 int FUNC_6 (int * const) ;
 int * FUNC_7 (size_t const) ;
 int FUNC_8 (int * const) ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_9(const char *VAR_2, u8 **VAR_3)
{
    FILE* const VAR_4 = FUNC_2(VAR_2, "rb");
    if (!VAR_4) {
        FUNC_3(VAR_1, "failed to open file %s \n", VAR_2);
        FUNC_0(1);
    }

    FUNC_5(VAR_4, 0L, VAR_0);
    size_t const VAR_5 = (size_t)FUNC_6(VAR_4);
    FUNC_8(VAR_4);

    *VAR_3 = FUNC_7(VAR_5);
    if (!VAR_3) {
        FUNC_3(VAR_1, "failed to allocate memory to hold %s \n", VAR_2);
        FUNC_0(1);
    }

    size_t const VAR_6 = FUNC_4(*VAR_3, 1, VAR_5, VAR_4);
    if (VAR_6 != VAR_5) {
        FUNC_3(VAR_1, "error while reading file %s \n", VAR_2);
        FUNC_0(1);
    }

    FUNC_1(VAR_4);

    return VAR_6;
}
