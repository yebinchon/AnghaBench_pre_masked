
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char wchar_t ;
struct stat {int st_mode; } ;
typedef size_t ssize_t ;
typedef int buff ;
struct TYPE_7__ {int dwFileAttributes; } ;
struct TYPE_5__ {size_t SubstituteNameLength; size_t SubstituteNameOffset; scalar_t__ PathBuffer; } ;
struct TYPE_6__ {scalar_t__ ReparseTag; TYPE_1__ SymbolicLinkReparseBuffer; } ;
typedef TYPE_2__ REPARSE_DATA_BUFFER ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef TYPE_3__ BY_HANDLE_FILE_INFORMATION ;
typedef char BYTE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int const,int *) ;
 int FUNC_2 (scalar_t__,int ,int *,int ,char*,int,int*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,TYPE_3__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,int,char*,char const*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char const*,struct stat*) ;
 char* FUNC_10 (size_t) ;
 size_t FUNC_11 (char*,char const**,size_t,int *) ;
 int FUNC_12 (char*,char*,size_t) ;
 size_t FUNC_13 (char const*,char*,int) ;
 scalar_t__ FUNC_14 (char*,char const*) ;
 int FUNC_15 (char const*) ;
 scalar_t__ FUNC_16 (char*,char*) ;

__attribute__((used)) static int
FUNC_17(const char *VAR_10, int VAR_11,
    const char *VAR_12, const char *VAR_13, int VAR_14)
{
 char VAR_15[300];
 struct stat VAR_16;
 ssize_t VAR_17;
 int VAR_18;

 (void)VAR_14;
 FUNC_5(VAR_10, VAR_11);
 VAR_18 = FUNC_9(VAR_12, &VAR_16);
 if (VAR_18 != 0) {
  FUNC_7(VAR_10, VAR_11,
      "Symlink should exist: %s", VAR_12);
  FUNC_6(((void*)0));
  return (0);
 }
 if (!FUNC_4(VAR_16.st_mode))
  return (0);
 if (VAR_13 == ((void*)0))
  return (1);
 VAR_17 = FUNC_13(VAR_12, VAR_15, sizeof(VAR_15));
 if (VAR_17 < 0) {
  FUNC_7(VAR_10, VAR_11, "Can't read symlink %s", VAR_12);
  FUNC_6(((void*)0));
  return (0);
 }
 VAR_15[VAR_17] = '\0';
 if (FUNC_14(VAR_15, VAR_13) != 0)
  return (0);
 return (1);

}
