
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RETSIGTYPE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static RETSIGTYPE
FUNC_2(int VAR_3)
{
    if (VAR_3 == VAR_0)
         FUNC_1(VAR_2, "Login timed out after %d seconds\n",
                VAR_1);
      else
         FUNC_1(VAR_2, "Login received signal, exiting\n");
    FUNC_0(0);
}
