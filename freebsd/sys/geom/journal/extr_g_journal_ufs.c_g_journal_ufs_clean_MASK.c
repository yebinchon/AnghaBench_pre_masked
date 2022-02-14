
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufsmount {struct fs* um_fs; } ;
struct mount {int dummy; } ;
struct fs {int fs_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ufsmount* FUNC_0 (struct mount*) ;
 int FUNC_1 (struct ufsmount*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct mount *VAR_3)
{
 struct ufsmount *VAR_4;
 struct fs *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = VAR_4->um_fs;

 VAR_6 = VAR_5->fs_flags;
 VAR_5->fs_flags &= ~(VAR_1 | VAR_0);
 FUNC_1(VAR_4, VAR_2, 1);
 VAR_5->fs_flags = VAR_6;

 return (0);
}
