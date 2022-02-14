
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong_t ;
typedef int uint_t ;
struct trapframe {int tf_ss; int tf_esp; int tf_eflags; int tf_cs; int tf_eip; int tf_err; int tf_trapno; int tf_eax; int tf_ecx; int tf_ebx; int tf_isp; int tf_ebp; int tf_esi; int tf_edi; int tf_ds; int tf_es; int tf_fs; } ;
struct pcb {int pcb_gs; } ;
typedef int regmap ;
struct TYPE_2__ {struct pcb* td_pcb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;






 int VAR_2 ;
 TYPE_1__* VAR_3 ;

ulong_t
FUNC_1(struct trapframe *VAR_4, uint_t VAR_5)
{
 struct pcb *VAR_6;
 int VAR_7[] = {
  139,
  140,
  141,
  143,
  134,
  131,
  137,
  130,
  136,
  VAR_1,
  135,
  138,
  128,
  142,
  132,
  144,
  133,
  130,
  129
 };

 if (VAR_5 > VAR_2) {
  FUNC_0(VAR_0);
  return (0);
 }

 if (VAR_5 >= sizeof (VAR_7) / sizeof (int)) {
  FUNC_0(VAR_0);
  return (0);
 }

 VAR_5 = VAR_7[VAR_5];

 switch(VAR_5) {
 case 139:
  if ((VAR_6 = VAR_3->td_pcb) == ((void*)0)) {
   FUNC_0(VAR_0);
   return (0);
  }
  return (VAR_6->pcb_gs);
 case 140:
  return (VAR_4->tf_fs);
 case 141:
  return (VAR_4->tf_es);
 case 143:
  return (VAR_4->tf_ds);
 case 134:
  return (VAR_4->tf_edi);
 case 131:
  return (VAR_4->tf_esi);
 case 137:
  return (VAR_4->tf_ebp);
 case 130:
  return (VAR_4->tf_isp);
 case 136:
  return (VAR_4->tf_ebx);
 case 135:
  return (VAR_4->tf_ecx);
 case 138:
  return (VAR_4->tf_eax);
 case 128:
  return (VAR_4->tf_trapno);
 case 142:
  return (VAR_4->tf_err);
 case 132:
  return (VAR_4->tf_eip);
 case 144:
  return (VAR_4->tf_cs);
 case 133:
  return (VAR_4->tf_eflags);




 case 129:
  return (VAR_4->tf_ss);
 default:
  FUNC_0(VAR_0);
  return (0);
 }
}
