
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct echoaudio {TYPE_1__* comm_page; } ;
struct TYPE_2__ {scalar_t__ control_register; scalar_t__ e3g_frq_register; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct echoaudio*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_4 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_2, u32 VAR_3, u32 VAR_4,
        char VAR_5)
{
 if (FUNC_4(VAR_2))
  return -VAR_1;

 FUNC_0(("WriteControlReg: Setting 0x%x, 0x%x\n", VAR_3, VAR_4));

 VAR_3 = FUNC_2(VAR_3);
 VAR_4 = FUNC_2(VAR_4);

 if (VAR_3 != VAR_2->comm_page->control_register ||
     VAR_4 != VAR_2->comm_page->e3g_frq_register || VAR_5) {
  VAR_2->comm_page->e3g_frq_register = VAR_4;
  VAR_2->comm_page->control_register = VAR_3;
  FUNC_1(VAR_2);
  return FUNC_3(VAR_2, VAR_0);
 }

 FUNC_0(("WriteControlReg: not written, no change\n"));
 return 0;
}
