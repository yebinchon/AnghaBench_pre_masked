
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (struct ring_buffer*,unsigned long,int ,int,struct pt_regs*) ;
 int FUNC_1 (struct ring_buffer*,unsigned long,int) ;
 int FUNC_2 (struct ring_buffer*,struct ring_buffer_event*) ;

void FUNC_3(struct ring_buffer *VAR_0,
         struct ring_buffer_event *VAR_1,
         unsigned long VAR_2, int VAR_3,
         struct pt_regs *VAR_4)
{
 FUNC_2(VAR_0, VAR_1);

 FUNC_0(VAR_0, VAR_2, 0, VAR_3, VAR_4);
 FUNC_1(VAR_0, VAR_2, VAR_3);
}
