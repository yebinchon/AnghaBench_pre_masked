
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_owner {scalar_t__ lo_pid; scalar_t__ lo_sysid; scalar_t__ lo_id; } ;
struct flock {scalar_t__ l_pid; scalar_t__ l_sysid; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct lock_owner *VAR_1, caddr_t VAR_2, struct flock *VAR_3,
    int VAR_4)
{
 if (VAR_4 & VAR_0) {
  return VAR_1->lo_pid == VAR_3->l_pid
   && VAR_1->lo_sysid == VAR_3->l_sysid;
 } else {
  return VAR_1->lo_id == VAR_2;
 }
}
