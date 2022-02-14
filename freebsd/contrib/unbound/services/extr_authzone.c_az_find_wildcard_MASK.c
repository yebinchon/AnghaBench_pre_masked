
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct query_info {size_t qname_len; int * qname; } ;
struct auth_zone {size_t namelen; int name; } ;
struct auth_data {size_t namelen; } ;


 struct auth_data* FUNC_0 (struct auth_zone*,int *,size_t) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int **,size_t*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static struct auth_data*
FUNC_4(struct auth_zone* VAR_0, struct query_info* VAR_1,
 struct auth_data* VAR_2)
{
 uint8_t* VAR_3 = VAR_1->qname;
 size_t VAR_4 = VAR_1->qname_len;
 struct auth_data* VAR_5;
 if(!FUNC_3(VAR_3, VAR_0->name))
  return ((void*)0);
 while((VAR_5=FUNC_0(VAR_0, VAR_3, VAR_4))==((void*)0)) {

  if(VAR_4 == VAR_0->namelen)
   return ((void*)0);
  if(VAR_2 && VAR_4 == VAR_2->namelen)
   return ((void*)0);
  if(FUNC_1(VAR_3))
   return ((void*)0);
  FUNC_2(&VAR_3, &VAR_4);
 }
 return VAR_5;
}
