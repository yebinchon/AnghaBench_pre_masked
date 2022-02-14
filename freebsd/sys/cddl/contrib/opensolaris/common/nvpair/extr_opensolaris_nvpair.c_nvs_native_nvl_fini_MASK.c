
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nvs_op; scalar_t__ nvs_private; } ;
typedef TYPE_1__ nvstream_t ;
struct TYPE_5__ {scalar_t__ n_curr; scalar_t__ n_end; } ;
typedef TYPE_2__ nvs_native_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_1(nvstream_t *VAR_2)
{
 if (VAR_2->nvs_op == VAR_1) {
  nvs_native_t *VAR_3 = (nvs_native_t *)VAR_2->nvs_private;




  if (VAR_3->n_curr + sizeof (int) > VAR_3->n_end)
   return (VAR_0);

  FUNC_0(VAR_3->n_curr, sizeof (int));
  VAR_3->n_curr += sizeof (int);
 }

 return (0);
}
