
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcma_devinfo {TYPE_1__* res_agent; } ;
typedef scalar_t__ device_t ;
struct TYPE_2__ {int res; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 struct bcma_devinfo* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2, device_t VAR_3)
{
 struct bcma_devinfo *VAR_4;
 int VAR_5;

 if (FUNC_5(VAR_3) != VAR_2)
  FUNC_2(FUNC_5(VAR_2), VAR_3);

 if (!FUNC_6(VAR_3))
  return (VAR_0);

 VAR_4 = FUNC_4(VAR_3);


 if (VAR_4->res_agent != ((void*)0)) {
  VAR_5 = FUNC_0(FUNC_5(VAR_2), VAR_2,
      VAR_1, VAR_4->res_agent->res);
  if (VAR_5)
   return (VAR_5);
 }


 if ((VAR_5 = FUNC_3(VAR_2, VAR_3))) {

  if (VAR_4->res_agent != ((void*)0)) {
   FUNC_1(FUNC_5(VAR_2), VAR_2,
       VAR_1, VAR_4->res_agent->res);
  }

  return (VAR_5);
 }

 return (0);
}
