
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_4__ {size_t num_host_key_files; } ;
struct TYPE_3__ {int ** host_certificates; int ** host_keys; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;

void
FUNC_1(void)
{
 u_int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0.num_host_key_files; VAR_2++) {
  if (VAR_1.host_keys[VAR_2]) {
   FUNC_0(VAR_1.host_keys[VAR_2]);
   VAR_1.host_keys[VAR_2] = ((void*)0);
  }
  if (VAR_1.host_certificates[VAR_2]) {
   FUNC_0(VAR_1.host_certificates[VAR_2]);
   VAR_1.host_certificates[VAR_2] = ((void*)0);
  }
 }
}
