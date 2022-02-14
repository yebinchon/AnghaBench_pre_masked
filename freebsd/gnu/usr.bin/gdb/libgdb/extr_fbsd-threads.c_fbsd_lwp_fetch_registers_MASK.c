
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lwpid_t ;
typedef int gregset_t ;
typedef int fpregset_t ;
typedef char* caddr_t ;
struct TYPE_2__ {int (* to_fetch_registers ) (int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (int ,int,char*) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 (int ,int ,char*,int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_8 (int VAR_8)
{
  gregset_t VAR_9;
  fpregset_t VAR_10;
  lwpid_t VAR_11;




  if (!VAR_7)
    {
      VAR_6.to_fetch_registers (-1);
      return;
    }


  VAR_11 = FUNC_0 (VAR_5);

  if (FUNC_3 (VAR_1, VAR_11, (caddr_t) &VAR_9, 0) == -1)
    FUNC_1 ("Cannot get lwp %d registers: %s\n", VAR_11, FUNC_4 (VAR_4));
  FUNC_7 (&VAR_9);
      if (FUNC_3 (VAR_0, VAR_11, (caddr_t) &VAR_10, 0) == -1)
 FUNC_1 ("Cannot get lwp %d registers: %s\n ", VAR_11, FUNC_4 (VAR_4));
      FUNC_6 (&VAR_10);



}
