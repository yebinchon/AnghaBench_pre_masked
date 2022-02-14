
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_core_info {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,struct bhnd_core_info*) ;
 struct bhnd_core_info FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(device_t VAR_0, device_t VAR_1)
{
 struct bhnd_core_info VAR_2 = FUNC_1(VAR_1);


 return (FUNC_0(FUNC_2(VAR_0), VAR_0, &VAR_2));
}
