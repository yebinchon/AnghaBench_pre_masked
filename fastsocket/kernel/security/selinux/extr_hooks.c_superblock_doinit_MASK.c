
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* s_type; } ;
struct security_mnt_opts {int dummy; } ;
struct TYPE_2__ {int fs_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct security_mnt_opts*) ;
 int FUNC_2 (struct security_mnt_opts*) ;
 int FUNC_3 (char*,struct security_mnt_opts*) ;
 int FUNC_4 (struct super_block*,struct security_mnt_opts*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_1, void *VAR_2)
{
 int VAR_3 = 0;
 char *VAR_4 = VAR_2;
 struct security_mnt_opts VAR_5;

 FUNC_2(&VAR_5);

 if (!VAR_2)
  goto out;

 FUNC_0(VAR_1->s_type->fs_flags & VAR_0);

 VAR_3 = FUNC_3(VAR_4, &VAR_5);
 if (VAR_3)
  goto out_err;

out:
 VAR_3 = FUNC_4(VAR_1, &VAR_5);

out_err:
 FUNC_1(&VAR_5);
 return VAR_3;
}
