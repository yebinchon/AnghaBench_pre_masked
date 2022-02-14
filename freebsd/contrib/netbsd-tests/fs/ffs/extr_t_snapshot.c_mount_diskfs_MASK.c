
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uargs ;
struct ufs_args {int fspec; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ,char const*,int ,struct ufs_args*,int) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1, const char *VAR_2)
{
 struct ufs_args VAR_3;

 VAR_3.fspec = FUNC_0(VAR_1);

 if (FUNC_2(VAR_0, VAR_2, 0, &VAR_3, sizeof(VAR_3)) == -1)
  FUNC_1("mount ffs %s", VAR_2);
}
