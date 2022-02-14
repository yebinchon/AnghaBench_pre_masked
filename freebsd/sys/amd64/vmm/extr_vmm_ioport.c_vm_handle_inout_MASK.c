
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bytes; int port; scalar_t__ rep; scalar_t__ string; } ;
struct TYPE_4__ {TYPE_1__ inout; } ;
struct vm_exit {TYPE_2__ u; } ;
struct vm {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vm*,int,char*,char*,int ,int ,char*) ;
 int FUNC_2 (struct vm*,int,struct vm_exit*,int*) ;
 int FUNC_3 (struct vm*,int,struct vm_exit*,int*) ;
 int FUNC_4 (struct vm_exit*) ;

int
FUNC_5(struct vm *VAR_0, int VAR_1, struct vm_exit *VAR_2, bool *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = VAR_2->u.inout.bytes;
 FUNC_0(VAR_4 == 1 || VAR_4 == 2 || VAR_4 == 4,
     ("vm_handle_inout: invalid operand size %d", VAR_4));

 if (VAR_2->u.inout.string)
  VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_1(VAR_0, VAR_1, "%s%s 0x%04x: %s",
     VAR_2->u.inout.rep ? "rep " : "",
     FUNC_4(VAR_2),
     VAR_2->u.inout.port,
     VAR_5 ? "error" : (*VAR_3 ? "userspace" : "handled"));

 return (VAR_5);
}
