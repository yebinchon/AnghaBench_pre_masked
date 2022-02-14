
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct monitor {int m_recvfd; int m_pid; } ;
struct TYPE_2__ {scalar_t__ permit_pty_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct monitor*,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

void
FUNC_5(struct monitor *VAR_14)
{
 FUNC_0(VAR_14->m_recvfd);
 VAR_14->m_recvfd = -1;

 FUNC_3(VAR_14->m_pid);
 FUNC_4(VAR_5, &VAR_13);
 FUNC_4(VAR_7, &VAR_13);
 FUNC_4(VAR_6, &VAR_13);




 VAR_11 = VAR_12;


 FUNC_1(VAR_11, VAR_0, 1);
 FUNC_1(VAR_11, VAR_3, 1);
 FUNC_1(VAR_11, VAR_4, 1);

 if (VAR_10->permit_pty_flag) {
  FUNC_1(VAR_11, VAR_1, 1);
  FUNC_1(VAR_11, VAR_2, 1);
 }

 for (;;)
  FUNC_2(VAR_14, VAR_11, ((void*)0));
}
