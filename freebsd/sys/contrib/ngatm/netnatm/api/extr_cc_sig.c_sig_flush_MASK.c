
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct uni_msg {int dummy; } ;
struct ccsig {scalar_t__ type; void* target; scalar_t__ arg1; scalar_t__ has_msg; } ;
struct ccdata {int free_sigs; int def_sigs; int sigs; } ;


 struct ccsig* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ccsig*,int ) ;
 struct ccsig* FUNC_2 (struct ccsig*,int ) ;
 int FUNC_3 (int *,struct ccsig*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct uni_msg*) ;

__attribute__((used)) static void
FUNC_5(struct ccdata *VAR_1, u_int VAR_2, void *VAR_3)
{
 struct ccsig *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(&VAR_1->sigs);
 while (VAR_4 != ((void*)0)) {
  VAR_5 = FUNC_2(VAR_4, VAR_0);
  if (VAR_4->type == VAR_2 && VAR_4->target == VAR_3) {
   if (VAR_4->has_msg)
    FUNC_4((struct uni_msg *)VAR_4->arg1);
   FUNC_3(&VAR_1->sigs, VAR_4, VAR_0);
   FUNC_1(&VAR_1->free_sigs, VAR_4, VAR_0);
  }
  VAR_4 = VAR_5;
 }

 VAR_4 = FUNC_0(&VAR_1->def_sigs);
 while (VAR_4 != ((void*)0)) {
  VAR_5 = FUNC_2(VAR_4, VAR_0);
  if (VAR_4->type == VAR_2 && VAR_4->target == VAR_3) {
   if (VAR_4->has_msg)
    FUNC_4((struct uni_msg *)VAR_4->arg1);
   FUNC_3(&VAR_1->def_sigs, VAR_4, VAR_0);
   FUNC_1(&VAR_1->free_sigs, VAR_4, VAR_0);
  }
  VAR_4 = VAR_5;
 }
}
