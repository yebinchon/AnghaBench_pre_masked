
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_msg {int dummy; } ;
struct ccsig {scalar_t__ arg1; scalar_t__ has_msg; } ;
struct ccdata {int free_sigs; int def_sigs; int sigs; } ;


 int FUNC_0 (struct ccsig*) ;
 struct ccsig* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ccsig*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct uni_msg*) ;

void
FUNC_4(struct ccdata *VAR_1)
{
 struct ccsig *VAR_2;

 while ((VAR_2 = FUNC_1(&VAR_1->sigs)) != ((void*)0)) {
  if (VAR_2->has_msg)
   FUNC_3((struct uni_msg *)VAR_2->arg1);
  FUNC_2(&VAR_1->sigs, VAR_2, VAR_0);
  FUNC_0(VAR_2);
 }
 while ((VAR_2 = FUNC_1(&VAR_1->def_sigs)) != ((void*)0)) {
  if (VAR_2->has_msg)
   FUNC_3((struct uni_msg *)VAR_2->arg1);
  FUNC_2(&VAR_1->def_sigs, VAR_2, VAR_0);
  FUNC_0(VAR_2);
 }
 while ((VAR_2 = FUNC_1(&VAR_1->free_sigs)) != ((void*)0)) {
  FUNC_2(&VAR_1->free_sigs, VAR_2, VAR_0);
  FUNC_0(VAR_2);
 }
}
