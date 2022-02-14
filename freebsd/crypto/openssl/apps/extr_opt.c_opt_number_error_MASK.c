
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct strstr_pair_st TYPE_1__ ;


struct strstr_pair_st {char* prefix; char* name; } ;


 int FUNC_0 (int ,char*,int ,char const*,...) ;
 size_t FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int ) ;

__attribute__((used)) static void FUNC_4(const char *VAR_2)
{
    size_t VAR_3 = 0;
    struct strstr_pair_st {
        char *prefix;
        char *name;
    } VAR_4[] = {
        {"0x", "a hexadecimal"},
        {"0X", "a hexadecimal"},
        {"0", "an octal"}
    };

    for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_4); VAR_3++) {
        if (FUNC_3(VAR_2, VAR_4[VAR_3].prefix, FUNC_2(VAR_4[VAR_3].prefix)) == 0) {
            FUNC_0(VAR_0,
                       "%s: Can't parse \"%s\" as %s number\n",
                       VAR_1, VAR_2, VAR_4[VAR_3].name);
            return;
        }
    }
    FUNC_0(VAR_0, "%s: Can't parse \"%s\" as a number\n", VAR_1, VAR_2);
    return;
}
