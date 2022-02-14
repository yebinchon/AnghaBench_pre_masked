
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 int const* FUNC_3 (int const*,int const*) ;
 int FUNC_4 (int *,int const*,int,int const*,int) ;
 int FUNC_5 (int *,int const*,int,int const*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int *,int const*,char const*,int const*,int ) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8(netdissect_options *VAR_3,
            const u_char *VAR_4, const u_char *VAR_5, const u_char *VAR_6, const u_char *VAR_7)
{
    u_int VAR_8;
    const char *VAR_9, *VAR_10, *VAR_11, *VAR_12;
    const u_char *VAR_13, *VAR_14;
    const u_char *VAR_15 = VAR_4 + 1;
    int VAR_16, VAR_17;

    if (VAR_0) {
 FUNC_2(VAR_15[12 * 2], 2);
 VAR_17 = FUNC_0(VAR_15 + 9 * 2);
 VAR_14 = VAR_6 + FUNC_0(VAR_15 + 10 * 2);
 VAR_16 = FUNC_0(VAR_15 + 11 * 2);
 VAR_13 = VAR_6 + FUNC_0(VAR_15 + 12 * 2);
 VAR_9 = "TotParamCnt=[d] \nTotDataCnt=[d] \nMaxParmCnt=[d] \nMaxDataCnt=[d]\nMaxSCnt=[d] \nTransFlags=[w] \nRes1=[w] \nRes2=[w] \nRes3=[w]\nParamCnt=[d] \nParamOff=[d] \nDataCnt=[d] \nDataOff=[d] \nSUCnt=[d]\n";
 VAR_10 = "|Name=[S]\n";
 VAR_11 = "|Param ";
 VAR_12 = "|Data ";
    } else {
 FUNC_2(VAR_15[7 * 2], 2);
 VAR_17 = FUNC_0(VAR_15 + 3 * 2);
 VAR_14 = VAR_6 + FUNC_0(VAR_15 + 4 * 2);
 VAR_16 = FUNC_0(VAR_15 + 6 * 2);
 VAR_13 = VAR_6 + FUNC_0(VAR_15 + 7 * 2);
 VAR_9 = "TotParamCnt=[d] \nTotDataCnt=[d] \nRes1=[d]\nParamCnt=[d] \nParamOff=[d] \nRes2=[d] \nDataCnt=[d] \nDataOff=[d] \nRes3=[d]\nLsetup=[d]\n";
 VAR_10 = "|Unknown ";
 VAR_11 = "|Param ";
 VAR_12 = "|Data ";
    }

    FUNC_6(VAR_3, VAR_4 + 1, VAR_9, FUNC_3(VAR_4 + 1 + 2 * VAR_4[0], VAR_7),
        VAR_2);

    FUNC_2(*VAR_5, 2);
    VAR_8 = FUNC_0(VAR_5);
    FUNC_1((VAR_3, "smb_bcc=%u\n", VAR_8));
    if (VAR_8 > 0) {
 FUNC_6(VAR_3, VAR_5 + 2, VAR_10, VAR_7 - (VAR_17 + VAR_16), VAR_2);

 if (FUNC_7((const char *)(VAR_5 + 2), "\\MAILSLOT\\BROWSE") == 0) {
     FUNC_4(VAR_3, VAR_14, VAR_17, VAR_13, VAR_16);
     return;
 }

 if (FUNC_7((const char *)(VAR_5 + 2), "\\PIPE\\LANMAN") == 0) {
     FUNC_5(VAR_3, VAR_14, VAR_17, VAR_13, VAR_16);
     return;
 }

 if (VAR_17)
     FUNC_6(VAR_3, VAR_14, VAR_11, FUNC_3(VAR_14 + VAR_17, VAR_7), VAR_2);
 if (VAR_16)
     FUNC_6(VAR_3, VAR_13, VAR_12, FUNC_3(VAR_13 + VAR_16, VAR_7), VAR_2);
    }
    return;
trunc:
    FUNC_1((VAR_3, "%s", VAR_1));
}
