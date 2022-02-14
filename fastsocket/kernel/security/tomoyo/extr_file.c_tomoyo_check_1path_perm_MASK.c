
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tomoyo_path_info {scalar_t__ name; int is_dir; } ;
struct tomoyo_domain_info {int dummy; } ;
struct path {int mnt; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct tomoyo_domain_info*,int ) ;
 int FUNC_2 (struct tomoyo_domain_info*,int const,struct tomoyo_path_info*,int const) ;
 int FUNC_3 (struct tomoyo_path_info*) ;
 int FUNC_4 (struct tomoyo_path_info*) ;
 struct tomoyo_path_info* FUNC_5 (struct path*) ;

int FUNC_6(struct tomoyo_domain_info *VAR_2,
       const u8 VAR_3, struct path *VAR_4)
{
 int VAR_5 = -VAR_0;
 struct tomoyo_path_info *VAR_6;
 const u8 VAR_7 = FUNC_1(VAR_2, VAR_1);
 const bool VAR_8 = (VAR_7 == 3);

 if (!VAR_7 || !VAR_4->mnt)
  return 0;
 VAR_6 = FUNC_5(VAR_4);
 if (!VAR_6)
  goto out;
 switch (VAR_3) {
 case 129:
 case 128:
  if (!VAR_6->is_dir) {



   FUNC_0((char *) VAR_6->name, "/");
   FUNC_3(VAR_6);
  }
 }
 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_6,
           VAR_7);
 out:
 FUNC_4(VAR_6);
 if (!VAR_8)
  VAR_5 = 0;
 return VAR_5;
}
