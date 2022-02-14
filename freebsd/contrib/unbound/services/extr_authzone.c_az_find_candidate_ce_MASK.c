
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct query_info {int * qname; } ;
struct auth_zone {int dummy; } ;
struct auth_data {int name; } ;


 struct auth_data* FUNC_0 (struct auth_zone*,int *,size_t) ;
 int FUNC_1 (int *,size_t*) ;
 int * FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int **,size_t*) ;

__attribute__((used)) static struct auth_data*
FUNC_5(struct auth_zone* VAR_0, struct query_info* VAR_1,
 struct auth_data* VAR_2)
{
 uint8_t* VAR_3;
 size_t VAR_4;
 if(VAR_2) {
  VAR_3 = FUNC_2(VAR_1->qname, VAR_2->name);
 } else {
  VAR_3 = VAR_1->qname;
 }
 FUNC_1(VAR_3, &VAR_4);
 VAR_2 = FUNC_0(VAR_0, VAR_3, VAR_4);

 while(!VAR_2) {
  if(FUNC_3(VAR_3))
   return ((void*)0);
  FUNC_4(&VAR_3, &VAR_4);
  VAR_2 = FUNC_0(VAR_0, VAR_3, VAR_4);
 }
 return VAR_2;
}
