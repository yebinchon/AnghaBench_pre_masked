
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct uni_setup {int unrec; int mdcr; int report; int * dtl; int dtl_repeat; int called_soft; int calling_soft; int cscope; int abradd; int abrsetup; int exqos; int lij_seqno; int lij_param; int lij_callid; int * git; int uu; int mintraffic; int atraffic; int epref; int * tns; int scompl; int notify; int eetd; int qos; int connid; int * callingsub; int calling; int * calledsub; int called; int * blli; int blli_repeat; int bhli; int bearer; int traffic; int aal; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

void
FUNC_1(struct uni_setup *VAR_6, struct uni_setup *VAR_7)
{
 u_int VAR_8, VAR_9;

 if(FUNC_0(VAR_6->aal))
  VAR_7->aal = VAR_6->aal;
 if(FUNC_0(VAR_6->traffic))
  VAR_7->traffic = VAR_6->traffic;
 if(FUNC_0(VAR_6->bearer))
  VAR_7->bearer = VAR_6->bearer;
 if(FUNC_0(VAR_6->bhli))
  VAR_7->bhli = VAR_6->bhli;
 if(FUNC_0(VAR_6->blli_repeat))
  VAR_7->blli_repeat = VAR_6->blli_repeat;
 for(VAR_8 = VAR_9 = 0; VAR_8 < VAR_0; VAR_8++)
  if(FUNC_0(VAR_6->blli[VAR_8]))
   VAR_7->blli[VAR_9++] = VAR_6->blli[VAR_8];
 if(FUNC_0(VAR_6->called))
  VAR_7->called = VAR_6->called;
 for(VAR_8 = VAR_9 = 0; VAR_8 < VAR_1; VAR_8++)
  if(FUNC_0(VAR_6->calledsub[VAR_8]))
   VAR_7->calledsub[VAR_9++] = VAR_6->calledsub[VAR_8];
 if(FUNC_0(VAR_6->calling))
  VAR_7->calling = VAR_6->calling;
 for(VAR_8 = VAR_9 = 0; VAR_8 < VAR_2; VAR_8++)
  if(FUNC_0(VAR_6->callingsub[VAR_8]))
   VAR_7->callingsub[VAR_9++] = VAR_6->callingsub[VAR_8];
 if(FUNC_0(VAR_6->connid))
  VAR_7->connid = VAR_6->connid;
 if(FUNC_0(VAR_6->qos))
  VAR_7->qos = VAR_6->qos;
 if(FUNC_0(VAR_6->eetd))
  VAR_7->eetd = VAR_6->eetd;
 if(FUNC_0(VAR_6->notify))
  VAR_7->notify = VAR_6->notify;
 if(FUNC_0(VAR_6->scompl))
  VAR_7->scompl = VAR_6->scompl;
 for(VAR_8 = VAR_9 = 0; VAR_8 < VAR_5; VAR_8++)
  if(FUNC_0(VAR_6->tns[VAR_8]))
   VAR_7->tns[VAR_9++] = VAR_6->tns[VAR_8];
 if(FUNC_0(VAR_6->epref))
  VAR_7->epref = VAR_6->epref;
 if(FUNC_0(VAR_6->atraffic))
  VAR_7->atraffic = VAR_6->atraffic;
 if(FUNC_0(VAR_6->mintraffic))
  VAR_7->mintraffic = VAR_6->mintraffic;
 if(FUNC_0(VAR_6->uu))
  VAR_7->uu = VAR_6->uu;
 for(VAR_8 = VAR_9 = 0; VAR_8 < VAR_4; VAR_8++)
  if(FUNC_0(VAR_6->git[VAR_8]))
   VAR_7->git[VAR_9++] = VAR_6->git[VAR_8];
 if(FUNC_0(VAR_6->lij_callid))
  VAR_7->lij_callid = VAR_6->lij_callid;
 if(FUNC_0(VAR_6->lij_param))
  VAR_7->lij_param = VAR_6->lij_param;
 if(FUNC_0(VAR_6->lij_seqno))
  VAR_7->lij_seqno = VAR_6->lij_seqno;
 if(FUNC_0(VAR_6->exqos))
  VAR_7->exqos = VAR_6->exqos;
 if(FUNC_0(VAR_6->abrsetup))
  VAR_7->abrsetup = VAR_6->abrsetup;
 if(FUNC_0(VAR_6->abradd))
  VAR_7->abradd = VAR_6->abradd;
 if(FUNC_0(VAR_6->cscope))
  VAR_7->cscope = VAR_6->cscope;
 if(FUNC_0(VAR_6->calling_soft))
  VAR_7->calling_soft = VAR_6->calling_soft;
 if(FUNC_0(VAR_6->called_soft))
  VAR_7->called_soft = VAR_6->called_soft;
 if(FUNC_0(VAR_6->dtl_repeat))
  VAR_7->dtl_repeat = VAR_6->dtl_repeat;
 for(VAR_8 = VAR_9 = 0; VAR_8 < VAR_3; VAR_8++)
  if(FUNC_0(VAR_6->dtl[VAR_8]))
   VAR_7->dtl[VAR_9++] = VAR_6->dtl[VAR_8];
 if(FUNC_0(VAR_6->report))
  VAR_7->report = VAR_6->report;
 if(FUNC_0(VAR_6->mdcr))
  VAR_7->mdcr = VAR_6->mdcr;
 if(FUNC_0(VAR_6->unrec))
  VAR_7->unrec = VAR_6->unrec;
}
