
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_2__ {int integer; } ;
struct be {scalar_t__ type; TYPE_1__ data; } ;
typedef int netdissect_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (int *,int const*,int,struct be*) ;
 scalar_t__ FUNC_3 (int *,struct be*) ;
 int FUNC_4 (int *,int ,int const*,int) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_6,
              const u_char *VAR_7, u_int VAR_8)
{
 struct be VAR_9;
 int VAR_10 = 0, VAR_11;

 FUNC_1((VAR_6, " "));


 if ((VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8, &VAR_9)) < 0)
  return;
 if (VAR_9.type != VAR_2) {
  FUNC_1((VAR_6, "[enterprise!=OID]"));
  FUNC_3(VAR_6, &VAR_9);
  return;
 }
 if (FUNC_3(VAR_6, &VAR_9) < 0)
  return;
 VAR_8 -= VAR_10;
 VAR_7 += VAR_10;

 FUNC_1((VAR_6, " "));


 if ((VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8, &VAR_9)) < 0)
  return;
 if (VAR_9.type != VAR_0) {
  FUNC_1((VAR_6, "[agent-addr!=INETADDR]"));
  FUNC_3(VAR_6, &VAR_9);
  return;
 }
 if (FUNC_3(VAR_6, &VAR_9) < 0)
  return;
 VAR_8 -= VAR_10;
 VAR_7 += VAR_10;


 if ((VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8, &VAR_9)) < 0)
  return;
 if (VAR_9.type != VAR_1) {
  FUNC_1((VAR_6, "[generic-trap!=INT]"));
  FUNC_3(VAR_6, &VAR_9);
  return;
 }
 VAR_11 = VAR_9.data.integer;
 {
  char VAR_12[20];
  FUNC_1((VAR_6, " %s", FUNC_0(VAR_11)));
 }
 VAR_8 -= VAR_10;
 VAR_7 += VAR_10;


 if ((VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8, &VAR_9)) < 0)
  return;
 if (VAR_9.type != VAR_1) {
  FUNC_1((VAR_6, "[specific-trap!=INT]"));
  FUNC_3(VAR_6, &VAR_9);
  return;
 }
 if (VAR_11 != VAR_4) {
  if (VAR_9.data.integer != 0)
   FUNC_1((VAR_6, "[specific-trap(%d)!=0]", VAR_9.data.integer));
 } else
  FUNC_1((VAR_6, " s=%d", VAR_9.data.integer));
 VAR_8 -= VAR_10;
 VAR_7 += VAR_10;

 FUNC_1((VAR_6, " "));


 if ((VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8, &VAR_9)) < 0)
  return;
 if (VAR_9.type != VAR_3) {
  FUNC_1((VAR_6, "[time-stamp!=TIMETICKS]"));
  FUNC_3(VAR_6, &VAR_9);
  return;
 }
 if (FUNC_3(VAR_6, &VAR_9) < 0)
  return;
 VAR_8 -= VAR_10;
 VAR_7 += VAR_10;

 FUNC_4(VAR_6, VAR_5, VAR_7, VAR_8);
 return;
}
