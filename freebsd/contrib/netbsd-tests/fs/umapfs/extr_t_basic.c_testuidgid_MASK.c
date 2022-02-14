
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct stat {scalar_t__ st_uid; scalar_t__ st_gid; } ;
typedef scalar_t__ gid_t ;


 int FUNC_0 (char*,char const*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*,struct stat*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0, uid_t VAR_1, gid_t VAR_2)
{
 struct stat VAR_3;

 if (FUNC_2(VAR_0, &VAR_3) == -1)
  FUNC_1("stat %s", VAR_0);
 if (VAR_1 != (uid_t)-1) {
  if (VAR_3.st_uid != VAR_1)
   FUNC_0("%s: expected uid %d, got %d",
       VAR_0, VAR_1, VAR_3.st_uid);
 }
 if (VAR_2 != (gid_t)-1) {
  if (VAR_3.st_gid != VAR_2)
   FUNC_0("%s: expected gid %d, got %d",
       VAR_0, VAR_2, VAR_3.st_gid);
 }
}
