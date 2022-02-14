
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct handle {scalar_t__ idx; int type; struct handle* next; int ptr; } ;
typedef scalar_t__ int32_t ;
typedef int gss_ctx_id_t ;
typedef int gss_cred_id_t ;
typedef int OM_uint32 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct handle*) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;



__attribute__((used)) static void
FUNC_4(struct handle **VAR_0, int32_t VAR_1)
{
    OM_uint32 VAR_2;

    if (VAR_1 == 0)
 return;

    while (*VAR_0) {
 if ((*VAR_0)->idx == VAR_1) {
     struct handle *VAR_3 = *VAR_0;
     *VAR_0 = (*VAR_0)->next;
     switch(VAR_3->type) {
     case 129: {
  gss_ctx_id_t VAR_4 = VAR_3->ptr;
  FUNC_2(&VAR_2, &VAR_4, ((void*)0));
  break; }
     case 128: {
  gss_cred_id_t VAR_5 = VAR_3->ptr;
  FUNC_3(&VAR_2, &VAR_5);
  break; }
     }
     FUNC_1(VAR_3);
     return;
 }
 VAR_0 = &((*VAR_0)->next);
    }
    FUNC_0(1, "tried to delete an unexisting handle");
}
