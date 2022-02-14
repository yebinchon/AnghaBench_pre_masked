
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lwpid_t ;
typedef int gregset_t ;
typedef int fpregset_t ;
typedef char* caddr_t ;
struct TYPE_2__ {int (* to_store_registers ) (int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (char*,int) ;
 int VAR_8 ;
 int FUNC_6 (int ,int ,char*,int ) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9 (int VAR_9)
{
  gregset_t VAR_10;
  fpregset_t VAR_11;
  lwpid_t VAR_12;





  if (!FUNC_1 (VAR_8))
    {
      VAR_6.to_store_registers (VAR_9);
      return ;
    }

  VAR_12 = FUNC_0 (VAR_8);
  if (VAR_9 != -1)
    if (FUNC_6 (VAR_1, VAR_12, (caddr_t) &VAR_10, 0) == -1)
      FUNC_2 ("Cannot get lwp %d registers: %s\n", VAR_12, FUNC_7 (VAR_7));

  FUNC_4 (&VAR_10, VAR_9);
  if (FUNC_6 (VAR_4, VAR_12, (caddr_t) &VAR_10, 0) == -1)
      FUNC_2 ("Cannot set lwp %d registers: %s\n", VAR_12, FUNC_7 (VAR_7));
  if (VAR_9 != -1)
    if (FUNC_6 (VAR_0, VAR_12, (caddr_t) &VAR_11, 0) == -1)
      FUNC_2 ("Cannot get lwp %d float registers: %s\n", VAR_12,
             FUNC_7 (VAR_7));

  FUNC_3 (&VAR_11, VAR_9);
  if (FUNC_6 (VAR_3, VAR_12, (caddr_t) &VAR_11, 0) == -1)
     FUNC_2 ("Cannot set lwp %d float registers: %s\n", VAR_12,
            FUNC_7 (VAR_7));
}
