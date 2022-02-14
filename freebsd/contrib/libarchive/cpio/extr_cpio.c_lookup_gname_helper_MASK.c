
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {char* gr_name; } ;
struct cpio {int dummy; } ;
typedef int int64_t ;
typedef scalar_t__ id_t ;
typedef int gid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 struct group* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,char*,int ) ;

__attribute__((used)) static int
FUNC_3(struct cpio *VAR_2, const char **VAR_3, id_t VAR_4)
{
 struct group *VAR_5;

 (void)VAR_2;

 VAR_1 = 0;
 VAR_5 = FUNC_1((gid_t)VAR_4);
 if (VAR_5 == ((void*)0)) {
  if (VAR_1 && VAR_1 != VAR_0)
   FUNC_2(VAR_1, "getgrgid(%s) failed",
       FUNC_0((int64_t)VAR_4));
  return 1;
 }

 *VAR_3 = VAR_5->gr_name;
 return 0;
}
