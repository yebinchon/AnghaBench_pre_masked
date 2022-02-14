
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcb_segment {int dummy; } ;
struct vmcb_state {struct vmcb_segment tr; struct vmcb_segment ldt; struct vmcb_segment idt; struct vmcb_segment gdt; struct vmcb_segment ss; struct vmcb_segment gs; struct vmcb_segment fs; struct vmcb_segment es; struct vmcb_segment ds; struct vmcb_segment cs; } ;
struct vmcb {struct vmcb_state state; } ;
__attribute__((used)) static struct vmcb_segment *
FUNC_0(struct vmcb *VAR_0, int VAR_1)
{
 struct vmcb_state *VAR_2;
 struct vmcb_segment *VAR_3;

 VAR_2 = &VAR_0->state;

 switch (VAR_1) {
 case 137:
  VAR_3 = &VAR_2->cs;
  break;

 case 136:
  VAR_3 = &VAR_2->ds;
  break;

 case 135:
  VAR_3 = &VAR_2->es;
  break;

 case 134:
  VAR_3 = &VAR_2->fs;
  break;

 case 132:
  VAR_3 = &VAR_2->gs;
  break;

 case 129:
  VAR_3 = &VAR_2->ss;
  break;

 case 133:
  VAR_3 = &VAR_2->gdt;
  break;

 case 131:
  VAR_3 = &VAR_2->idt;
  break;

 case 130:
  VAR_3 = &VAR_2->ldt;
  break;

 case 128:
  VAR_3 = &VAR_2->tr;
  break;

 default:
  VAR_3 = ((void*)0);
  break;
 }

 return (VAR_3);
}
