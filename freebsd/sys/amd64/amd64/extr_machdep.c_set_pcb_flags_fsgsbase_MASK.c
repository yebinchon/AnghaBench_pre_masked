
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct pcb {int const pcb_flags; int pcb_gsbase; int pcb_fsbase; } ;
typedef int register_t ;


 int VAR_0 ;
 int const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct pcb* VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct pcb*,int const) ;

__attribute__((used)) static void
FUNC_7(struct pcb *VAR_5, const u_int VAR_6)
{
 register_t VAR_7;

 if (VAR_4 == VAR_5 &&
     (VAR_6 & VAR_1) != 0 &&
     (VAR_5->pcb_flags & VAR_1) == 0) {
  VAR_7 = FUNC_0();
  if ((VAR_5->pcb_flags & VAR_1) == 0) {
   if (FUNC_4() == VAR_2)
    VAR_5->pcb_fsbase = FUNC_2();
   if (FUNC_5() == VAR_3)
    VAR_5->pcb_gsbase = FUNC_3(VAR_0);
  }
  FUNC_6(VAR_5, VAR_6);
  FUNC_1(VAR_7);
 } else {
  FUNC_6(VAR_5, VAR_6);
 }
}
