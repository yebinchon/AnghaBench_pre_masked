
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nvs_op; int * nvs_private; } ;
typedef TYPE_1__ nvstream_t ;
struct TYPE_6__ {int nvl_nvflag; int nvl_version; } ;
typedef TYPE_2__ nvlist_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(nvstream_t *VAR_2, nvlist_t *VAR_3, size_t *VAR_4)
{
 switch (VAR_2->nvs_op) {
 case 129:
 case 130: {
  XDR *VAR_5 = VAR_2->nvs_private;

  if (!FUNC_0(VAR_5, &VAR_3->nvl_version) ||
      !FUNC_1(VAR_5, &VAR_3->nvl_nvflag))
   return (VAR_0);
  break;
 }
 case 128: {




  *VAR_4 += 2 * 4 + 8;
  break;
 }
 default:
  return (VAR_1);
 }
 return (0);
}
