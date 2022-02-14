
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tomoyo_path_info {char const* name; } ;
struct tomoyo_domain_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tomoyo_domain_info*,struct tomoyo_path_info*,int const,char*,int const) ;
 int FUNC_1 (struct tomoyo_domain_info*,int ) ;
 int FUNC_2 (struct tomoyo_path_info*) ;

int FUNC_3(struct tomoyo_domain_info *VAR_1,
      const char *VAR_2, const u8 VAR_3)
{
 struct tomoyo_path_info VAR_4;
 const u8 VAR_5 = FUNC_1(VAR_1, VAR_0);

 if (!VAR_5)
  return 0;
 VAR_4.name = VAR_2;
 FUNC_2(&VAR_4);
 return FUNC_0(VAR_1, &VAR_4, VAR_3, "sysctl", VAR_5);
}
