
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct key {scalar_t__ uid; int perm; int gid; TYPE_1__* user; } ;
struct cred {scalar_t__ fsuid; int fsgid; int group_info; TYPE_2__* user; } ;
typedef int key_ref_t ;
typedef int key_perm_t ;
struct TYPE_4__ {scalar_t__ user_ns; } ;
struct TYPE_3__ {scalar_t__ user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int const) ;
 struct key* FUNC_2 (int const) ;
 int FUNC_3 (int const,struct cred const*,int) ;

int FUNC_4(const key_ref_t VAR_3, const struct cred *VAR_4,
   key_perm_t VAR_5)
{
 struct key *VAR_6;
 key_perm_t VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_3);

 if (VAR_6->user->user_ns != VAR_4->user->user_ns)
  goto use_other_perms;


 if (VAR_6->uid == VAR_4->fsuid) {
  VAR_7 = VAR_6->perm >> 16;
  goto use_these_perms;
 }



 if (VAR_6->gid != -1 && VAR_6->perm & VAR_2) {
  if (VAR_6->gid == VAR_4->fsgid) {
   VAR_7 = VAR_6->perm >> 8;
   goto use_these_perms;
  }

  VAR_8 = FUNC_0(VAR_4->group_info, VAR_6->gid);
  if (VAR_8) {
   VAR_7 = VAR_6->perm >> 8;
   goto use_these_perms;
  }
 }

use_other_perms:


 VAR_7 = VAR_6->perm;

use_these_perms:




 if (FUNC_1(VAR_3))
  VAR_7 |= VAR_6->perm >> 24;

 VAR_7 = VAR_7 & VAR_5 & VAR_1;

 if (VAR_7 != VAR_5)
  return -VAR_0;


 return FUNC_3(VAR_3, VAR_4, VAR_5);
}
