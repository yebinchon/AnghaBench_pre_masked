
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (char*,char const*,int ,int,int) ;
 int FUNC_2 (char*,int,int) ;
 scalar_t__ FUNC_3 (char*,char const*,int ) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (char*,char*,unsigned int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (unsigned int) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static void
FUNC_11(void)
{
    char *VAR_4;
    char *VAR_5;
    char *VAR_6;
    const char *VAR_7 = "Correct Horse Battery Staple";

    VAR_6 = (char *) FUNC_8(VAR_2);
    VAR_4 =
        (char *) FUNC_8(VAR_3);
    VAR_5 =
        (char *) FUNC_8(VAR_3);
    FUNC_5(VAR_6, "[<~A 32-bytes salt for scrypt~>]",
           VAR_2);
    if (FUNC_1(VAR_4, VAR_7, FUNC_10(VAR_7),
                                               VAR_1, VAR_0) != 0) {
        FUNC_6("pwhash_str failure\n");
    }
    if (FUNC_1(VAR_5, VAR_7, FUNC_10(VAR_7),
                                               VAR_1, VAR_0) != 0) {
        FUNC_6("pwhash_str(2) failure\n");
    }
    if (FUNC_9(VAR_4, VAR_5) == 0) {
        FUNC_6("pwhash_str doesn't generate different salts\n");
    }
    if (FUNC_2
        (VAR_4, VAR_1, VAR_0) != 0) {
        FUNC_6("needs_rehash() false positive\n");
    }
    if (FUNC_2
        (VAR_4, VAR_1, VAR_0 / 2) != 1 ||
        FUNC_2
        (VAR_4, VAR_1 / 2, VAR_0) != 1 ||
        FUNC_2
        (VAR_4, VAR_1, VAR_0 * 2) != 1 ||
        FUNC_2
        (VAR_4, VAR_1 * 2, VAR_0) != 1) {
        FUNC_6("needs_rehash() false negative\n");
    }
    if (FUNC_2
        (VAR_4 + 1, VAR_1, VAR_0) != -1) {
        FUNC_6("needs_rehash() didn't fail with an invalid hash string\n");
    }
    if (FUNC_3(VAR_4, VAR_7,
                                                      FUNC_10(VAR_7)) != 0) {
        FUNC_6("pwhash_str_verify failure\n");
    }
    if (FUNC_3(VAR_4, VAR_7,
                                                      FUNC_10(VAR_7)) != 0) {
        FUNC_6("pwhash_str_verify failure\n");
    }
    VAR_4[14]++;
    if (FUNC_3(VAR_4, VAR_7,
                                                      FUNC_10(VAR_7)) == 0) {
        FUNC_6("pwhash_str_verify(2) failure\n");
    }
    VAR_4[14]--;

    FUNC_0(VAR_4[VAR_3 - 1U] == 0);

    FUNC_0(FUNC_2
           (VAR_4, 0, 0) == 1);
    FUNC_0(FUNC_4(VAR_4, 0, 0) == -1);
    FUNC_0(FUNC_4(VAR_4, VAR_1, VAR_0) == -1);
    FUNC_0(FUNC_2
           ("", VAR_1, VAR_0) == -1);

    FUNC_7(VAR_6);
    FUNC_7(VAR_4);
    FUNC_7(VAR_5);
}
