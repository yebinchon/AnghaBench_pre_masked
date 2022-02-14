
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_buf {int length; char* data; } ;
typedef int ntlmv2 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (char*,int,char const*,char const*,unsigned char const*,struct ntlm_buf*,unsigned char*,struct ntlm_buf*) ;
 int FUNC_3 (char const*,struct ntlm_buf*) ;
 int FUNC_4 (char*,int,char const*,char const*,int ,unsigned char const*,struct ntlm_buf*,struct ntlm_buf*,unsigned char*) ;
 scalar_t__ FUNC_5 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_6(void)
{
    const char
 *VAR_0 = "test",
 *VAR_1 = "test1234",
 *VAR_2 = "TESTNT";
    const unsigned char
 VAR_3[8] = "\x67\x7f\x1c\x55\x7a\x5e\xe9\x6c";
    struct ntlm_buf VAR_4, VAR_5, VAR_6, VAR_7;
    unsigned char VAR_8[16], VAR_9[16];
    int VAR_10;

    VAR_4.length = 70;
    VAR_4.data =
 "\x02\x00\x0c\x00\x54\x00\x45\x00\x53\x00\x54\x00\x4e\x00\x54\x00"
 "\x01\x00\x0c\x00\x4d\x00\x45\x00\x4d\x00\x42\x00\x45\x00\x52\x00"
 "\x03\x00\x1e\x00\x6d\x00\x65\x00\x6d\x00\x62\x00\x65\x00\x72\x00"
     "\x2e\x00\x74\x00\x65\x00\x73\x00\x74\x00\x2e\x00\x63\x00\x6f"
     "\x00\x6d\x00"
 "\x00\x00\x00\x00";

    VAR_6.length = 0;
    VAR_6.data = ((void*)0);

    FUNC_3(VAR_1, &VAR_7);

    VAR_10 = FUNC_2(VAR_7.data,
        VAR_7.length,
        VAR_0,
        VAR_2,
        VAR_3,
        &VAR_4,
        VAR_8,
        &VAR_6);
    if (VAR_10)
 FUNC_0(1, "heim_ntlm_calculate_ntlm2");

    VAR_10 = FUNC_4(VAR_7.data,
     VAR_7.length,
     VAR_0,
     VAR_2,
     0,
     VAR_3,
     &VAR_6,
     &VAR_5,
     VAR_9);
    if (VAR_10)
 FUNC_0(1, "heim_ntlm_verify_ntlm2");

    if (FUNC_5(VAR_8, VAR_9, sizeof(VAR_8)) != 0)
 FUNC_0(1, "ntlm master key not same");

    if (VAR_4.length > VAR_5)
 FUNC_0(1, "infotarget length");

    if (FUNC_5(VAR_4.data, VAR_5, VAR_4.length) != 0)
 FUNC_0(1, "infotarget not the same");

    FUNC_1(VAR_7.data);
    FUNC_1(VAR_6.data);
    FUNC_1(VAR_5);

    return 0;
}
