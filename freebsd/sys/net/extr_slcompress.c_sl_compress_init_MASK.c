
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct slcompress {int last_recv; int last_xmit; int flags; struct cstate* last_cs; scalar_t__ rstate; struct cstate* tstate; } ;
struct cstate {size_t cs_id; struct cstate* cs_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;

void
FUNC_1(struct slcompress *VAR_2, int VAR_3)
{
 u_int VAR_4;
 struct cstate *VAR_5 = VAR_2->tstate;

 if (VAR_3 == -1) {
  VAR_3 = VAR_0 - 1;
  FUNC_0((char *)VAR_2, sizeof(*VAR_2));
 } else {

  FUNC_0((char *)VAR_2->tstate, sizeof(VAR_2->tstate));
  FUNC_0((char *)VAR_2->rstate, sizeof(VAR_2->rstate));
 }
   for (VAR_4 = VAR_3; VAR_4 > 0; --VAR_4) {
  VAR_5[VAR_4].cs_id = VAR_4;
  VAR_5[VAR_4].cs_next = &VAR_5[VAR_4 - 1];
 }
 VAR_5[0].cs_next = &VAR_5[VAR_3];
 VAR_5[0].cs_id = 0;
 VAR_2->last_cs = &VAR_5[0];
 VAR_2->last_recv = 255;
 VAR_2->last_xmit = 255;
 VAR_2->flags = VAR_1;
}
