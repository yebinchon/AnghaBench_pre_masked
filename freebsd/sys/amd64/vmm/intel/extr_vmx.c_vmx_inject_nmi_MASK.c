
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmx {int vm; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct vmx *VAR_6, int VAR_7)
{
 uint32_t VAR_8, VAR_9;

 VAR_8 = FUNC_3(VAR_3);
 FUNC_0((VAR_8 & VAR_1) == 0, ("vmx_inject_nmi: invalid guest "
     "interruptibility-state %#x", VAR_8));

 VAR_9 = FUNC_3(VAR_2);
 FUNC_0((VAR_9 & VAR_5) == 0, ("vmx_inject_nmi: invalid "
     "VM-entry interruption information %#x", VAR_9));





 VAR_9 = VAR_0 | VAR_4 | VAR_5;
 FUNC_4(VAR_2, VAR_9);

 FUNC_1(VAR_6->vm, VAR_7, "Injecting vNMI");


 FUNC_2(VAR_6->vm, VAR_7);
}
