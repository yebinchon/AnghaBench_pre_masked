
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_9__ {int integer; scalar_t__ raw; } ;
struct be {scalar_t__ type; scalar_t__ asnlen; TYPE_1__ data; } ;
struct TYPE_10__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_2__ netdissect_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;



 int * VAR_2 ;
 int FUNC_1 (TYPE_2__*,int const*,scalar_t__,struct be*) ;
 int FUNC_2 (TYPE_2__*,struct be*) ;
 int FUNC_3 (TYPE_2__*,int const*,scalar_t__,int) ;
 int FUNC_4 (TYPE_2__*,int const*,scalar_t__) ;

void
FUNC_5(netdissect_options *VAR_3,
           const u_char *VAR_4, u_int VAR_5)
{
 struct be VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_0((VAR_3, " "));


 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_1) {
  FUNC_0((VAR_3, "[!init SEQ]"));
  FUNC_2(VAR_3, &VAR_6);
  return;
 }
 if ((u_int)VAR_7 < VAR_5)
  FUNC_0((VAR_3, "[%d extra after iSEQ]", VAR_5 - VAR_7));

 VAR_5 = VAR_6.asnlen;
 VAR_4 = (const u_char *)VAR_6.data.raw;


 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_0) {
  FUNC_0((VAR_3, "[version!=INT]"));
  FUNC_2(VAR_3, &VAR_6);
  return;
 }

 switch (VAR_6.data.integer) {
 case 130:
 case 129:
 case 128:
  if (VAR_3->ndo_vflag)
   FUNC_0((VAR_3, "{ %s ", VAR_2[VAR_6.data.integer]));
  break;
 default:
         FUNC_0((VAR_3, "SNMP [version = %d]", VAR_6.data.integer));
  return;
 }
 VAR_8 = VAR_6.data.integer;
 VAR_5 -= VAR_7;
 VAR_4 += VAR_7;

 switch (VAR_8) {
 case 130:
        case 129:
  FUNC_3(VAR_3, VAR_4, VAR_5, VAR_8);
  break;
 case 128:
  FUNC_4(VAR_3, VAR_4, VAR_5);
  break;
 default:
  FUNC_0((VAR_3, "[version = %d]", VAR_6.data.integer));
  break;
 }

 if (VAR_3->ndo_vflag) {
  FUNC_0((VAR_3, "} "));
 }
}
