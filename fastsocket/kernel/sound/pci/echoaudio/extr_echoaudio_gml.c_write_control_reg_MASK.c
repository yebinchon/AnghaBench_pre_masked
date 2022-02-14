
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {TYPE_1__* comm_page; scalar_t__ digital_in_automute; } ;
struct TYPE_2__ {int control_register; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_4 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_3, u32 VAR_4, char VAR_5)
{

 if (VAR_3->digital_in_automute)
  VAR_4 |= VAR_2;
 else
  VAR_4 &= ~VAR_2;

 FUNC_0(("write_control_reg: 0x%x\n", VAR_4));


 VAR_4 = FUNC_2(VAR_4);
 if (VAR_4 != VAR_3->comm_page->control_register || VAR_5) {
  if (FUNC_4(VAR_3))
   return -VAR_1;
  VAR_3->comm_page->control_register = VAR_4;
  FUNC_1(VAR_3);
  return FUNC_3(VAR_3, VAR_0);
 }
 return 0;
}
