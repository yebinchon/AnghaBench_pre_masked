
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,char const**) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_6)
{
 const char *VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;





 if (FUNC_0(FUNC_3(VAR_6), &VAR_7) != VAR_2) {
  FUNC_1(VAR_6, VAR_7);
  return (VAR_0);
 }






 VAR_9 = FUNC_2(VAR_6);
 VAR_10 = FUNC_5(VAR_6);
 VAR_8 = FUNC_4(VAR_6);
 if (VAR_9 == VAR_4 &&
     VAR_10 == VAR_5 && VAR_8 == 0) {
  FUNC_1(VAR_6, "PCI-CardBus Bridge");
  return (VAR_1);
 }
 return (VAR_3);
}
