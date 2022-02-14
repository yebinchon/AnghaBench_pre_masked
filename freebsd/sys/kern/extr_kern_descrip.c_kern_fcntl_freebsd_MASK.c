
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct flock {int l_whence; int l_type; int l_pid; int l_len; int l_start; int l_sysid; } ;
struct __oflock {int l_whence; int l_type; int l_pid; int l_len; int l_start; int l_sysid; } ;
typedef int ofl ;
typedef int fl ;
 int FUNC_0 (void*,struct flock*,int) ;
 int FUNC_1 (struct flock*,void*,int) ;
 int FUNC_2 (struct thread*,int,int,intptr_t) ;

int
FUNC_3(struct thread *VAR_0, int VAR_1, int VAR_2, long VAR_3)
{
 struct flock VAR_4;
 struct __oflock VAR_5;
 intptr_t VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = 0;
 VAR_8 = VAR_2;
 switch (VAR_2) {
 case 133:
 case 132:
 case 131:



  VAR_7 = FUNC_0((void *)(intptr_t)VAR_3, &VAR_5, sizeof(VAR_5));
  VAR_4.l_start = VAR_5.l_start;
  VAR_4.l_len = VAR_5.l_len;
  VAR_4.l_pid = VAR_5.l_pid;
  VAR_4.l_type = VAR_5.l_type;
  VAR_4.l_whence = VAR_5.l_whence;
  VAR_4.l_sysid = 0;

  switch (VAR_2) {
  case 133:
   VAR_8 = 134;
   break;
  case 132:
   VAR_8 = 130;
   break;
  case 131:
   VAR_8 = 129;
   break;
  }
  VAR_6 = (intptr_t)&VAR_4;
  break;
 case 134:
 case 130:
 case 129:
 case 128:
  VAR_7 = FUNC_0((void *)(intptr_t)VAR_3, &VAR_4, sizeof(VAR_4));
  VAR_6 = (intptr_t)&VAR_4;
  break;
 default:
  VAR_6 = VAR_3;
  break;
 }
 if (VAR_7)
  return (VAR_7);
 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_8, VAR_6);
 if (VAR_7)
  return (VAR_7);
 if (VAR_2 == 133) {
  VAR_5.l_start = VAR_4.l_start;
  VAR_5.l_len = VAR_4.l_len;
  VAR_5.l_pid = VAR_4.l_pid;
  VAR_5.l_type = VAR_4.l_type;
  VAR_5.l_whence = VAR_4.l_whence;
  VAR_7 = FUNC_1(&VAR_5, (void *)(intptr_t)VAR_3, sizeof(VAR_5));
 } else if (VAR_2 == 134) {
  VAR_7 = FUNC_1(&VAR_4, (void *)(intptr_t)VAR_3, sizeof(VAR_4));
 }
 return (VAR_7);
}
