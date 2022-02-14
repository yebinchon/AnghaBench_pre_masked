
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cloudabi_sys_file_advise_args {int advice; int len; int offset; int fd; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int) ;

int
FUNC_1(struct thread *VAR_7,
    struct cloudabi_sys_file_advise_args *VAR_8)
{
 int VAR_9;

 switch (VAR_8->advice) {
 case 133:
  VAR_9 = VAR_1;
  break;
 case 132:
  VAR_9 = VAR_2;
  break;
 case 131:
  VAR_9 = VAR_3;
  break;
 case 130:
  VAR_9 = VAR_4;
  break;
 case 129:
  VAR_9 = VAR_5;
  break;
 case 128:
  VAR_9 = VAR_6;
  break;
 default:
  return (VAR_0);
 }

 return (FUNC_0(VAR_7, VAR_8->fd, VAR_8->offset, VAR_8->len, VAR_9));
}
