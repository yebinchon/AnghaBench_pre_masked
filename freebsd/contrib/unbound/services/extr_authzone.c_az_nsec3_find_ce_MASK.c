
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct auth_zone {size_t namelen; } ;
struct auth_data {int dummy; } ;


 struct auth_data* FUNC_0 (struct auth_zone*,int *,size_t,int,size_t,int *,size_t) ;
 int FUNC_1 (int **,size_t*) ;

__attribute__((used)) static struct auth_data*
FUNC_2(struct auth_zone* VAR_0, uint8_t** VAR_1, size_t* VAR_2,
 int* VAR_3, int VAR_4, size_t VAR_5, uint8_t* VAR_6, size_t VAR_7)
{
 struct auth_data* VAR_8;
 while((VAR_8 = FUNC_0(VAR_0, *VAR_1, *VAR_2,
  VAR_4, VAR_5, VAR_6, VAR_7)) == ((void*)0)) {
  if(*VAR_2 == VAR_0->namelen) {

   return ((void*)0);
  }
  *VAR_3 = 1;
  FUNC_1(VAR_1, VAR_2);
 }
 return VAR_8;
}
