
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char const* const) ;

int FUNC_2(int VAR_1, const char** VAR_2)
{
    const char* const VAR_3 = VAR_2[0];
    const char* const VAR_4 = VAR_2[1];
    if (VAR_1!=2) {
        FUNC_0("incorrect usage : %s tag \n", VAR_3);
        return 2;
    }

    FUNC_0("Version : %s \n", VAR_0);
    FUNC_0("Tag     : %s \n", VAR_4);

    if (FUNC_1(VAR_4)) {
        FUNC_0("OK : tag is compatible with zstd version \n");
        return 0;
    }

    FUNC_0("!! error : tag and versions are not compatible !! \n");
    return 1;
}
