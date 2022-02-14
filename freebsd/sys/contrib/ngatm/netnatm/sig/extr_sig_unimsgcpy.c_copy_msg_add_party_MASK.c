
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct uni_add_party {int unrec; int * dtl; int dtl_repeat; int called_soft; int calling_soft; int lij_seqno; int * git; int uu; int eetd; int notify; int epref; int * tns; int scompl; int * callingsub; int calling; int * calledsub; int called; int blli; int bhli; int aal; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

void
FUNC_1(struct uni_add_party *VAR_5, struct uni_add_party *VAR_6)
{
 u_int VAR_7, VAR_8;

 if(FUNC_0(VAR_5->aal))
  VAR_6->aal = VAR_5->aal;
 if(FUNC_0(VAR_5->bhli))
  VAR_6->bhli = VAR_5->bhli;
 if(FUNC_0(VAR_5->blli))
  VAR_6->blli = VAR_5->blli;
 if(FUNC_0(VAR_5->called))
  VAR_6->called = VAR_5->called;
 for(VAR_7 = VAR_8 = 0; VAR_7 < VAR_0; VAR_7++)
  if(FUNC_0(VAR_5->calledsub[VAR_7]))
   VAR_6->calledsub[VAR_8++] = VAR_5->calledsub[VAR_7];
 if(FUNC_0(VAR_5->calling))
  VAR_6->calling = VAR_5->calling;
 for(VAR_7 = VAR_8 = 0; VAR_7 < VAR_1; VAR_7++)
  if(FUNC_0(VAR_5->callingsub[VAR_7]))
   VAR_6->callingsub[VAR_8++] = VAR_5->callingsub[VAR_7];
 if(FUNC_0(VAR_5->scompl))
  VAR_6->scompl = VAR_5->scompl;
 for(VAR_7 = VAR_8 = 0; VAR_7 < VAR_4; VAR_7++)
  if(FUNC_0(VAR_5->tns[VAR_7]))
   VAR_6->tns[VAR_8++] = VAR_5->tns[VAR_7];
 if(FUNC_0(VAR_5->epref))
  VAR_6->epref = VAR_5->epref;
 if(FUNC_0(VAR_5->notify))
  VAR_6->notify = VAR_5->notify;
 if(FUNC_0(VAR_5->eetd))
  VAR_6->eetd = VAR_5->eetd;
 if(FUNC_0(VAR_5->uu))
  VAR_6->uu = VAR_5->uu;
 for(VAR_7 = VAR_8 = 0; VAR_7 < VAR_3; VAR_7++)
  if(FUNC_0(VAR_5->git[VAR_7]))
   VAR_6->git[VAR_8++] = VAR_5->git[VAR_7];
 if(FUNC_0(VAR_5->lij_seqno))
  VAR_6->lij_seqno = VAR_5->lij_seqno;
 if(FUNC_0(VAR_5->calling_soft))
  VAR_6->calling_soft = VAR_5->calling_soft;
 if(FUNC_0(VAR_5->called_soft))
  VAR_6->called_soft = VAR_5->called_soft;
 if(FUNC_0(VAR_5->dtl_repeat))
  VAR_6->dtl_repeat = VAR_5->dtl_repeat;
 for(VAR_7 = VAR_8 = 0; VAR_7 < VAR_2; VAR_7++)
  if(FUNC_0(VAR_5->dtl[VAR_7]))
   VAR_6->dtl[VAR_8++] = VAR_5->dtl[VAR_7];
 if(FUNC_0(VAR_5->unrec))
  VAR_6->unrec = VAR_5->unrec;
}
