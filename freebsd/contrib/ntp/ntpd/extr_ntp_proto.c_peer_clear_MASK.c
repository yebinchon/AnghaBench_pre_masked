
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_char ;
struct peer {int hpoll; int minpoll; scalar_t__ hmode; int flags; int flip; size_t* filter_order; int nextdate; int update; int outdate; int associd; void* refresh; TYPE_1__* procptr; int refid; int stratum; int leap; void** filter_disp; int bxmt; int jitter; int flash; void* disp; int maxpoll; int ppoll; int * issuer; int * subject; int * cmmd; int sndval; int encrypt; int recval; int cookval; int * iffval; } ;
typedef int l_fp ;
struct TYPE_2__ {scalar_t__ coderecv; scalar_t__ codeproc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct peer*) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct peer*) ;
 int FUNC_4 (int ) ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (struct peer*) ;
 int FUNC_7 (int *,char const*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_9 () ;
 scalar_t__ VAR_12 ;
 int FUNC_10 (struct peer*) ;
 int VAR_13 ;
 int FUNC_11 (int *) ;

void
FUNC_12(
 struct peer *VAR_14,
 const char *VAR_15
 )
{
 u_char VAR_16;
 l_fp VAR_17 = VAR_14->bxmt;
 FUNC_8(FUNC_1(VAR_14), 0, FUNC_3(VAR_14));
 VAR_14->ppoll = VAR_14->maxpoll;
 VAR_14->hpoll = VAR_14->minpoll;
 VAR_14->disp = VAR_3;
 VAR_14->flash = FUNC_10(VAR_14);
 VAR_14->jitter = FUNC_4(VAR_13);


 if (VAR_14->hmode == VAR_4)
  VAR_14->bxmt = VAR_17;




 if (VAR_14->flags & VAR_1)
  VAR_14->flip = 1;
 for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
  VAR_14->filter_order[VAR_16] = VAR_16;
  VAR_14->filter_disp[VAR_16] = VAR_3;
 }



  VAR_14->leap = VAR_2;
  VAR_14->stratum = VAR_8;
  FUNC_7(&VAR_14->refid, VAR_15, 4);
 VAR_14->nextdate = VAR_14->update = VAR_14->outdate = VAR_9;
 if (VAR_10) {
  VAR_14->nextdate += VAR_12;
 } else if (VAR_5 == VAR_14->hmode) {
  VAR_14->nextdate += VAR_11;
 } else {
  VAR_14->nextdate += FUNC_9() % VAR_14->minpoll;
 }



 FUNC_2(1, ("peer_clear: at %ld next %ld associd %d refid %s\n",
      VAR_9, VAR_14->nextdate, VAR_14->associd,
      VAR_15));
}
