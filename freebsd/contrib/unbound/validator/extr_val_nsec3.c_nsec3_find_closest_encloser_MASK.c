
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct query_info {size_t qname_len; int * qname; } ;
struct nsec3_filter {int zone; } ;
struct module_env {int dummy; } ;
struct ce_response {size_t ce_len; int * ce; int ce_rr; int ce_rrset; } ;
typedef int rbtree_type ;


 int FUNC_0 (int **,size_t*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct module_env*,struct nsec3_filter*,int *,int *,size_t,int *,int *) ;

__attribute__((used)) static int
FUNC_3(struct module_env* VAR_0, struct nsec3_filter* VAR_1,
 rbtree_type* VAR_2, struct query_info* VAR_3, struct ce_response* VAR_4)
{
 uint8_t* VAR_5 = VAR_3->qname;
 size_t VAR_6 = VAR_3->qname_len;
 while(FUNC_1(VAR_5, VAR_1->zone)) {
  if(FUNC_2(VAR_0, VAR_1, VAR_2, VAR_5, VAR_6,
   &VAR_4->ce_rrset, &VAR_4->ce_rr)) {
   VAR_4->ce = VAR_5;
   VAR_4->ce_len = VAR_6;
   return 1;
  }
  FUNC_0(&VAR_5, &VAR_6);
 }
 return 0;
}
