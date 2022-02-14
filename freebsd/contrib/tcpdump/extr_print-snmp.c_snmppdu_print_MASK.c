
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_8__ {int integer; } ;
struct be {scalar_t__ type; TYPE_1__ data; } ;
struct TYPE_9__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_2__ netdissect_options ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_2__*,int const*,int,struct be*) ;
 int FUNC_3 (TYPE_2__*,struct be*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int const*,int) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_8,
              u_short VAR_9, const u_char *VAR_10, u_int VAR_11)
{
 struct be VAR_12;
 int VAR_13 = 0, VAR_14;


 if ((VAR_13 = FUNC_2(VAR_8, VAR_10, VAR_11, &VAR_12)) < 0)
  return;
 if (VAR_12.type != VAR_0) {
  FUNC_1((VAR_8, "[reqId!=INT]"));
  FUNC_3(VAR_8, &VAR_12);
  return;
 }
 if (VAR_8->ndo_vflag)
  FUNC_1((VAR_8, "R=%d ", VAR_12.data.integer));
 VAR_11 -= VAR_13;
 VAR_10 += VAR_13;


 if ((VAR_13 = FUNC_2(VAR_8, VAR_10, VAR_11, &VAR_12)) < 0)
  return;
 if (VAR_12.type != VAR_0) {
  FUNC_1((VAR_8, "[errorStatus!=INT]"));
  FUNC_3(VAR_8, &VAR_12);
  return;
 }
 VAR_14 = 0;
 if ((VAR_9 == VAR_3 || VAR_9 == VAR_2 || VAR_9 == VAR_6
     || VAR_9 == VAR_4 || VAR_9 == VAR_7 || VAR_9 == VAR_5)
     && VAR_12.data.integer != 0) {
  char VAR_15[20];
  FUNC_1((VAR_8, "[errorStatus(%s)!=0]",
   FUNC_0(VAR_12.data.integer)));
 } else if (VAR_9 == VAR_1) {
  FUNC_1((VAR_8, " N=%d", VAR_12.data.integer));
 } else if (VAR_12.data.integer != 0) {
  char VAR_16[20];
  FUNC_1((VAR_8, " %s", FUNC_0(VAR_12.data.integer)));
  VAR_14 = VAR_12.data.integer;
 }
 VAR_11 -= VAR_13;
 VAR_10 += VAR_13;


 if ((VAR_13 = FUNC_2(VAR_8, VAR_10, VAR_11, &VAR_12)) < 0)
  return;
 if (VAR_12.type != VAR_0) {
  FUNC_1((VAR_8, "[errorIndex!=INT]"));
  FUNC_3(VAR_8, &VAR_12);
  return;
 }
 if ((VAR_9 == VAR_3 || VAR_9 == VAR_2 || VAR_9 == VAR_6
     || VAR_9 == VAR_4 || VAR_9 == VAR_7 || VAR_9 == VAR_5)
     && VAR_12.data.integer != 0)
  FUNC_1((VAR_8, "[errorIndex(%d)!=0]", VAR_12.data.integer));
 else if (VAR_9 == VAR_1)
  FUNC_1((VAR_8, " M=%d", VAR_12.data.integer));
 else if (VAR_12.data.integer != 0) {
  if (!VAR_14)
   FUNC_1((VAR_8, "[errorIndex(%d) w/o errorStatus]", VAR_12.data.integer));
  else
   FUNC_1((VAR_8, "@%d", VAR_12.data.integer));
 } else if (VAR_14) {
  FUNC_1((VAR_8, "[errorIndex==0]"));
 }
 VAR_11 -= VAR_13;
 VAR_10 += VAR_13;

 FUNC_4(VAR_8, VAR_9, VAR_10, VAR_11);
 return;
}
