
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; int member_2; int member_1; } ;
typedef TYPE_1__ NAME_EX_TBL ;
 int FUNC_0 (unsigned long*,char const*,TYPE_1__ const*) ;

int FUNC_1(unsigned long *VAR_0, const char *VAR_1)
{
    static const NAME_EX_TBL VAR_2[] = {
        {"compatible", 140, 0xffffffffl},
        {"ca_default", 141, 0xffffffffl},
        {"no_header", 136, 0},
        {"no_version", 128, 0},
        {"no_serial", 133, 0},
        {"no_signame", 131, 0},
        {"no_validity", 129, 0},
        {"no_subject", 130, 0},
        {"no_issuer", 135, 0},
        {"no_pubkey", 134, 0},
        {"no_extensions", 137, 0},
        {"no_sigdump", 132, 0},
        {"no_aux", 138, 0},
        {"no_attributes", 139, 0},
        {"ext_default", 146, 142},
        {"ext_error", 144, 142},
        {"ext_parse", 143, 142},
        {"ext_dump", 145, 142},
        {((void*)0), 0, 0}
    };
    return FUNC_0(VAR_0, VAR_1, VAR_2);
}
