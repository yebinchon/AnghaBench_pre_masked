
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bhnd_resource {int dummy; } ;
struct bcma_devinfo {struct bhnd_resource* res_agent; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,struct bcma_devinfo*) ;
 int FUNC_1 (scalar_t__,struct bcma_devinfo*,int ) ;
 int FUNC_2 (scalar_t__,int,int) ;
 struct bcma_devinfo* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5, device_t VAR_6, uint16_t VAR_7)
{
 struct bcma_devinfo *VAR_8;
 struct bhnd_resource *VAR_9;
 uint16_t VAR_10;
 int VAR_11;

 if (FUNC_4(VAR_6) != VAR_5)
  return (VAR_3);

 VAR_8 = FUNC_3(VAR_6);


 VAR_10 = VAR_1 | VAR_2;
 if (VAR_7 & VAR_10)
  return (VAR_3);


 if ((VAR_9 = VAR_8->res_agent) == ((void*)0))
  return (VAR_4);


 if ((VAR_11 = FUNC_0(VAR_6, VAR_8)))
  return (VAR_11);


 if ((VAR_11 = FUNC_1(VAR_6, VAR_8, VAR_0)))
  return (VAR_11);


 if ((VAR_11 = FUNC_2(VAR_6, VAR_7, ~VAR_10)))
  return (VAR_11);

 return (0);
}
