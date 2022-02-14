
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum neon_shape { ____Placeholder_neon_shape } neon_shape ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1 (enum neon_shape VAR_1)
{
  if (VAR_1 == VAR_0)
    FUNC_0 ("fmuls");
  else
    FUNC_0 ("fmuld");
}
