
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcbptr ;
struct image_params {int dummy; } ;
typedef scalar_t__ register_t ;


 int FUNC_0 (scalar_t__**,struct image_params*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_2(register_t **VAR_0, struct image_params *VAR_1)
{
 int VAR_2;
 register_t VAR_3;


 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 != 0)
  return (VAR_2);






 VAR_3 = (register_t)*VAR_0;
 return (FUNC_1(&VAR_3, --*VAR_0, sizeof(VAR_3)));
}
