
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lockf_entry {scalar_t__ lf_start; scalar_t__ lf_end; TYPE_1__* lf_owner; int lf_type; } ;
struct lockf {int dummy; } ;
struct flock {scalar_t__ l_start; scalar_t__ l_len; int l_type; int l_sysid; int l_pid; int l_whence; } ;
struct TYPE_2__ {int lo_sysid; int lo_pid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct lockf_entry* FUNC_0 (struct lockf*,struct lockf_entry*) ;
 int FUNC_1 (char*,struct lockf_entry*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct lockf *VAR_4, struct lockf_entry *VAR_5, struct flock *VAR_6)
{
 struct lockf_entry *VAR_7;






 if ((VAR_7 = FUNC_0(VAR_4, VAR_5))) {
  VAR_6->l_type = VAR_7->lf_type;
  VAR_6->l_whence = VAR_2;
  VAR_6->l_start = VAR_7->lf_start;
  if (VAR_7->lf_end == VAR_1)
   VAR_6->l_len = 0;
  else
   VAR_6->l_len = VAR_7->lf_end - VAR_7->lf_start + 1;
  VAR_6->l_pid = VAR_7->lf_owner->lo_pid;
  VAR_6->l_sysid = VAR_7->lf_owner->lo_sysid;
 } else {
  VAR_6->l_type = VAR_0;
 }
 return (0);
}
