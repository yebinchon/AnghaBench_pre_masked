
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info const*,union ubifs_key const*) ;

__attribute__((used)) static inline int FUNC_1(const struct ubifs_info *VAR_2,
         const union ubifs_key *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2, VAR_3);

 return VAR_4 == VAR_0 || VAR_4 == VAR_1;
}
