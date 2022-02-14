
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wc ;
typedef int uint8_t ;
struct auth_zone {int dummy; } ;
struct auth_data {int dummy; } ;


 int VAR_0 ;
 struct auth_data* FUNC_0 (struct auth_zone*,int*,size_t) ;
 int FUNC_1 (int*,int*,size_t) ;

__attribute__((used)) static struct auth_data*
FUNC_2(struct auth_zone* VAR_1, uint8_t* VAR_2, size_t VAR_3)
{
 uint8_t VAR_4[VAR_0];
 if(VAR_3+2 > sizeof(VAR_4))
  return ((void*)0);
 VAR_4[0] = 1;
 VAR_4[1] = (uint8_t)'*';
 FUNC_1(VAR_4+2, VAR_2, VAR_3);
 return FUNC_0(VAR_1, VAR_4, VAR_3+2);
}
