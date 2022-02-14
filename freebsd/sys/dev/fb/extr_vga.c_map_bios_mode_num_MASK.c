
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, int VAR_1, int VAR_2)
{
    static int VAR_3[7] = {
 149, 144,
 148, 143,
 147, 142,
 146,
    };
    static int VAR_4[17] = {
 136, 134,
 135, 133,
 147, 142,
 146,
 138,
 8, 9, 10, 11, 12,
 141,
 140,
 137,
 132,
    };
    static int VAR_5[20] = {
 131, 131,
 130, 130,
 147, 142,
 146,
 128,
 8, 9, 10, 11, 12,
 141,
 140,
 137,
 132,
 145, 139,
 129,
    };

    switch (VAR_0) {

    case 150:
 if (VAR_2 < FUNC_0(VAR_5))
     return VAR_5[VAR_2];
 else if (VAR_1)
     return 130;
 else
     return 128;
 break;

    case 153:
 if (VAR_2 < FUNC_0(VAR_4))
     return VAR_4[VAR_2];
 else if (VAR_1)
     return 133;
 else
     return 138;
 break;

    case 154:
 if (VAR_2 < FUNC_0(VAR_3))
     return VAR_3[VAR_2];
 else
     return 143;
 break;

    case 151:
    case 152:
 return 138;

    default:
 break;
    }
    return -1;
}
