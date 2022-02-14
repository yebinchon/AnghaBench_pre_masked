
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_page_t ;
typedef unsigned int const uintmax_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct TYPE_3__ {scalar_t__ sf_sp; } ;
struct pcb {TYPE_1__ pcb_regs; } ;
struct TYPE_4__ {scalar_t__ td_kstack; struct pcb* td_pcb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,struct pcb*) ;
 int FUNC_10 (char*,unsigned int const,unsigned int const) ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 () ;

__attribute__((used)) static void
FUNC_16(void *VAR_12)
{
 struct pcb *VAR_13 = VAR_11;
 const unsigned int VAR_14 = 1024 * 1024;

 vm_page_t VAR_15;


 FUNC_6();

 FUNC_13(&VAR_9);




 FUNC_10("real memory  = %ju (%ju MB)\n",
     (uintmax_t)FUNC_1(VAR_10),
     (uintmax_t)FUNC_1(VAR_10) / VAR_14);
 FUNC_10("avail memory = %ju (%ju MB)\n",
     (uintmax_t)FUNC_1(FUNC_12()),
     (uintmax_t)FUNC_1(FUNC_12()) / VAR_14);
 if (VAR_7) {
  FUNC_3();
  FUNC_5();
 }

 FUNC_4();
 FUNC_15();
 VAR_13->pcb_regs.sf_sp = (u_int)VAR_11 +
     VAR_3;
 FUNC_9(VAR_8, VAR_13);

 FUNC_11(VAR_6);
 FUNC_8();




 VAR_15 = FUNC_14(((void*)0), 0, VAR_4 | VAR_5);
 FUNC_7(VAR_2, FUNC_0(VAR_15));

 *(uint32_t *)VAR_1 = 0;
 *(uint32_t *)VAR_0 = 0xffffffff;

}
