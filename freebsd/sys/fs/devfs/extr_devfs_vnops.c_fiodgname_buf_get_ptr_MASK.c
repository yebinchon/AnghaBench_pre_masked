
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct fiodgname_arg32 {int buf; } ;
struct fiodgname_arg {void* buf; } ;




 int FUNC_0 (char*,int) ;

void *
FUNC_1(void *VAR_0, u_long VAR_1)
{
 union {
  struct fiodgname_arg fgn;



 } *VAR_2;

 VAR_2 = VAR_0;
 switch (VAR_1) {
 case 129:
  return (VAR_2->fgn.buf);




 default:
  FUNC_0("Unhandled ioctl command %ld", VAR_1);
 }
}
