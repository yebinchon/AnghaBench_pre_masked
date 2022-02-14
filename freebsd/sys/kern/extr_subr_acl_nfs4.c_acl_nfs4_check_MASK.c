
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl_entry {int ae_tag; int ae_perm; scalar_t__ ae_entry_type; int ae_flags; int ae_id; } ;
struct acl {int acl_cnt; struct acl_entry* acl_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

 int VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;


 int VAR_12 ;

int
FUNC_0(const struct acl *VAR_13, int VAR_14)
{
 int VAR_15;
 const struct acl_entry *VAR_16;
 if (VAR_13->acl_cnt > VAR_9 || VAR_13->acl_cnt <= 0)
  return (VAR_12);

 for (VAR_15 = 0; VAR_15 < VAR_13->acl_cnt; VAR_15++) {
  VAR_16 = &(VAR_13->acl_entry[VAR_15]);

  switch (VAR_16->ae_tag) {
  case 128:
  case 130:
  case 132:
   if (VAR_16->ae_id != VAR_11)
    return (VAR_12);
   break;

  case 129:
  case 131:
   if (VAR_16->ae_id == VAR_11)
    return (VAR_12);
   break;

  default:
   return (VAR_12);
  }

  if ((VAR_16->ae_perm | VAR_10) != VAR_10)
   return (VAR_12);




  if (VAR_16->ae_entry_type != VAR_6 &&
      VAR_16->ae_entry_type != VAR_7)
   return (VAR_12);

  if ((VAR_16->ae_flags | VAR_8) != VAR_8)
   return (VAR_12);


  if (VAR_16->ae_flags & (VAR_5 |
      VAR_1))
   return (VAR_12);


  if (!VAR_14) {
   if (VAR_16->ae_flags & (VAR_2 |
       VAR_0 |
       VAR_4 | VAR_3))
    return (VAR_12);
  }
 }

 return (0);
}
