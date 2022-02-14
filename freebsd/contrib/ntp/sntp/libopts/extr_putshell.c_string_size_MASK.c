
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t
FUNC_0(char const * VAR_0, size_t VAR_1)
{



    size_t VAR_2 = 3;

    for (;;) {
        char VAR_3 = *(VAR_0++);
        if ((VAR_3 >= ' ') && (VAR_3 <= '~')) {




            VAR_2 += ((VAR_3 == '"') || (VAR_3 == '\\')) ? 2 : 1;
        }





        else switch (VAR_3) {
        case 129:
            return VAR_2;

        case 130:
            VAR_2 += VAR_1;
            break;

        case 131:
        case 135:
        case 134:
        case 132:
        case 133:
        case 128:
            VAR_2 += 2;
            break;

        default:
            VAR_2 += 4;
        }
    }
}
