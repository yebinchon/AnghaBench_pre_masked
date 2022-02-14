
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uid_t ;
struct acl_entry {int ae_tag; void* ae_id; scalar_t__ ae_flags; scalar_t__ ae_entry_type; int ae_perm; } ;
typedef int mode_t ;
typedef void* gid_t ;
typedef int acl_tag_t ;




 void* VAR_0 ;

 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int) ;

struct acl_entry
FUNC_2(acl_tag_t VAR_1, uid_t VAR_2, gid_t VAR_3, mode_t VAR_4)
{
 struct acl_entry VAR_5;

 VAR_5.ae_tag = VAR_1;
 VAR_5.ae_perm = FUNC_0(VAR_1, VAR_4);
 VAR_5.ae_entry_type = 0;
 VAR_5.ae_flags = 0;
 switch(VAR_1) {
 case 128:
  VAR_5.ae_id = VAR_2;
  break;

 case 130:
  VAR_5.ae_id = VAR_3;
  break;

 case 129:
  VAR_5.ae_id = VAR_0;
  break;

 default:
  VAR_5.ae_id = VAR_0;
  FUNC_1("acl_posix1e_mode_to_entry: invalid tag (%d)\n", VAR_1);
 }

 return (VAR_5);
}
