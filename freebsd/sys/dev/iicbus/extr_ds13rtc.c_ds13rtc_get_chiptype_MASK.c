
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ocd_data; int * ocd_str; } ;
typedef TYPE_1__ ds13_compat_data ;
typedef int device_t ;
struct TYPE_6__ {int ocd_data; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ,char*,char const**) ;
 scalar_t__ FUNC_4 (char const*,int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{




 ds13_compat_data *VAR_3;
 const char *VAR_4;




 if (FUNC_3(FUNC_0(VAR_2),
     FUNC_1(VAR_2), "compatible", &VAR_4) != 0)
  return (VAR_0);





 for (VAR_3 = VAR_1; VAR_3->ocd_str != ((void*)0); ++VAR_3) {
  if (FUNC_4(VAR_4, VAR_3->ocd_str) == 0)
   break;
 }
 return (VAR_3->ocd_data);

}
