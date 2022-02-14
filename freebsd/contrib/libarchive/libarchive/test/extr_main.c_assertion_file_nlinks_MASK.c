
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {scalar_t__ st_nlink; } ;
struct TYPE_3__ {scalar_t__ nNumberOfLinks; } ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ BY_HANDLE_FILE_INFORMATION ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int,char*,char const*,scalar_t__,int) ;
 int FUNC_3 (char const*,struct stat*) ;
 int FUNC_4 (char const*,TYPE_1__*) ;

int
FUNC_5(const char *VAR_0, int VAR_1,
    const char *VAR_2, int VAR_3)
{
 struct stat VAR_4;
 int VAR_5;

 FUNC_0(VAR_0, VAR_1);
 VAR_5 = FUNC_3(VAR_2, &VAR_4);
 if (VAR_5 == 0 && (int)VAR_4.st_nlink == VAR_3)
  return (1);
 FUNC_2(VAR_0, VAR_1, "File %s has %d links, expected %d",
     VAR_2, VAR_4.st_nlink, VAR_3);
 FUNC_1(((void*)0));
 return (0);

}
