
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sscop_param {int mr; int timer_cc; int timer_poll; int timer_keep_alive; int timer_no_response; int timer_idle; int maxj; int maxk; int maxcc; int maxpd; int maxstat; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,...) ;
 char* VAR_15 ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char**,int ) ;
 int FUNC_5 (char*) ;

void
FUNC_6(struct sscop_param *VAR_16, u_int *VAR_17, int VAR_18, char *VAR_19)
{
 u_int VAR_20;
 char *VAR_21, *VAR_22;

 if(VAR_18 == 'b') {
  VAR_16->flags |= VAR_1;
  *VAR_17 |= VAR_9;
  return;
 }
 if(VAR_18 == 'x') {
  VAR_16->flags |= VAR_0;
  *VAR_17 |= VAR_8;
  return;
 }
 if(VAR_18 == 'W') {
  VAR_20 = (u_int)FUNC_4(VAR_15, &VAR_21, 0);

  if(*VAR_21 != '\0')
   FUNC_1(1, "bad number to -W '%s'", VAR_15);
  if(VAR_20 >= (1 << 24) - 1)
   FUNC_1(1, "window too large: 0x%x", VAR_20);
  VAR_16->mr = VAR_20;
  *VAR_17 |= VAR_7;
  return;
 }

 if((VAR_22 = FUNC_2(VAR_19, '=')) == ((void*)0))
  FUNC_1(1, "need '=' in argument to -%c", VAR_18);
 *VAR_22++ = 0;
 if(*VAR_22 == 0)
  FUNC_1(1, "argument to -%c %s empty", VAR_18, VAR_19);
 VAR_20 = FUNC_4(VAR_22, &VAR_21, 0);
 if(*VAR_21 != 0)
  FUNC_1(1, "bad number in -%c %s=%s", VAR_18, VAR_19, VAR_22);

 if(VAR_18 == 't') {
  if(FUNC_3(VAR_19, "cc") == 0) {
   VAR_16->timer_cc = VAR_20;
   *VAR_17 |= VAR_10;
  } else if(FUNC_3(VAR_19, "poll") == 0) {
   VAR_16->timer_poll = VAR_20;
   *VAR_17 |= VAR_14;
  } else if(FUNC_3(VAR_19, "ka") == 0) {
   VAR_16->timer_keep_alive = VAR_20;
   *VAR_17 |= VAR_12;
  } else if(FUNC_3(VAR_19, "nr") == 0) {
   VAR_16->timer_no_response = VAR_20;
   *VAR_17 |= VAR_13;
  } else if(FUNC_3(VAR_19, "idle") == 0) {
   VAR_16->timer_idle = VAR_20;
   *VAR_17 |= VAR_11;
  } else
   FUNC_1(1, "bad timer name '%s'", VAR_19);
  return;
 }

 if(VAR_18 == 'a') {
  if(FUNC_3(VAR_19, "j") == 0) {
   VAR_16->maxj = VAR_20;
   *VAR_17 |= VAR_3;
  } else if(FUNC_3(VAR_19, "k") == 0) {
   VAR_16->maxk = VAR_20;
   *VAR_17 |= VAR_4;
  } else if(FUNC_3(VAR_19, "cc") == 0) {
   VAR_16->maxcc = VAR_20;
   *VAR_17 |= VAR_2;
  } else if(FUNC_3(VAR_19, "pd") == 0) {
   VAR_16->maxpd = VAR_20;
   *VAR_17 |= VAR_5;
  } else if(FUNC_3(VAR_19, "stat") == 0) {
   VAR_16->maxstat = VAR_20;
   *VAR_17 |= VAR_6;
  } else
   FUNC_1(1, "bad parameter '%s'", VAR_19);
  return;
 }

 FUNC_5("bad flag");
 FUNC_0();
}
