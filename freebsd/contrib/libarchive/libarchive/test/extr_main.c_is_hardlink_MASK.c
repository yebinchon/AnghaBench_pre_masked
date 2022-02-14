
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {scalar_t__ st_ino; scalar_t__ st_dev; } ;
struct TYPE_3__ {scalar_t__ dwVolumeSerialNumber; scalar_t__ nFileIndexHigh; scalar_t__ nFileIndexLow; } ;
typedef TYPE_1__ BY_HANDLE_FILE_INFORMATION ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int,char*,char const*) ;
 int FUNC_3 (char const*,struct stat*) ;
 int FUNC_4 (char const*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_0, int VAR_1,
    const char *VAR_2, const char *VAR_3)
{
 struct stat VAR_4, VAR_5;
 int VAR_6;

 FUNC_0(VAR_0, VAR_1);
 VAR_6 = FUNC_3(VAR_2, &VAR_4);
 if (VAR_6 != 0) {
  FUNC_2(VAR_0, VAR_1, "File should exist: %s", VAR_2);
  FUNC_1(((void*)0));
  return (0);
 }
 VAR_6 = FUNC_3(VAR_3, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_2(VAR_0, VAR_1, "File should exist: %s", VAR_3);
  FUNC_1(((void*)0));
  return (0);
 }
 return (VAR_4 == VAR_5 && VAR_4 == VAR_5);

}
