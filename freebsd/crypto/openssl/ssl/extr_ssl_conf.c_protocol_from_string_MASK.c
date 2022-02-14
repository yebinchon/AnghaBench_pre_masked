
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (struct protocol_versions const*) ;





 scalar_t__ FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0)
{
    struct protocol_versions {
        const char *name;
        int version;
    };
    static const struct protocol_versions VAR_1[] = {
        {"None", 0},
        {"SSLv3", 132},
        {"TLSv1", 128},
        {"TLSv1.1", 131},
        {"TLSv1.2", 130},
        {"TLSv1.3", 129},
        {"DTLSv1", 133},
        {"DTLSv1.2", 134}
    };
    size_t VAR_2;
    size_t VAR_3 = FUNC_0(VAR_1);

    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
        if (FUNC_1(VAR_1[VAR_2].name, VAR_0) == 0)
            return VAR_1[VAR_2].version;
    return -1;
}
