
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t uint32_t ;
struct image_params {int dummy; } ;
typedef int register_t ;
typedef int cloudabi32_tcb_t ;
typedef int args ;


 int FUNC_0 (int **,struct image_params*) ;
 int FUNC_1 (uintptr_t*,int *,int) ;
 int FUNC_2 (int,int) ;
 uintptr_t FUNC_3 (int,int) ;

__attribute__((used)) static int
FUNC_4(register_t **VAR_0, struct image_params *VAR_1)
{
 int VAR_2;
 uint32_t VAR_3[2];


 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 != 0)
  return (VAR_2);
 VAR_3[0] = (uintptr_t)*VAR_0;
 VAR_3[1] = (uintptr_t)*VAR_0 +
     FUNC_3(sizeof(cloudabi32_tcb_t), sizeof(register_t));
 *VAR_0 -= FUNC_2(sizeof(VAR_3), sizeof(register_t));
 return (FUNC_1(VAR_3, *VAR_0, sizeof(VAR_3)));
}
