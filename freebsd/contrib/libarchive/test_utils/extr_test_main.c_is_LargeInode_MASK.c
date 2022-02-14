
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {scalar_t__ st_ino; } ;
typedef int int64_t ;
struct TYPE_3__ {int nFileIndexHigh; } ;
typedef TYPE_1__ BY_HANDLE_FILE_INFORMATION ;


 int FUNC_0 (char const*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;

int
FUNC_2(const char *VAR_0)
{
 struct stat VAR_1;
 int64_t VAR_2;

 if (FUNC_1(VAR_0, &VAR_1) < 0)
  return (0);
 VAR_2 = (int64_t)VAR_1.st_ino;
 return (VAR_2 > 0xffffffff);

}
