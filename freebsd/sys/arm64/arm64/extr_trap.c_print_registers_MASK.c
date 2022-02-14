
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct trapframe {int tf_sp; int tf_lr; int tf_elr; int tf_spsr; int * tf_x; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct trapframe *VAR_0)
{
 u_int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->tf_x); VAR_1++) {
  FUNC_1(" %sx%d: %16lx\n", (VAR_1 < 10) ? " " : "", VAR_1,
      VAR_0->tf_x[VAR_1]);
 }
 FUNC_1("  sp: %16lx\n", VAR_0->tf_sp);
 FUNC_1("  lr: %16lx\n", VAR_0->tf_lr);
 FUNC_1(" elr: %16lx\n", VAR_0->tf_elr);
 FUNC_1("spsr:         %8x\n", VAR_0->tf_spsr);
}
