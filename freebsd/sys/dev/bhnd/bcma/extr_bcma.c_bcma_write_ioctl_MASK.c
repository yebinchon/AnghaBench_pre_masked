
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bhnd_resource {int dummy; } ;
struct bcma_devinfo {struct bhnd_resource* res_agent; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bhnd_resource*,int ) ;
 int FUNC_2 (struct bhnd_resource*,int ,int) ;
 struct bcma_devinfo* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4, device_t VAR_5, uint16_t VAR_6, uint16_t VAR_7)
{
 struct bcma_devinfo *VAR_8;
 struct bhnd_resource *VAR_9;
 uint32_t VAR_10;

 if (FUNC_4(VAR_5) != VAR_4)
  return (VAR_2);

 VAR_8 = FUNC_3(VAR_5);
 if ((VAR_9 = VAR_8->res_agent) == ((void*)0))
  return (VAR_3);


 VAR_10 = FUNC_1(VAR_9, VAR_0);
 VAR_10 &= ~(VAR_1 & VAR_7);
 VAR_10 |= (VAR_6 & VAR_7);

 FUNC_2(VAR_9, VAR_0, VAR_10);


 FUNC_1(VAR_9, VAR_0);
 FUNC_0(10);

 return (0);
}
