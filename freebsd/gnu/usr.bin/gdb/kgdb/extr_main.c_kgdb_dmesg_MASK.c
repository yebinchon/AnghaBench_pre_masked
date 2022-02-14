
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (scalar_t__,char*,int) ;

void
FUNC_5(void)
{
 CORE_ADDR VAR_1;
 int VAR_2, VAR_3, VAR_4;
 char VAR_5;





 if (VAR_0)
  return;
 VAR_1 = FUNC_1("msgbufp->msg_ptr");
 VAR_2 = (int)FUNC_1("msgbufp->msg_size");
 if (VAR_1 == 0 || VAR_2 == 0)
  return;
 VAR_3 = (int)FUNC_1("msgbufp->msg_rseq");
 VAR_4 = (int)FUNC_1("msgbufp->msg_wseq");
 VAR_3 = FUNC_0(VAR_2, VAR_3);
 VAR_4 = FUNC_0(VAR_2, VAR_4);
 if (VAR_3 == VAR_4)
  return;

 FUNC_2("\nUnread portion of the kernel message buffer:\n");
 while (VAR_3 < VAR_4) {
  FUNC_4(VAR_1 + VAR_3, &VAR_5, 1);
  FUNC_3(VAR_5);
  VAR_3++;
  if (VAR_3 == VAR_2)
   VAR_3 = 0;
 }
 if (VAR_5 != '\n')
  FUNC_3('\n');
 FUNC_3('\n');
}
