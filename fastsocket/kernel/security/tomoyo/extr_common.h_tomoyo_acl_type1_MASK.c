
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tomoyo_acl_info {int type; } ;


 int VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(struct tomoyo_acl_info *VAR_1)
{
 return VAR_1->type & ~VAR_0;
}
