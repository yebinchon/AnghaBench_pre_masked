
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdosfs_args {int version; int fspec; } ;
typedef int margs ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (struct msdosfs_args*,int ,int) ;
 int FUNC_3 (int ,char const*,int ,struct msdosfs_args*,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2, const char *VAR_3)
{
 struct msdosfs_args VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.fspec = FUNC_0(VAR_2);
 VAR_4.version = VAR_1;

 if (FUNC_3(VAR_0, VAR_3, 0, &VAR_4, sizeof(VAR_4)) == -1)
  FUNC_1(1, "mount msdosfs %s", VAR_3);
}
