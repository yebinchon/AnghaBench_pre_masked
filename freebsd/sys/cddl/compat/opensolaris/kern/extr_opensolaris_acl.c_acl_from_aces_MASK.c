
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct acl_entry {scalar_t__ ae_tag; int ae_entry_type; void* ae_flags; void* ae_perm; int ae_id; } ;
struct acl {int acl_maxcnt; int acl_cnt; struct acl_entry* acl_entry; } ;
struct TYPE_3__ {int a_flags; int a_access_mask; int a_type; int a_who; } ;
typedef TYPE_1__ ace_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (struct acl*,int) ;
 int VAR_16 ;
 int FUNC_2 (char*,int) ;
 int VAR_17 ;
 int FUNC_3 (char*) ;

int
FUNC_4(struct acl *VAR_18, const ace_t *VAR_19, int VAR_20)
{
 int VAR_21;
 struct acl_entry *VAR_22;
 const ace_t *VAR_23;

 if (VAR_20 < 1) {
  FUNC_3("acl_from_aces: empty ZFS ACL; returning EINVAL.\n");
  return (VAR_15);
 }

 if (VAR_20 > VAR_11) {




  FUNC_3("acl_from_aces: ZFS ACL too big to fit "
      "into 'struct acl'; returning EINVAL.\n");
  return (VAR_15);
 }

 FUNC_1(VAR_18, sizeof(*VAR_18));
 VAR_18->acl_maxcnt = VAR_11;
 VAR_18->acl_cnt = VAR_20;

 for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
  VAR_22 = &(VAR_18->acl_entry[VAR_21]);
  VAR_23 = &(VAR_19[VAR_21]);

  if (VAR_23->a_flags & VAR_3)
   VAR_22->ae_tag = VAR_14;
  else if (VAR_23->a_flags & VAR_1)
   VAR_22->ae_tag = VAR_10;
  else if (VAR_23->a_flags & VAR_0)
   VAR_22->ae_tag = VAR_8;
  else if (VAR_23->a_flags & VAR_2)
   VAR_22->ae_tag = VAR_9;
  else
   VAR_22->ae_tag = VAR_13;

  if (VAR_22->ae_tag == VAR_13 || VAR_22->ae_tag == VAR_9)
   VAR_22->ae_id = VAR_23->a_who;
  else
   VAR_22->ae_id = VAR_12;

  VAR_22->ae_perm = FUNC_0(VAR_23->a_access_mask, VAR_17);
  VAR_22->ae_flags = FUNC_0(VAR_23->a_flags, VAR_16);

  switch (VAR_23->a_type) {
  case 131:
   VAR_22->ae_entry_type = VAR_5;
   break;
  case 130:
   VAR_22->ae_entry_type = VAR_7;
   break;
  case 128:
   VAR_22->ae_entry_type = VAR_6;
   break;
  case 129:
   VAR_22->ae_entry_type = VAR_4;
   break;
  default:
   FUNC_2("acl_from_aces: a_type is 0x%x", VAR_23->a_type);
  }
 }

 return (0);
}
