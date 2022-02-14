
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct uni_connect {int unrec; int report; int called_soft; int abradd; int abrsetup; int facility; int exqos; int traffic; int uu; int * git; int eetd; int connedsub; int conned; int notify; int epref; int connid; int blli; int aal; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;

void
FUNC_1(struct uni_connect *VAR_1, struct uni_connect *VAR_2)
{
 u_int VAR_3, VAR_4;

 if(FUNC_0(VAR_1->aal))
  VAR_2->aal = VAR_1->aal;
 if(FUNC_0(VAR_1->blli))
  VAR_2->blli = VAR_1->blli;
 if(FUNC_0(VAR_1->connid))
  VAR_2->connid = VAR_1->connid;
 if(FUNC_0(VAR_1->epref))
  VAR_2->epref = VAR_1->epref;
 if(FUNC_0(VAR_1->notify))
  VAR_2->notify = VAR_1->notify;
 if(FUNC_0(VAR_1->conned))
  VAR_2->conned = VAR_1->conned;
 if(FUNC_0(VAR_1->connedsub))
  VAR_2->connedsub = VAR_1->connedsub;
 if(FUNC_0(VAR_1->eetd))
  VAR_2->eetd = VAR_1->eetd;
 for(VAR_3 = VAR_4 = 0; VAR_3 < VAR_0; VAR_3++)
  if(FUNC_0(VAR_1->git[VAR_3]))
   VAR_2->git[VAR_4++] = VAR_1->git[VAR_3];
 if(FUNC_0(VAR_1->uu))
  VAR_2->uu = VAR_1->uu;
 if(FUNC_0(VAR_1->traffic))
  VAR_2->traffic = VAR_1->traffic;
 if(FUNC_0(VAR_1->exqos))
  VAR_2->exqos = VAR_1->exqos;
 if(FUNC_0(VAR_1->facility))
  VAR_2->facility = VAR_1->facility;
 if(FUNC_0(VAR_1->abrsetup))
  VAR_2->abrsetup = VAR_1->abrsetup;
 if(FUNC_0(VAR_1->abradd))
  VAR_2->abradd = VAR_1->abradd;
 if(FUNC_0(VAR_1->called_soft))
  VAR_2->called_soft = VAR_1->called_soft;
 if(FUNC_0(VAR_1->report))
  VAR_2->report = VAR_1->report;
 if(FUNC_0(VAR_1->unrec))
  VAR_2->unrec = VAR_1->unrec;
}
