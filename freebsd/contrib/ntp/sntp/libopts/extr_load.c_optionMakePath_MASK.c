
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char const*) ;
 int FUNC_1 (char*,int,char const*,char const*) ;
 int FUNC_2 (char*,int) ;
 int const* VAR_0 ;
 int FUNC_3 (char*,size_t,char*,int const*,char const*) ;
 size_t FUNC_4 (char const*) ;

bool
FUNC_5(char * VAR_1, int VAR_2, char const * VAR_3, char const * VAR_4)
{
    {
        size_t VAR_5 = FUNC_4(VAR_3);

        if (((size_t)VAR_2 <= VAR_5) || (VAR_5 == 0))
            return 0;
    }




    if (*VAR_3 != '$') {
        char const * VAR_6 = VAR_3;
        char * VAR_7 = VAR_1;
        int VAR_8 = VAR_2;

        for (;;) {
            if ( (*(VAR_7++) = *(VAR_6++)) == 128)
                break;
            if (--VAR_8 <= 0)
                return 0;
        }
    }






    else switch (VAR_3[1]) {
    case 128:
        return 0;

    case '$':
        if (! FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4))
            return 0;
        break;

    case '@':
        if (VAR_0[0] == 128)
            return 0;

        if (FUNC_3(VAR_1, (size_t)VAR_2, "%s%s",
                     VAR_0, VAR_3 + 2) >= VAR_2)
            return 0;
        break;

    default:
        if (! FUNC_0(VAR_1, VAR_2, VAR_3))
            return 0;
    }

    return FUNC_2(VAR_1, VAR_2);
}
