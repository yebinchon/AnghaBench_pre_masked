
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_core_match {int dummy; } ;
struct bhnd_core_info {int dummy; } ;
typedef int * device_t ;


 int FUNC_0 (int ,int *,struct bhnd_core_info*) ;
 int * FUNC_1 (int *,struct bhnd_core_match*) ;
 struct bhnd_core_match FUNC_2 (struct bhnd_core_info*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static device_t
FUNC_4(device_t VAR_0)
{
 struct bhnd_core_info VAR_1;
 struct bhnd_core_match VAR_2;
 int VAR_3;


 if ((VAR_3 = FUNC_0(FUNC_3(VAR_0), VAR_0, &VAR_1)))
  return (((void*)0));


 VAR_2 = FUNC_2(&VAR_1);
 return (FUNC_1(VAR_0, &VAR_2));
}
