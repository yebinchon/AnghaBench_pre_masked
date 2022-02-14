
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct vm86frame {int vmf_sp; int vmf_ss; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static __inline void
FUNC_2(u_short VAR_0, struct vm86frame *VAR_1)
{
 VAR_1->vmf_sp -= 2;
 FUNC_1(FUNC_0(VAR_1->vmf_ss, VAR_1->vmf_sp), VAR_0);
}
