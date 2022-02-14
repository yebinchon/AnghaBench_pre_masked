
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef long u_int32 ;
struct parse {TYPE_1__* argval; } ;
struct conf_fudge {void* fudgeval_flags; void* which; int fudgetime; int clockadr; } ;
typedef int l_fp ;
typedef int dummy ;
struct TYPE_2__ {char* string; int netnum; } ;
typedef int FILE ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (struct conf_fudge) ;
 int FUNC_4 (char*,long*) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (scalar_t__,int ,int,int,int,char*,size_t*,size_t*,char const**,int ,int) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (char*,int*) ;
 void* FUNC_9 (long) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_10(
 struct parse *VAR_11,
 FILE *VAR_12
 )
{
 struct conf_fudge VAR_13;
 size_t VAR_14;
 size_t VAR_15;
 const char *VAR_16;
 l_fp VAR_17;
 int VAR_18;
 long VAR_19;
 u_long VAR_20;
 int VAR_21;


 VAR_21 = 0;
 FUNC_3(VAR_13);
 VAR_13.clockadr = FUNC_0(&VAR_11->argval[0].netnum);

 if (FUNC_2(VAR_11->argval[1].string, "time1")) {
  VAR_13.which = FUNC_9(VAR_1);
  if (!FUNC_5(VAR_11->argval[2].string, &VAR_17))
      VAR_21 = 1;
  else
      FUNC_1(&VAR_17, &VAR_13.fudgetime);
 } else if (FUNC_2(VAR_11->argval[1].string, "time2")) {
  VAR_13.which = FUNC_9(VAR_2);
  if (!FUNC_5(VAR_11->argval[2].string, &VAR_17))
      VAR_21 = 1;
  else
      FUNC_1(&VAR_17, &VAR_13.fudgetime);
 } else if (FUNC_2(VAR_11->argval[1].string, "val1")) {
  VAR_13.which = FUNC_9(VAR_3);
  if (!FUNC_4(VAR_11->argval[2].string, &VAR_19))
      VAR_21 = 1;
  else
      VAR_13.fudgeval_flags = FUNC_9(VAR_19);
 } else if (FUNC_2(VAR_11->argval[1].string, "val2")) {
  VAR_13.which = FUNC_9(VAR_4);
  if (!FUNC_4(VAR_11->argval[2].string, &VAR_19))
      VAR_21 = 1;
  else
      VAR_13.fudgeval_flags = FUNC_9((u_int32)VAR_19);
 } else if (FUNC_2(VAR_11->argval[1].string, "flags")) {
  VAR_13.which = FUNC_9(VAR_0);
  if (!FUNC_8(VAR_11->argval[2].string, &VAR_20))
      VAR_21 = 1;
  else
      VAR_13.fudgeval_flags = FUNC_9((u_int32)(VAR_20 & 0xf));
 } else {
  (void) FUNC_7(&VAR_10, "What fudge is %s?\n",
          VAR_11->argval[1].string);
  return;
 }

 if (VAR_21) {
  (void) FUNC_7(&VAR_10, "Unknown fudge parameter %s\n",
          VAR_11->argval[2].string);
  return;
 }

again:
 VAR_18 = FUNC_6(VAR_9, VAR_8, 1, 1,
        sizeof(struct conf_fudge), (char *)&VAR_13, &VAR_14,
        &VAR_15, &VAR_16, 0, sizeof(VAR_16));

 if (VAR_18 == VAR_7 && VAR_9 == VAR_5) {
  VAR_9 = VAR_6;
  goto again;
 }

 if (VAR_18 == 0)
     (void) FUNC_7(VAR_12, "done!\n");
 return;
}
