
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ocd_data; int * ocd_str; } ;
typedef TYPE_1__ nxprtc_compat_data ;
typedef int device_t ;
struct TYPE_6__ {int ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ,char*,char const**) ;
 scalar_t__ FUNC_4 (char const*,int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{




 nxprtc_compat_data *VAR_4;
 const char *VAR_5;
 int VAR_6;






 if (FUNC_3(FUNC_0(VAR_3),
     FUNC_1(VAR_3), "compatible", &VAR_5) == 0) {
  for (VAR_4 = VAR_2; VAR_4->ocd_str != ((void*)0); ++VAR_4) {
   if (FUNC_4(VAR_5, VAR_4->ocd_str) == 0)
    break;
  }
  VAR_6 = VAR_4->ocd_data;
 } else
  VAR_6 = VAR_0;





 if (VAR_6 == VAR_0)
  return (VAR_1);
 else
  return (VAR_6);

}
