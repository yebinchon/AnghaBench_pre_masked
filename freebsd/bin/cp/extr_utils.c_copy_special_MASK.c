
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_rdev; int st_mode; } ;
struct TYPE_2__ {char* p_path; } ;


 scalar_t__ FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct stat*,int) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,char*) ;

int
FUNC_5(struct stat *VAR_4, int VAR_5)
{

 if (VAR_5 && VAR_0) {
  if (VAR_3)
   FUNC_1("%s not overwritten\n", VAR_2.p_path);
  return (1);
 }
 if (VAR_5 && FUNC_3(VAR_2.p_path)) {
  FUNC_4("unlink: %s", VAR_2.p_path);
  return (1);
 }
 if (FUNC_0(VAR_2.p_path, VAR_4->st_mode, VAR_4->st_rdev)) {
  FUNC_4("mknod: %s", VAR_2.p_path);
  return (1);
 }
 return (VAR_1 ? FUNC_2(VAR_4, -1) : 0);
}
