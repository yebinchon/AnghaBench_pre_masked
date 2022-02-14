
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int use_pam; } ;
typedef int Authctxt ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;

void
FUNC_2(Authctxt *VAR_1)
{
 if (!VAR_0.use_pam)
  FUNC_0("PAM: initialisation requested when UsePAM=no");

 if (FUNC_1(VAR_1) == -1)
  FUNC_0("PAM: initialisation failed");
}
