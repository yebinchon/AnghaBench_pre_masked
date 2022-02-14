
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct auth_zone {int dummy; } ;
struct auth_data {size_t namelen; int * name; } ;


 struct auth_data* FUNC_0 (struct auth_zone*,int *,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,size_t*) ;

__attribute__((used)) static struct auth_data*
FUNC_3(struct auth_zone* VAR_0, struct auth_data* VAR_1)
{
 uint8_t* VAR_2 = VAR_1->name;
 size_t VAR_3 = VAR_1->namelen;
 while(!FUNC_1(VAR_2)) {
  FUNC_2(&VAR_2, &VAR_3);
  if((VAR_1=FUNC_0(VAR_0, VAR_2, VAR_3)) != ((void*)0))
   return VAR_1;
 }
 return ((void*)0);
}
