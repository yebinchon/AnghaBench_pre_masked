
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct superblock_security_struct {int sid; } ;
struct super_block {struct superblock_security_struct* s_security; } ;
struct cred {int dummy; } ;
struct common_audit_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_1 (struct cred const*) ;

__attribute__((used)) static int FUNC_2(const struct cred *VAR_1,
          struct super_block *VAR_2,
          u32 VAR_3,
          struct common_audit_data *VAR_4)
{
 struct superblock_security_struct *VAR_5;
 u32 VAR_6 = FUNC_1(VAR_1);

 VAR_5 = VAR_2->s_security;
 return FUNC_0(VAR_6, VAR_5->sid, VAR_0, VAR_3, VAR_4);
}
