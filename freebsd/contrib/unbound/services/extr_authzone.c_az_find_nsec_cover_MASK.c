
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct auth_zone {size_t namelen; } ;
struct auth_rrset {int dummy; } ;
struct auth_data {size_t namelen; int * name; } ;


 int VAR_0 ;
 struct auth_rrset* FUNC_0 (struct auth_data*,int ) ;
 struct auth_data* FUNC_1 (struct auth_zone*,int *,size_t) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int **,size_t*) ;

__attribute__((used)) static struct auth_rrset*
FUNC_4(struct auth_zone* VAR_1, struct auth_data** VAR_2)
{
 uint8_t* VAR_3 = (*VAR_2)->name;
 size_t VAR_4 = (*VAR_2)->namelen;
 struct auth_rrset* VAR_5;
 while((VAR_5=FUNC_0(*VAR_2, VAR_0)) == ((void*)0)) {
  if(FUNC_2(VAR_3)) return ((void*)0);
  if(VAR_4 == VAR_1->namelen) return ((void*)0);
  FUNC_3(&VAR_3, &VAR_4);

  *VAR_2 = FUNC_1(VAR_1, VAR_3, VAR_4);
 }
 return VAR_5;
}
