
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_md5_ctx_t ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned char*,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char const*,int ) ;
 scalar_t__ FUNC_4 (unsigned char*,char const*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(abts_case *VAR_1, void *VAR_2)
{
        apr_md5_ctx_t VAR_3;
        const char *VAR_4 = "abcdefghijklmnopqrstuvwxyz01234"
                             "abcdefghijklmnopqrstuvwxyz01234"
                             "abcdefghijklmnopqrstuvwxyz01234"
                             "abcdefghijklmnopqrstuvwxyz01234_";
        const char *VAR_5 =
            "\x93\x17\x22\x78\xee\x30\x82\xb3\xeb\x95\x33\xec\xea\x78\xb7\x89";
        unsigned char VAR_6[VAR_0];
        unsigned int VAR_7;

        FUNC_0(VAR_1, "apr_md5_init", (FUNC_2(&VAR_3) == 0));
        for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
                FUNC_0(VAR_1, "apr_md5_update",
                    (FUNC_3(&VAR_3, VAR_4, FUNC_5(VAR_4)) == 0));
                VAR_4++;
        }
        FUNC_0(VAR_1, "apr_md5_final", (FUNC_1(VAR_6, &VAR_3)
                                          == 0));
        FUNC_0(VAR_1, "check for correct md5 digest of unaligned data",
                    (FUNC_4(VAR_6, VAR_5, VAR_0) == 0));
}
