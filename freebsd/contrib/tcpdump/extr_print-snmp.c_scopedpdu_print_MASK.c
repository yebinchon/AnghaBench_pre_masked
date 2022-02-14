
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_2__ {scalar_t__ raw; } ;
struct be {scalar_t__ type; int asnlen; TYPE_1__ data; } ;
typedef int netdissect_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int,struct be*) ;
 int FUNC_2 (int *,struct be*) ;
 int FUNC_3 (int *,struct be*) ;
 int FUNC_4 (int *,struct be*) ;
 int FUNC_5 (int *,int const*,int,int) ;

__attribute__((used)) static void
FUNC_6(netdissect_options *VAR_2,
                const u_char *VAR_3, u_int VAR_4, int VAR_5)
{
 struct be VAR_6;
 int VAR_7 = 0;


 if ((VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_0) {
  FUNC_0((VAR_2, "[!scoped PDU]"));
  FUNC_2(VAR_2, &VAR_6);
  return;
 }
 VAR_4 = VAR_6.asnlen;
 VAR_3 = (const u_char *)VAR_6.data.raw;


 if ((VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_1) {
  FUNC_0((VAR_2, "[contextEngineID!=STR]"));
  FUNC_2(VAR_2, &VAR_6);
  return;
 }
 VAR_4 -= VAR_7;
 VAR_3 += VAR_7;

 FUNC_0((VAR_2, "E="));
 if (FUNC_3(VAR_2, &VAR_6) == -1)
  return;
 FUNC_0((VAR_2, " "));


 if ((VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_1) {
  FUNC_0((VAR_2, "[contextName!=STR]"));
  FUNC_2(VAR_2, &VAR_6);
  return;
 }
 VAR_4 -= VAR_7;
 VAR_3 += VAR_7;

 FUNC_0((VAR_2, "C="));
 if (FUNC_4(VAR_2, &VAR_6) == -1)
  return;
 FUNC_0((VAR_2, " "));

 FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);
}
