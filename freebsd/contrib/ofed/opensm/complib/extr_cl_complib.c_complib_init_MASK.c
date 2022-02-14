
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cl_status_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int) ;

void FUNC_5(void)
{
 cl_status_t VAR_2 = VAR_0;

 VAR_2 = FUNC_3(&VAR_1);
 if (VAR_2 != VAR_0)
  goto _error;

 VAR_2 = FUNC_1();
 if (VAR_2 != VAR_0)
  goto _error;
 return;

_error:
 FUNC_2("__init: failed to create complib (%s)\n",
     FUNC_0(VAR_2));
 FUNC_4(1);
}
