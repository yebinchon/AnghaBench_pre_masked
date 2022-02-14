
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int nvs_op; scalar_t__ nvs_private; } ;
typedef TYPE_1__ nvstream_t ;
struct TYPE_10__ {scalar_t__ n_curr; } ;
typedef TYPE_2__ nvs_native_t ;
struct TYPE_11__ {scalar_t__ nvp_size; } ;
typedef TYPE_3__ nvpair_t ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;


 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(nvstream_t *VAR_0, nvpair_t *VAR_1)
{
 switch (VAR_0->nvs_op) {
 case 128: {
  nvs_native_t *VAR_2 = (nvs_native_t *)VAR_0->nvs_private;
  uint64_t *VAR_3 = (void *)
      (VAR_2->n_curr - VAR_1->nvp_size + FUNC_1(VAR_1));





  FUNC_3(VAR_3, FUNC_0(VAR_1) * sizeof (uint64_t));
  break;
 }
 case 129: {
  char **VAR_4 = (void *)FUNC_2(VAR_1);
  char *VAR_5 = ((char *)VAR_4 + FUNC_0(VAR_1) * sizeof (uint64_t));
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
   VAR_4[VAR_6] = VAR_5;
   VAR_5 += FUNC_4(VAR_5) + 1;
  }
  break;
 }
 }
}
