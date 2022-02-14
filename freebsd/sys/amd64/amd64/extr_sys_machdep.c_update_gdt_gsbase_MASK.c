
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct user_segment_descriptor {int sd_lobase; int sd_hibase; } ;
struct thread {int td_pcb; } ;


 int VAR_0 ;
 struct user_segment_descriptor* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct thread* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct thread *VAR_3, uint32_t VAR_4)
{
 struct user_segment_descriptor *VAR_5;

 if (VAR_3 != VAR_1)
  return;
 FUNC_3(VAR_3->td_pcb, VAR_0);
 FUNC_1();
 VAR_5 = FUNC_0(VAR_2);
 VAR_5->sd_lobase = VAR_4 & 0xffffff;
 VAR_5->sd_hibase = (VAR_4 >> 24) & 0xff;
 FUNC_2();
}
