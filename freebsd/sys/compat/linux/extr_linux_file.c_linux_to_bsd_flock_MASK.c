
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l_flock {int l_type; scalar_t__ l_pid; scalar_t__ l_len; scalar_t__ l_start; int l_whence; } ;
struct flock {int l_type; scalar_t__ l_sysid; scalar_t__ l_pid; void* l_len; void* l_start; int l_whence; } ;
typedef scalar_t__ pid_t ;
typedef void* off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static void
FUNC_0(struct l_flock *VAR_3, struct flock *VAR_4)
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
 default:
  VAR_4->l_type = -1;
  break;
 }
 VAR_4->l_whence = VAR_3->l_whence;
 VAR_4->l_start = (off_t)VAR_3->l_start;
 VAR_4->l_len = (off_t)VAR_3->l_len;
 VAR_4->l_pid = (pid_t)VAR_3->l_pid;
 VAR_4->l_sysid = 0;
}
