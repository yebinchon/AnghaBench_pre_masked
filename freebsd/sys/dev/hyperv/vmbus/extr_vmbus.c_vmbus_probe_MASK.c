
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_6)
{

 if (FUNC_0(VAR_6) != 0 || VAR_5 != VAR_3 ||
     (VAR_4 & VAR_1) == 0)
  return (VAR_2);

 FUNC_1(VAR_6, "Hyper-V Vmbus");
 return (VAR_0);
}
