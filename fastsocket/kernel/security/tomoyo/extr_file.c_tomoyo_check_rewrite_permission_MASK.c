
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tomoyo_path_info {int dummy; } ;
struct tomoyo_domain_info {int dummy; } ;
struct TYPE_2__ {int mnt; } ;
struct file {TYPE_1__ f_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tomoyo_domain_info*,int ) ;
 int FUNC_1 (struct tomoyo_domain_info*,int ,struct tomoyo_path_info*,int const) ;
 int FUNC_2 (struct tomoyo_path_info*) ;
 struct tomoyo_path_info* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct tomoyo_path_info*) ;

int FUNC_5(struct tomoyo_domain_info *VAR_3,
        struct file *VAR_4)
{
 int VAR_5 = -VAR_0;
 const u8 VAR_6 = FUNC_0(VAR_3, VAR_1);
 const bool VAR_7 = (VAR_6 == 3);
 struct tomoyo_path_info *VAR_8;

 if (!VAR_6 || !VAR_4->f_path.mnt)
  return 0;
 VAR_8 = FUNC_3(&VAR_4->f_path);
 if (!VAR_8)
  goto out;
 if (!FUNC_4(VAR_8)) {
  VAR_5 = 0;
  goto out;
 }
 VAR_5 = FUNC_1(VAR_3,
           VAR_2,
           VAR_8, VAR_6);
 out:
 FUNC_2(VAR_8);
 if (!VAR_7)
  VAR_5 = 0;
 return VAR_5;
}
