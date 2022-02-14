
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
__attribute__((used)) static const char *FUNC_0(uint8_t VAR_0)
{
    switch (VAR_0) {
    case 130:
        return "QM_MCR_RESULT_NULL";
    case 129:
        return "QM_MCR_RESULT_OK";
    case 133:
        return "QM_MCR_RESULT_ERR_FQID";
    case 132:
        return "QM_MCR_RESULT_ERR_FQSTATE";
    case 131:
        return "QM_MCR_RESULT_ERR_NOTEMPTY";
    case 128:
        return "QM_MCR_RESULT_PENDING";
    }
    return "<unknown MCR result>";
}
