
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bhnd_core_desc {int class; } ;
typedef int bhnd_devclass_t ;


 int VAR_0 ;
 struct bhnd_core_desc* FUNC_0 (int ,int ) ;

bhnd_devclass_t
FUNC_1(uint16_t VAR_1, uint16_t VAR_2)
{
 const struct bhnd_core_desc *VAR_3;

 if ((VAR_3 = FUNC_0(VAR_1, VAR_2)) == ((void*)0))
  return (VAR_0);

 return VAR_3->class;
}
