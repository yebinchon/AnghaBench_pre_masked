
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct trapframe {int tf_esr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct trapframe*) ;
 int FUNC_3 (char*,int ) ;

void
FUNC_4(struct trapframe *VAR_1)
{
 uint64_t VAR_2, VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 VAR_2 = VAR_1->tf_esr;

 FUNC_2(VAR_1);
 FUNC_3(" far: %16lx\n", VAR_3);
 FUNC_3(" esr:         %.8lx\n", VAR_2);
 FUNC_1("Unhandled System Error");
}
