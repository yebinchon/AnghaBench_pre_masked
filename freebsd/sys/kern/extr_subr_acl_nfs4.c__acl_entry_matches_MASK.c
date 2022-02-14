
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl_entry {scalar_t__ ae_tag; scalar_t__ ae_id; scalar_t__ ae_perm; scalar_t__ ae_entry_type; scalar_t__ ae_flags; } ;
typedef scalar_t__ acl_tag_t ;
typedef scalar_t__ acl_perm_t ;
typedef scalar_t__ acl_entry_type_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct acl_entry *VAR_1, acl_tag_t VAR_2, acl_perm_t VAR_3,
    acl_entry_type_t VAR_4)
{
 if (VAR_1->ae_tag != VAR_2)
  return (0);

 if (VAR_1->ae_id != VAR_0)
  return (0);

 if (VAR_1->ae_perm != VAR_3)
  return (0);

 if (VAR_1->ae_entry_type != VAR_4)
  return (0);

 if (VAR_1->ae_flags != 0)
  return (0);

 return (1);
}
