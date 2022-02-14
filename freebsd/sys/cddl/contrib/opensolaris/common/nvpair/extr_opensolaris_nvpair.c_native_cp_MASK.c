
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nvs_op; scalar_t__ nvs_private; } ;
typedef TYPE_1__ nvstream_t ;
struct TYPE_5__ {scalar_t__ n_curr; scalar_t__ n_end; } ;
typedef TYPE_2__ nvs_native_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (void*,void*,size_t) ;

__attribute__((used)) static int
FUNC_1(nvstream_t *VAR_2, void *VAR_3, size_t VAR_4)
{
 nvs_native_t *VAR_5 = (nvs_native_t *)VAR_2->nvs_private;

 if (VAR_5->n_curr + VAR_4 > VAR_5->n_end)
  return (VAR_0);





 switch (VAR_2->nvs_op) {
 case 128:
  FUNC_0(VAR_3, VAR_5->n_curr, VAR_4);
  break;
 case 129:
  FUNC_0(VAR_5->n_curr, VAR_3, VAR_4);
  break;
 default:
  return (VAR_1);
 }

 VAR_5->n_curr += VAR_4;
 return (0);
}
