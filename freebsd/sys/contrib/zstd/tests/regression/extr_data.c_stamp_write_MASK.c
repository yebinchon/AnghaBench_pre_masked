
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hash ;
typedef int data_t ;
typedef int XXH64_canonical_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 char* FUNC_1 (char const*,char*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int,int,int *) ;
 int VAR_2 ;
 int FUNC_7 (int const* const*) ;
 int VAR_3 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(char const* VAR_4, data_t const* const* VAR_5, int const VAR_6) {
    char* VAR_7 = FUNC_1(VAR_4, "/", VAR_2);
    FILE* VAR_8 = ((void*)0);
    int VAR_9 = VAR_0;

    if (VAR_7 == ((void*)0))
        return VAR_1;

    if (VAR_6 != 0) {
        VAR_9 = VAR_6;
        goto out;
    }
    XXH64_canonical_t VAR_10;

    FUNC_0(&VAR_10, FUNC_7(VAR_5));

    VAR_8 = FUNC_3(VAR_7, "wb");
    if (VAR_8 == ((void*)0))
        goto out;
    if (FUNC_6(&VAR_10, sizeof(VAR_10), 1, VAR_8) != 1)
        goto out;
    VAR_9 = 0;
    FUNC_4(VAR_3, "stamped new data cache\n");
out:
    if (VAR_9 != 0)

        FUNC_8(VAR_7);
    FUNC_5(VAR_7);
    if (VAR_8 != ((void*)0))
        FUNC_2(VAR_8);
    return VAR_9;
}
