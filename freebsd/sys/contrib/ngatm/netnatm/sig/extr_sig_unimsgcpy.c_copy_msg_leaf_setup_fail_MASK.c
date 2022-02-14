
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct uni_leaf_setup_fail {int unrec; int * tns; int lij_seqno; int calledsub; int called; int cause; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;

void
FUNC_1(struct uni_leaf_setup_fail *VAR_1, struct uni_leaf_setup_fail *VAR_2)
{
 u_int VAR_3, VAR_4;

 if(FUNC_0(VAR_1->cause))
  VAR_2->cause = VAR_1->cause;
 if(FUNC_0(VAR_1->called))
  VAR_2->called = VAR_1->called;
 if(FUNC_0(VAR_1->calledsub))
  VAR_2->calledsub = VAR_1->calledsub;
 if(FUNC_0(VAR_1->lij_seqno))
  VAR_2->lij_seqno = VAR_1->lij_seqno;
 for(VAR_3 = VAR_4 = 0; VAR_3 < VAR_0; VAR_3++)
  if(FUNC_0(VAR_1->tns[VAR_3]))
   VAR_2->tns[VAR_4++] = VAR_1->tns[VAR_3];
 if(FUNC_0(VAR_1->unrec))
  VAR_2->unrec = VAR_1->unrec;
}
