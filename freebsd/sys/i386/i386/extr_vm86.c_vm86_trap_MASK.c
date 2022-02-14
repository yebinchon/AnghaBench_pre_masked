
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct vm86frame {int vmf_eflags; int vmf_trapno; int vmf_ip; int vmf_cs; } ;
typedef scalar_t__ caddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_2(struct vm86frame *VAR_5)
{
 void (*VAR_6)(struct vm86frame *);
 caddr_t VAR_7;


 if ((VAR_5->vmf_eflags & VAR_2) == 0)
  FUNC_1("vm86_trap called, but not in vm86 mode");

 VAR_7 = FUNC_0(VAR_5->vmf_cs, VAR_5->vmf_ip);
 if (*(u_char *)VAR_7 == VAR_0)
  VAR_5->vmf_trapno = VAR_5->vmf_eflags & VAR_1;
 else
  VAR_5->vmf_trapno = VAR_5->vmf_trapno << 16;

 VAR_6 = (void (*)(struct vm86frame *))((uintptr_t)VAR_4 +
     VAR_3);
 VAR_6(VAR_5);
}
