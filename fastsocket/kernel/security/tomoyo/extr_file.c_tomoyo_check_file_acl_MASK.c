
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tomoyo_path_info {int dummy; } ;
struct tomoyo_domain_info {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct tomoyo_domain_info const*,int ) ;
 int FUNC_2 (struct tomoyo_domain_info const*,struct tomoyo_path_info const*,int,int) ;

__attribute__((used)) static int FUNC_3(const struct tomoyo_domain_info *VAR_5,
     const struct tomoyo_path_info *VAR_6,
     const u8 VAR_7)
{
 u16 VAR_8 = 0;

 if (!FUNC_1(VAR_5, VAR_0))
  return 0;
 if (VAR_7 == 6)
  VAR_8 = 1 << VAR_3;
 else if (VAR_7 == 4)
  VAR_8 = 1 << VAR_2;
 else if (VAR_7 == 2)
  VAR_8 = 1 << VAR_4;
 else if (VAR_7 == 1)
  VAR_8 = 1 << VAR_1;
 else
  FUNC_0();
 return FUNC_2(VAR_5, VAR_6, VAR_8,
          VAR_7 != 1);
}
