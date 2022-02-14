
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tomoyo_path_info {int dummy; } ;
struct tomoyo_domain_info {int dummy; } ;
struct path {TYPE_2__* dentry; int mnt; } ;
struct TYPE_4__ {TYPE_1__* d_inode; } ;
struct TYPE_3__ {int i_mode; } ;


 int FUNC_0 (int const) ;
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct tomoyo_domain_info*,struct tomoyo_path_info*,int const,char*,int const) ;
 int FUNC_3 (struct tomoyo_domain_info*,int ) ;
 int FUNC_4 (struct tomoyo_domain_info*,int ,struct tomoyo_path_info*,int const) ;
 int FUNC_5 (struct tomoyo_path_info*) ;
 struct tomoyo_path_info* FUNC_6 (struct path*) ;
 scalar_t__ FUNC_7 (struct tomoyo_path_info*) ;

int FUNC_8(struct tomoyo_domain_info *VAR_7,
     struct path *VAR_8, const int VAR_9)
{
 const u8 VAR_10 = FUNC_0(VAR_9);
 int VAR_11 = -VAR_0;
 struct tomoyo_path_info *VAR_12;
 const u8 VAR_13 = FUNC_3(VAR_7, VAR_4);
 const bool VAR_14 = (VAR_13 == 3);

 if (!VAR_13 || !VAR_8->mnt)
  return 0;
 if (VAR_10 == 0)
  return 0;
 if (VAR_8->dentry->d_inode && FUNC_1(VAR_8->dentry->d_inode->i_mode))




  return 0;
 VAR_12 = FUNC_6(VAR_8);
 if (!VAR_12)
  goto out;
 VAR_11 = 0;





 if ((VAR_10 & VAR_1) &&
     ((VAR_9 & VAR_3) || !(VAR_9 & VAR_2)) &&
     (FUNC_7(VAR_12))) {
  VAR_11 = FUNC_4(VAR_7,
           VAR_5,
            VAR_12, VAR_13);
 }
 if (!VAR_11)
  VAR_11 = FUNC_2(VAR_7, VAR_12, VAR_10, "open",
      VAR_13);
 if (!VAR_11 && (VAR_9 & VAR_3))
  VAR_11 = FUNC_4(VAR_7,
           VAR_6,
            VAR_12, VAR_13);
 out:
 FUNC_5(VAR_12);
 if (!VAR_14)
  VAR_11 = 0;
 return VAR_11;
}
