
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 char const* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const char*
FUNC_0(uint16_t VAR_2, uint16_t VAR_3)
{
    if (VAR_2 != VAR_1)
        return VAR_0;

    switch (VAR_3) {
    case 134:
        return "Atheros AR938x";
    case 135:
        return "Atheros AR934x";
    case 132:
        return "Atheros AR9485";
    case 131:
        return "Atheros AR9580";
    case 133:
        return "Atheros AR946x/AR948x";
    case 136:
        return "Atheros AR933x";
    case 129:
        return "Qualcomm Atheros QCA955x";
    case 128:
         return "Qualcomm Atheros AR9565";
    case 130:
         return "Qualcomm Atheros QCA953x";
    case 137:
         return "Atheros AR1111";
    default:
        return VAR_0;
    }

    return VAR_0;
}
