
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct ubifs_info*,int,int) ;
 int FUNC_1 (struct ubifs_info*,union ubifs_key*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct ubifs_info *VAR_0, union ubifs_key *VAR_1,
         int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_5 == 0)
  if (FUNC_0(VAR_0, VAR_3, VAR_4))
   return 1;
 return VAR_5;
}
