
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_9__ {scalar_t__ raw; } ;
struct be {scalar_t__ type; scalar_t__ asnlen; int id; TYPE_1__ data; } ;
struct TYPE_10__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_2__ netdissect_options ;


 scalar_t__ VAR_0 ;





 int FUNC_0 (TYPE_2__*) ;


 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (TYPE_2__*,int const*,scalar_t__,struct be*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,struct be*) ;
 int FUNC_3 (TYPE_2__*,int,int const*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int const*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_3,
          const u_char *VAR_4, u_int VAR_5, int VAR_6)
{
 struct be VAR_7;
 int VAR_8 = 0;


 if ((VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_7)) < 0)
  return;
 if (VAR_7.type != VAR_0) {
  FUNC_0((VAR_3, "[no PDU]"));
  return;
 }
 if ((u_int)VAR_8 < VAR_5)
  FUNC_0((VAR_3, "[%d extra after PDU]", VAR_5 - VAR_8));
 if (VAR_3->ndo_vflag) {
  FUNC_0((VAR_3, "{ "));
 }
 if (FUNC_2(VAR_3, &VAR_7) < 0)
  return;
 FUNC_0((VAR_3, " "));

 VAR_5 = VAR_7.asnlen;
 VAR_4 = (const u_char *)VAR_7.data.raw;

 if (VAR_6 == VAR_1 &&
     (VAR_7.id == 136 || VAR_7.id == 132 ||
      VAR_7.id == 128 || VAR_7.id == 131)) {
         FUNC_0((VAR_3, "[v2 PDU in v1 message]"));
  return;
 }

 if (VAR_6 == VAR_2 && VAR_7.id == 129) {
  FUNC_0((VAR_3, "[v1 PDU in v2 message]"));
  return;
 }

 switch (VAR_7.id) {
 case 129:
  FUNC_4(VAR_3, VAR_4, VAR_5);
  break;
 case 134:
 case 135:
 case 133:
 case 130:
 case 136:
 case 132:
 case 128:
 case 131:
  FUNC_3(VAR_3, VAR_7.id, VAR_4, VAR_5);
  break;
 }

 if (VAR_3->ndo_vflag) {
  FUNC_0((VAR_3, " } "));
 }
}
