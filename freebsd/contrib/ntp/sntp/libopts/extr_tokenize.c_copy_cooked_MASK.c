
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ch_t ;



 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_1(ch_t ** VAR_0, char const ** VAR_1)
{
    ch_t * VAR_2 = (ch_t *)*VAR_0;
    const ch_t * VAR_3 = (const ch_t *)(*VAR_1 + 1);

    for (;;) {
        ch_t VAR_4 = *(VAR_3++);
        switch (VAR_4) {
        case 128: *VAR_1 = ((void*)0); return;
        case '"': goto done;
        case '\\':
            VAR_3 += FUNC_0((const char *)VAR_3, (char *)&VAR_4, 0x7F);
            if (VAR_4 == 0x7F)
                break;


        default:
            *(VAR_2++) = VAR_4;
        }
    }

 done:
    *VAR_0 = (ch_t *)VAR_2;
    *VAR_1 = (char const *)VAR_3;
}
