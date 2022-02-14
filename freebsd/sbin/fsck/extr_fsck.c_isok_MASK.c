
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fstab {scalar_t__ fs_passno; char* fs_spec; int fs_file; int fs_vfstype; int * fs_mntops; int fs_type; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,char*,int ,char*,int *) ;
 int VAR_3 ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_8(struct fstab *VAR_4)
{
 int VAR_5;

 if (VAR_4->fs_passno == 0)
  return (0);
 if (FUNC_0(VAR_4->fs_type))
  return (0);
 if (!FUNC_4(VAR_4->fs_vfstype))
  return (0);
 if (VAR_3 & VAR_1) {
  if (!FUNC_5(VAR_4->fs_type, VAR_2))
   return (0);
  if (FUNC_2(VAR_4->fs_spec) == ((void*)0))
   return (0);
  if (FUNC_1(VAR_4->fs_vfstype, VAR_4->fs_spec, VAR_4->fs_file, "-F", 0))
   return (0);
  return (1);
 }
 if ((VAR_3 & VAR_0) == 0 || !FUNC_5(VAR_4->fs_type, VAR_2))
  return (1);
 for (VAR_5 = FUNC_6(VAR_4->fs_mntops) - 6; VAR_5 >= 0; VAR_5--)
  if (!FUNC_7(&VAR_4->fs_mntops[VAR_5], "noauto", 6))
   break;
 if (VAR_5 >= 0)
  return (1);
 if (FUNC_1(VAR_4->fs_vfstype, VAR_4->fs_spec, VAR_4->fs_file, "-F", ((void*)0)) != 0)
  return (1);
 FUNC_3("%s: DEFER FOR BACKGROUND CHECKING\n", VAR_4->fs_spec);
 return (0);
}
