
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int target_sd; } ;
struct sysfs_dirent {int s_count; int s_ino; TYPE_2__* s_iattr; TYPE_2__* s_name; TYPE_1__ s_symlink; struct sysfs_dirent* s_parent; } ;
struct TYPE_4__ {int ia_secdata_len; scalar_t__ ia_secdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,struct sysfs_dirent*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sysfs_dirent*) ;

void FUNC_7(struct sysfs_dirent * VAR_3)
{
 struct sysfs_dirent *VAR_4;

 repeat:



 VAR_4 = VAR_3->s_parent;

 if (FUNC_6(VAR_3) == VAR_1)
  FUNC_5(VAR_3->s_symlink.target_sd);
 if (FUNC_6(VAR_3) & VAR_0)
  FUNC_1(VAR_3->s_name);
 if (VAR_3->s_iattr && VAR_3->s_iattr->ia_secdata)
  FUNC_3(VAR_3->s_iattr->ia_secdata,
     VAR_3->s_iattr->ia_secdata_len);
 FUNC_1(VAR_3->s_iattr);
 FUNC_4(VAR_3->s_ino);
 FUNC_2(VAR_2, VAR_3);

 VAR_3 = VAR_4;
 if (VAR_3 && FUNC_0(&VAR_3->s_count))
  goto repeat;
}
