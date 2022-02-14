
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int msg ;
struct TYPE_12__ {int buffer; int pipe; } ;
struct TYPE_11__ {int cb; int nLength; int hProcess; int hThread; int hStdError; int hStdOutput; int bInheritHandle; int * lpSecurityDescriptor; int hStdInput; int dwFlags; } ;
typedef TYPE_1__ STARTUPINFO ;
typedef TYPE_1__ SECURITY_ATTRIBUTES ;
typedef TYPE_1__ PROCESS_INFORMATION ;
typedef int LPVOID ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int *,int ,int ,TYPE_5__*,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ,int *,int ,int ,int) ;
 TYPE_5__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int,long,int,int ,int ,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_5__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int,int *,int ,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,char*,int ,int*,int *) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (char*,char const*) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,int,char*,char*,int) ;
 int * FUNC_18 (int ,char*) ;

__attribute__((used)) static int
FUNC_19(
    const char *VAR_15)
{
    STARTUPINFO VAR_16;
    PROCESS_INFORMATION VAR_17;
    SECURITY_ATTRIBUTES VAR_18;
    DWORD VAR_19;
    char VAR_20[300];
    BOOL VAR_21;
    HANDLE VAR_22, VAR_23, VAR_24[2];
    char VAR_25[100];

    VAR_22 = FUNC_6();

    FUNC_13(&VAR_17, sizeof(PROCESS_INFORMATION));
    FUNC_13(&VAR_16, sizeof(STARTUPINFO));
    VAR_16.cb = sizeof(STARTUPINFO);
    VAR_16.dwFlags = VAR_12;
    VAR_16.hStdInput = VAR_9;

    FUNC_13(&VAR_18, sizeof(SECURITY_ATTRIBUTES));
    VAR_18.nLength = sizeof(SECURITY_ATTRIBUTES);
    VAR_18.lpSecurityDescriptor = ((void*)0);
    VAR_18.bInheritHandle = VAR_4;





    FUNC_1(&VAR_10.pipe, &VAR_23, &VAR_18, 0);





    FUNC_4(VAR_22, VAR_23, VAR_22, &VAR_16.hStdOutput, 0, VAR_14,
     VAR_2 | VAR_1);





    FUNC_1(&VAR_3.pipe, &VAR_23, &VAR_18, 0);
    FUNC_4(VAR_22, VAR_23, VAR_22, &VAR_16.hStdError, 0, VAR_14,
     VAR_2 | VAR_1);





    FUNC_15(VAR_25, "cl.exe -nologo -c -TC -Zs -X -Fp.\\_junk.pch ");





    FUNC_14(VAR_25, VAR_15);





    FUNC_14(VAR_25, " .\\nul");

    VAR_21 = FUNC_2(
     ((void*)0),
     VAR_25,
     ((void*)0),
     ((void*)0),
     VAR_14,
     VAR_0,
     ((void*)0),
     ((void*)0),
     &VAR_16,
     &VAR_17);

    if (!VAR_21) {
 DWORD VAR_26 = FUNC_7();
 int VAR_27 = FUNC_17(VAR_20, sizeof(VAR_20) - 1,
  "Tried to launch: \"%s\", but got error [%u]: ", VAR_25, VAR_26);

 FUNC_5(VAR_5|VAR_6|
  VAR_7, 0L, VAR_26, 0, (LPVOID)&VAR_20[VAR_27],
  (300-VAR_27), 0);
 FUNC_12(FUNC_8(VAR_13), VAR_20, FUNC_16(VAR_20), &VAR_26,((void*)0));
 return 2;
    }





    FUNC_0(VAR_16.hStdOutput);
    FUNC_0(VAR_16.hStdError);

    FUNC_9(VAR_17.hProcess, 5000);
    FUNC_0(VAR_17.hThread);





    VAR_24[0] = FUNC_3(((void*)0), 0, VAR_11, &VAR_10, 0, &VAR_19);
    VAR_24[1] = FUNC_3(((void*)0), 0, VAR_11, &VAR_3, 0, &VAR_19);





    FUNC_11(VAR_17.hProcess, VAR_8);
    FUNC_0(VAR_17.hProcess);





    FUNC_10(2, VAR_24, VAR_14, 500);
    FUNC_0(VAR_24[0]);
    FUNC_0(VAR_24[1]);






    return !(FUNC_18(VAR_10.buffer, "D4002") != ((void*)0)
             || FUNC_18(VAR_3.buffer, "D4002") != ((void*)0)
             || FUNC_18(VAR_10.buffer, "D9002") != ((void*)0)
             || FUNC_18(VAR_3.buffer, "D9002") != ((void*)0)
             || FUNC_18(VAR_10.buffer, "D2021") != ((void*)0)
             || FUNC_18(VAR_3.buffer, "D2021") != ((void*)0));
}
