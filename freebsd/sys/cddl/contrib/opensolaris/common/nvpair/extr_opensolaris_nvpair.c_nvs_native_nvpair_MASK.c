
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nvs_op; scalar_t__ nvs_private; } ;
typedef TYPE_1__ nvstream_t ;
struct TYPE_6__ {size_t n_curr; size_t n_end; } ;
typedef TYPE_2__ nvs_native_t ;
typedef int nvpair_t ;
typedef size_t int32_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (size_t,size_t*,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_2(nvstream_t *VAR_2, nvpair_t *VAR_3, size_t *VAR_4)
{
 switch (VAR_2->nvs_op) {
 case 128:
  return (FUNC_1(VAR_2, VAR_3));

 case 129: {
  nvs_native_t *VAR_5 = (nvs_native_t *)VAR_2->nvs_private;
  int32_t VAR_6;


  if (VAR_5->n_curr + sizeof (int32_t) > VAR_5->n_end)
   return (VAR_0);
  FUNC_0(VAR_5->n_curr, &VAR_6, sizeof (int32_t));


  if (VAR_6 < 0 ||
      VAR_6 > VAR_5->n_end - VAR_5->n_curr)
   return (VAR_0);

  *VAR_4 = VAR_6;






  if (*VAR_4 == 0)
   VAR_5->n_curr += sizeof (int32_t);
  break;
 }

 default:
  return (VAR_1);
 }

 return (0);
}
