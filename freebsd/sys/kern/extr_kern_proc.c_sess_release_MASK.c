
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int s_mtx; int s_sid; int * s_ttyp; int s_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct session*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct session*) ;

void
FUNC_6(struct session *VAR_2)
{

 if (FUNC_3(&VAR_2->s_count)) {
  if (VAR_2->s_ttyp != ((void*)0)) {
   FUNC_4(VAR_2->s_ttyp);
   FUNC_5(VAR_2->s_ttyp, VAR_2);
  }
  FUNC_2(VAR_1, VAR_2->s_sid);
  FUNC_1(&VAR_2->s_mtx);
  FUNC_0(VAR_2, VAR_0);
 }
}
