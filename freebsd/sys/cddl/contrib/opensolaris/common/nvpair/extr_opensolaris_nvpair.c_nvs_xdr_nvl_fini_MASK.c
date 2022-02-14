
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nvs_op; int * nvs_private; } ;
typedef TYPE_1__ nvstream_t ;
typedef int XDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int*) ;

__attribute__((used)) static int
FUNC_1(nvstream_t *VAR_2)
{
 if (VAR_2->nvs_op == VAR_1) {
  XDR *VAR_3 = VAR_2->nvs_private;
  int VAR_4 = 0;

  if (!FUNC_0(VAR_3, &VAR_4) || !FUNC_0(VAR_3, &VAR_4))
   return (VAR_0);
 }

 return (0);
}
