
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int targs ;
struct tmpfs_args {int ta_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*,int ,struct tmpfs_args*,int) ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct tmpfs_args VAR_2 = { .ta_version = VAR_1, };

 if (FUNC_1("/stor", 0777) == -1)
  FUNC_0("mkdir /stor");
 if (FUNC_2(VAR_0, "/stor", 0, &VAR_2,sizeof(VAR_2)) == -1)
  FUNC_0("mount storage");
}
