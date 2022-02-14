
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ m_pid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_8(int VAR_7)
{
 if (VAR_6 && VAR_5 != ((void*)0) && VAR_5->m_pid > 0)
  FUNC_3(VAR_5->m_pid, VAR_1);





 if (FUNC_1(0) == FUNC_2()) {
  FUNC_5(VAR_2, VAR_3);
  FUNC_3(0, VAR_2);
 }

 FUNC_0(VAR_0, "ssh");


 FUNC_4("Timeout before authentication for %s port %d",
     FUNC_6(VAR_4), FUNC_7(VAR_4));
}
