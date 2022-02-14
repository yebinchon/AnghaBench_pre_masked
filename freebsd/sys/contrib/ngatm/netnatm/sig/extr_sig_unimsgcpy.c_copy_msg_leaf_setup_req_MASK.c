
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct uni_leaf_setup_req {int unrec; int lij_seqno; int lij_callid; int * calledsub; int called; int * callingsub; int calling; int * tns; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

void
FUNC_1(struct uni_leaf_setup_req *VAR_3, struct uni_leaf_setup_req *VAR_4)
{
 u_int VAR_5, VAR_6;

 for(VAR_5 = VAR_6 = 0; VAR_5 < VAR_2; VAR_5++)
  if(FUNC_0(VAR_3->tns[VAR_5]))
   VAR_4->tns[VAR_6++] = VAR_3->tns[VAR_5];
 if(FUNC_0(VAR_3->calling))
  VAR_4->calling = VAR_3->calling;
 for(VAR_5 = VAR_6 = 0; VAR_5 < VAR_1; VAR_5++)
  if(FUNC_0(VAR_3->callingsub[VAR_5]))
   VAR_4->callingsub[VAR_6++] = VAR_3->callingsub[VAR_5];
 if(FUNC_0(VAR_3->called))
  VAR_4->called = VAR_3->called;
 for(VAR_5 = VAR_6 = 0; VAR_5 < VAR_0; VAR_5++)
  if(FUNC_0(VAR_3->calledsub[VAR_5]))
   VAR_4->calledsub[VAR_6++] = VAR_3->calledsub[VAR_5];
 if(FUNC_0(VAR_3->lij_callid))
  VAR_4->lij_callid = VAR_3->lij_callid;
 if(FUNC_0(VAR_3->lij_seqno))
  VAR_4->lij_seqno = VAR_3->lij_seqno;
 if(FUNC_0(VAR_3->unrec))
  VAR_4->unrec = VAR_3->unrec;
}
