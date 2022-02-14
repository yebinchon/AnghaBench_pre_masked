
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int FUNC_0 (int *,char*,...) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static int FUNC_1(BIO *VAR_4, unsigned int VAR_5, const char *VAR_6)
{
    int VAR_7 = 0, VAR_8 = 0;

    FUNC_0(VAR_4, "%s%s(input flags): ", VAR_6, VAR_6);
    if (VAR_5 == 0) {
        FUNC_0(VAR_4, "<no flags>\n");
        return 1;
    }




    if (VAR_5 & VAR_0) {
        FUNC_0(VAR_4, "[Internal] ");
    }

    if (VAR_5 & VAR_2) {
        FUNC_0(VAR_4, "NUMERIC");
        VAR_7 = 1;
    }






    if (VAR_5 & VAR_3) {
        if (VAR_7) {
            FUNC_0(VAR_4, "|");
            VAR_8 = 1;
        }
        FUNC_0(VAR_4, "STRING");
        VAR_7 = 1;
    }
    if (VAR_5 & VAR_1) {
        if (VAR_7) {
            FUNC_0(VAR_4, "|");
            VAR_8 = 1;
        }
        FUNC_0(VAR_4, "NO_INPUT");
        VAR_7 = 1;
    }

    VAR_5 = VAR_5 & ~VAR_2 &
        ~VAR_3 &
        ~VAR_1 & ~VAR_0;
    if (VAR_5) {
        if (VAR_7)
            FUNC_0(VAR_4, "|");
        FUNC_0(VAR_4, "<0x%04X>", VAR_5);
    }
    if (VAR_8)
        FUNC_0(VAR_4, "  <illegal flags!>");
    FUNC_0(VAR_4, "\n");
    return 1;
}
