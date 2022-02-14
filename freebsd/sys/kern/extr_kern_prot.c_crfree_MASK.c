
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_ref; scalar_t__ cr_groups; scalar_t__ cr_smallgroups; int * cr_loginclass; int * cr_prison; int * cr_ruidinfo; int * cr_uidinfo; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ucred*) ;
 int FUNC_2 (struct ucred*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ucred*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int*) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct ucred *VAR_1)
{

 FUNC_0(VAR_1->cr_ref > 0, ("bad ucred refcount: %d", VAR_1->cr_ref));
 FUNC_0(VAR_1->cr_ref != 0xdeadc0de, ("dangling reference to ucred"));
 if (FUNC_6(&VAR_1->cr_ref)) {





  if (VAR_1->cr_uidinfo != ((void*)0))
   FUNC_7(VAR_1->cr_uidinfo);
  if (VAR_1->cr_ruidinfo != ((void*)0))
   FUNC_7(VAR_1->cr_ruidinfo);



  if (VAR_1->cr_prison != ((void*)0))
   FUNC_5(VAR_1->cr_prison);
  if (VAR_1->cr_loginclass != ((void*)0))
   FUNC_3(VAR_1->cr_loginclass);






  if (VAR_1->cr_groups != VAR_1->cr_smallgroups)
   FUNC_2(VAR_1->cr_groups, VAR_0);
  FUNC_2(VAR_1, VAR_0);
 }
}
