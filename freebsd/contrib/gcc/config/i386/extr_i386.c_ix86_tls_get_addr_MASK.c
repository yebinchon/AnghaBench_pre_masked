
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;

rtx
FUNC_1 (void)
{

  if (!VAR_3)
    {
      VAR_3 = FUNC_0 (VAR_0,
         (VAR_2
          && !VAR_1)
         ? "___tls_get_addr"
         : "__tls_get_addr");
    }

  return VAR_3;
}
