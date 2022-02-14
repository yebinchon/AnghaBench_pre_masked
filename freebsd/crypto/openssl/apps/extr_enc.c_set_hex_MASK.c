
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int VAR_0 ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, unsigned char *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    unsigned char VAR_6;

    VAR_4 = VAR_3 * 2;
    VAR_5 = FUNC_4(VAR_1);
    if (VAR_5 > VAR_4) {
        FUNC_0(VAR_0, "hex string is too long, ignoring excess\n");
        VAR_5 = VAR_4;
    } else if (VAR_5 < VAR_4) {
        FUNC_0(VAR_0, "hex string is too short, padding with zero bytes to length\n");
    }

    FUNC_3(VAR_2, 0, VAR_3);
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        VAR_6 = (unsigned char)*VAR_1++;
        if (!FUNC_2(VAR_6)) {
            FUNC_0(VAR_0, "non-hex digit\n");
            return 0;
        }
        VAR_6 = (unsigned char)FUNC_1(VAR_6);
        if (VAR_4 & 1)
            VAR_2[VAR_4 / 2] |= VAR_6;
        else
            VAR_2[VAR_4 / 2] = (VAR_6 << 4);
    }
    return 1;
}
