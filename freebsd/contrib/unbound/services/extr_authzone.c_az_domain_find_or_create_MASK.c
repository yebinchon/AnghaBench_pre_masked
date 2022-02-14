
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct auth_zone {int dummy; } ;
struct auth_data {int dummy; } ;


 struct auth_data* FUNC_0 (struct auth_zone*,int *,size_t) ;
 struct auth_data* FUNC_1 (struct auth_zone*,int *,size_t) ;

__attribute__((used)) static struct auth_data*
FUNC_2(struct auth_zone* VAR_0, uint8_t* VAR_1,
 size_t VAR_2)
{
 struct auth_data* VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if(!VAR_3) {
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 }
 return VAR_3;
}
