
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tomoyo_path_info {int dummy; } ;
struct tomoyo_domain_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tomoyo_domain_info*,struct tomoyo_path_info const*,int,char*,int const) ;
 int FUNC_1 (struct tomoyo_domain_info*,int ) ;

int FUNC_2(struct tomoyo_domain_info *VAR_1,
      const struct tomoyo_path_info *VAR_2)
{
 const u8 VAR_3 = FUNC_1(VAR_1, VAR_0);

 if (!VAR_3)
  return 0;
 return FUNC_0(VAR_1, VAR_2, 1, "do_execve", VAR_3);
}
