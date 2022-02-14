
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct vm86frame {int vmf_sp; int vmf_ss; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static __inline u_short
FUNC_2(struct vm86frame *VAR_0)
{
 u_short VAR_1 = FUNC_1(FUNC_0(VAR_0->vmf_ss, VAR_0->vmf_sp));

 VAR_0->vmf_sp += 2;
 return (VAR_1);
}
