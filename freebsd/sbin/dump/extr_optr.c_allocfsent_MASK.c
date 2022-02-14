
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fstab {int fs_freq; int fs_passno; int * fs_spec; int * fs_type; int * fs_file; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

struct fstab *
FUNC_4(const struct fstab *VAR_1)
{
 struct fstab *VAR_2;

 VAR_2 = (struct fstab *)FUNC_0(sizeof (*VAR_1));
 if (VAR_2 == ((void*)0) ||
     (VAR_2->fs_file = FUNC_2(VAR_1->fs_file)) == ((void*)0) ||
     (VAR_2->fs_type = FUNC_2(VAR_1->fs_type)) == ((void*)0) ||
     (VAR_2->fs_spec = FUNC_2(VAR_1->fs_spec)) == ((void*)0))
  FUNC_1("%s\n", FUNC_3(VAR_0));
 VAR_2->fs_passno = VAR_1->fs_passno;
 VAR_2->fs_freq = VAR_1->fs_freq;
 return (VAR_2);
}
