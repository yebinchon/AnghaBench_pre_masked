
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
 int FUNC_5 (int,long,int,int ,int ,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_5__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
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
    const char *VAR_14)
{
    STARTUPINFO VAR_15;
    PROCESS_INFORMATION VAR_16;
    SECURITY_ATTRIBUTES VAR_17;
    DWORD VAR_18;
    char VAR_19[300];
    BOOL VAR_20;
    HANDLE VAR_21, VAR_22, VAR_23[2];
    char VAR_24[100];

    VAR_21 = FUNC_6();

    FUNC_13(&VAR_16, sizeof(PROCESS_INFORMATION));
    FUNC_13(&VAR_15, sizeof(STARTUPINFO));
    VAR_15.cb = sizeof(STARTUPINFO);
    VAR_15.dwFlags = VAR_11;
    VAR_15.hStdInput = VAR_8;

    FUNC_13(&VAR_17, sizeof(SECURITY_ATTRIBUTES));
    VAR_17.nLength = sizeof(SECURITY_ATTRIBUTES);
    VAR_17.lpSecurityDescriptor = ((void*)0);
    VAR_17.bInheritHandle = VAR_13;





    FUNC_1(&VAR_9.pipe, &VAR_22, &VAR_17, 0);





    FUNC_4(VAR_21, VAR_22, VAR_21, &VAR_15.hStdOutput, 0, VAR_13,
     VAR_2 | VAR_1);





    FUNC_1(&VAR_3.pipe, &VAR_22, &VAR_17, 0);
    FUNC_4(VAR_21, VAR_22, VAR_21, &VAR_15.hStdError, 0, VAR_13,
     VAR_2 | VAR_1);





    FUNC_15(VAR_24, "link.exe -nologo ");





    FUNC_14(VAR_24, VAR_14);

    VAR_20 = FUNC_2(
     ((void*)0),
     VAR_24,
     ((void*)0),
     ((void*)0),
     VAR_13,
     VAR_0,
     ((void*)0),
     ((void*)0),
     &VAR_15,
     &VAR_16);

    if (!VAR_20) {
 DWORD VAR_25 = FUNC_7();
 int VAR_26 = FUNC_17(VAR_19, sizeof(VAR_19) - 1,
  "Tried to launch: \"%s\", but got error [%u]: ", VAR_24, VAR_25);

 FUNC_5(VAR_4|VAR_5|
  VAR_6, 0L, VAR_25, 0, (LPVOID)&VAR_19[VAR_26],
  (300-VAR_26), 0);
 FUNC_12(FUNC_8(VAR_12), VAR_19, FUNC_16(VAR_19), &VAR_25,((void*)0));
 return 2;
    }





    FUNC_0(VAR_15.hStdOutput);
    FUNC_0(VAR_15.hStdError);

    FUNC_9(VAR_16.hProcess, 5000);
    FUNC_0(VAR_16.hThread);





    VAR_23[0] = FUNC_3(((void*)0), 0, VAR_10, &VAR_9, 0, &VAR_18);
    VAR_23[1] = FUNC_3(((void*)0), 0, VAR_10, &VAR_3, 0, &VAR_18);





    FUNC_11(VAR_16.hProcess, VAR_7);
    FUNC_0(VAR_16.hProcess);





    FUNC_10(2, VAR_23, VAR_13, 500);
    FUNC_0(VAR_23[0]);
    FUNC_0(VAR_23[1]);





    return !(FUNC_18(VAR_9.buffer, "LNK1117") != ((void*)0) ||
     FUNC_18(VAR_3.buffer, "LNK1117") != ((void*)0) ||
     FUNC_18(VAR_9.buffer, "LNK4044") != ((void*)0) ||
     FUNC_18(VAR_3.buffer, "LNK4044") != ((void*)0));
}
