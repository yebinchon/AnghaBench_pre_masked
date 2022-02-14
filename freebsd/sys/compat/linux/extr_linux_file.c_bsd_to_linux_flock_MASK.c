
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l_flock {scalar_t__ l_pid; void* l_len; void* l_start; int l_whence; int l_type; } ;
struct flock {int l_type; scalar_t__ l_pid; scalar_t__ l_len; scalar_t__ l_start; int l_whence; } ;
typedef scalar_t__ l_pid_t ;
typedef void* l_off_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct flock *VAR_3, struct l_flock *VAR_4)
{
 switch (VAR_3->l_type) {
 case 130:
  VAR_4->l_type = VAR_0;
  break;
 case 128:
  VAR_4->l_type = VAR_2;
  break;
 case 129:
  VAR_4->l_type = VAR_1;
  break;
 }
 VAR_4->l_whence = VAR_3->l_whence;
 VAR_4->l_start = (l_off_t)VAR_3->l_start;
 VAR_4->l_len = (l_off_t)VAR_3->l_len;
 VAR_4->l_pid = (l_pid_t)VAR_3->l_pid;
}
