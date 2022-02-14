
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_8__ {int integer; scalar_t__ raw; } ;
struct be {scalar_t__ type; scalar_t__ asnlen; TYPE_1__ data; } ;
struct TYPE_9__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_2__ netdissect_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int const*,scalar_t__,struct be*) ;
 int FUNC_2 (TYPE_2__*,struct be*) ;
 int FUNC_3 (TYPE_2__*,struct be*) ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_3,
          const u_char *VAR_4, u_int VAR_5)
{
        struct be VAR_6;
 int VAR_7 = 0;


 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_1) {
  FUNC_0((VAR_3, "[!usm]"));
  FUNC_2(VAR_3, &VAR_6);
  return;
 }
 VAR_5 = VAR_6.asnlen;
 VAR_4 = (const u_char *)VAR_6.data.raw;


 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_2) {
  FUNC_0((VAR_3, "[msgAuthoritativeEngineID!=STR]"));
  FUNC_2(VAR_3, &VAR_6);
  return;
 }
 VAR_5 -= VAR_7;
 VAR_4 += VAR_7;


 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_0) {
  FUNC_0((VAR_3, "[msgAuthoritativeEngineBoots!=INT]"));
  FUNC_2(VAR_3, &VAR_6);
  return;
 }
 if (VAR_3->ndo_vflag)
  FUNC_0((VAR_3, "B=%d ", VAR_6.data.integer));
 VAR_5 -= VAR_7;
 VAR_4 += VAR_7;


 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_0) {
  FUNC_0((VAR_3, "[msgAuthoritativeEngineTime!=INT]"));
  FUNC_2(VAR_3, &VAR_6);
  return;
 }
 if (VAR_3->ndo_vflag)
  FUNC_0((VAR_3, "T=%d ", VAR_6.data.integer));
 VAR_5 -= VAR_7;
 VAR_4 += VAR_7;


 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_2) {
  FUNC_0((VAR_3, "[msgUserName!=STR]"));
  FUNC_2(VAR_3, &VAR_6);
  return;
 }
 VAR_5 -= VAR_7;
        VAR_4 += VAR_7;

 FUNC_0((VAR_3, "U="));
 if (FUNC_3(VAR_3, &VAR_6) == -1)
  return;
 FUNC_0((VAR_3, " "));


 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_2) {
  FUNC_0((VAR_3, "[msgAuthenticationParameters!=STR]"));
  FUNC_2(VAR_3, &VAR_6);
  return;
 }
 VAR_5 -= VAR_7;
        VAR_4 += VAR_7;


 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_2) {
  FUNC_0((VAR_3, "[msgPrivacyParameters!=STR]"));
  FUNC_2(VAR_3, &VAR_6);
  return;
 }
 VAR_5 -= VAR_7;
        VAR_4 += VAR_7;

 if ((u_int)VAR_7 < VAR_5)
  FUNC_0((VAR_3, "[%d extra after usm SEQ]", VAR_5 - VAR_7));
}
