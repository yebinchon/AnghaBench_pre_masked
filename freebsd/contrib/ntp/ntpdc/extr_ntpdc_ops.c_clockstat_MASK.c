
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int32 ;
struct parse {TYPE_1__* argval; int nargs; } ;
struct info_clock {scalar_t__ type; int lastevent; int currentstatus; int flags; scalar_t__ fudgeval2; scalar_t__ fudgeval1; int fudgetime2; int fudgetime1; scalar_t__ timestarted; scalar_t__ baddata; scalar_t__ badformat; scalar_t__ noresponse; scalar_t__ polls; int clockadr; } ;
struct clktype {scalar_t__ code; char* clocktype; } ;
typedef int l_fp ;
struct TYPE_2__ {int netnum; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_4 ;
 int FUNC_3 (size_t,int *) ;
 int FUNC_4 (size_t,int) ;
 struct clktype* VAR_5 ;
 int FUNC_5 (scalar_t__,int ,int ,size_t,int,char*,size_t*,size_t*,void*,int ,int) ;
 int FUNC_6 (int *,char*,...) ;
 scalar_t__ VAR_6 ;
 char* FUNC_7 (int *,int) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 char* FUNC_10 (int ) ;
 char* FUNC_11 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_12(
 struct parse *VAR_7,
 FILE *VAR_8
 )
{
 struct info_clock *VAR_9;

 u_long VAR_10[FUNC_8(VAR_3, 8)];
 size_t VAR_11;
 size_t VAR_12;
 size_t VAR_13;
 size_t VAR_14;
 int VAR_15;
 l_fp VAR_16;
 struct clktype *VAR_17;

 VAR_11 = FUNC_8(VAR_7->nargs, FUNC_0(VAR_10));
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  VAR_10[VAR_12] = FUNC_1(&VAR_7->argval[VAR_12].netnum);

again:
 VAR_15 = FUNC_5(VAR_6, VAR_4, 0, VAR_12,
        sizeof(u_int32), (char *)VAR_10, &VAR_13,
        &VAR_14, (void *)&VAR_9, 0, sizeof(struct info_clock));

 if (VAR_15 == VAR_2 && VAR_6 == VAR_0) {
  VAR_6 = VAR_1;
  goto again;
 }

 if (VAR_15 != 0)
  return;

 if (!FUNC_3(VAR_13, VAR_8))
  return;

 if (!FUNC_4(VAR_14, sizeof(struct info_clock)))
  return;

 while (VAR_13-- > 0) {
  (void) FUNC_6(VAR_8, "clock address:        %s\n",
          FUNC_10(VAR_9->clockadr));
  for (VAR_17 = VAR_5; VAR_17->code >= 0; VAR_17++)
      if (VAR_17->code == VAR_9->type)
   break;
  if (VAR_17->code >= 0)
      (void) FUNC_6(VAR_8, "clock type:           %s\n",
       VAR_17->clocktype);
  else
      (void) FUNC_6(VAR_8, "clock type:           unknown type (%d)\n",
       VAR_9->type);
  (void) FUNC_6(VAR_8, "last event:           %d\n",
          VAR_9->lastevent);
  (void) FUNC_6(VAR_8, "current status:       %d\n",
          VAR_9->currentstatus);
  (void) FUNC_6(VAR_8, "number of polls:      %lu\n",
          (u_long)FUNC_9(VAR_9->polls));
  (void) FUNC_6(VAR_8, "no response to poll:  %lu\n",
          (u_long)FUNC_9(VAR_9->noresponse));
  (void) FUNC_6(VAR_8, "bad format responses: %lu\n",
          (u_long)FUNC_9(VAR_9->badformat));
  (void) FUNC_6(VAR_8, "bad data responses:   %lu\n",
          (u_long)FUNC_9(VAR_9->baddata));
  (void) FUNC_6(VAR_8, "running time:         %lu\n",
          (u_long)FUNC_9(VAR_9->timestarted));
  FUNC_2(&VAR_9->fudgetime1, &VAR_16);
  (void) FUNC_6(VAR_8, "fudge time 1:         %s\n",
          FUNC_7(&VAR_16, 6));
  FUNC_2(&VAR_9->fudgetime2, &VAR_16);
  (void) FUNC_6(VAR_8, "fudge time 2:         %s\n",
          FUNC_7(&VAR_16, 6));
  (void) FUNC_6(VAR_8, "stratum:              %ld\n",
          (u_long)FUNC_9(VAR_9->fudgeval1));
  (void) FUNC_6(VAR_8, "reference ID:         %s\n",
          FUNC_11(VAR_9->fudgeval2, 0));

  (void) FUNC_6(VAR_8, "fudge flags:          0x%x\n",
          VAR_9->flags);

  if (VAR_13 > 0)
      (void) FUNC_6(VAR_8, "\n");
  VAR_9++;
 }
}
