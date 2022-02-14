
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_9__ {int* str; int integer; scalar_t__ raw; } ;
struct be {scalar_t__ type; int asnlen; TYPE_1__ data; } ;
struct TYPE_10__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_2__ netdissect_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int const*,int,struct be*) ;
 int FUNC_2 (TYPE_2__*,struct be*) ;
 int FUNC_3 (TYPE_2__*,int const*,int,int) ;
 int FUNC_4 (TYPE_2__*,int*,int) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_3,
            const u_char *VAR_4, u_int VAR_5)
{
 struct be VAR_6;
 int VAR_7 = 0;
 u_char VAR_8;
 int VAR_9;
 const u_char *VAR_10 = VAR_4;
 int VAR_11 = VAR_5;


 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_1) {
  FUNC_0((VAR_3, "[!message]"));
  FUNC_2(VAR_3, &VAR_6);
  return;
 }
 VAR_5 = VAR_6.asnlen;
 VAR_4 = (const u_char *)VAR_6.data.raw;

 if (VAR_3->ndo_vflag) {
  FUNC_0((VAR_3, "{ "));
 }


 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_0) {
  FUNC_0((VAR_3, "[msgID!=INT]"));
  FUNC_2(VAR_3, &VAR_6);
  return;
 }
 VAR_5 -= VAR_7;
 VAR_4 += VAR_7;


 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_0) {
  FUNC_0((VAR_3, "[msgMaxSize!=INT]"));
  FUNC_2(VAR_3, &VAR_6);
  return;
 }
 VAR_5 -= VAR_7;
 VAR_4 += VAR_7;


 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_2) {
  FUNC_0((VAR_3, "[msgFlags!=STR]"));
  FUNC_2(VAR_3, &VAR_6);
  return;
 }
 if (VAR_6.asnlen != 1) {
  FUNC_0((VAR_3, "[msgFlags size %d]", VAR_6.asnlen));
  return;
 }
 VAR_8 = VAR_6.data.str[0];
 if (VAR_8 != 0x00 && VAR_8 != 0x01 && VAR_8 != 0x03
     && VAR_8 != 0x04 && VAR_8 != 0x05 && VAR_8 != 0x07) {
  FUNC_0((VAR_3, "[msgFlags=0x%02X]", VAR_8));
  return;
 }
 VAR_5 -= VAR_7;
 VAR_4 += VAR_7;

 FUNC_0((VAR_3, "F=%s%s%s ",
           VAR_8 & 0x01 ? "a" : "",
           VAR_8 & 0x02 ? "p" : "",
           VAR_8 & 0x04 ? "r" : ""));


 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_0) {
  FUNC_0((VAR_3, "[msgSecurityModel!=INT]"));
  FUNC_2(VAR_3, &VAR_6);
  return;
 }
 VAR_9 = VAR_6.data.integer;
 VAR_5 -= VAR_7;
 VAR_4 += VAR_7;

 if ((u_int)VAR_7 < VAR_5)
  FUNC_0((VAR_3, "[%d extra after message SEQ]", VAR_5 - VAR_7));

 if (VAR_3->ndo_vflag) {
  FUNC_0((VAR_3, "} "));
 }

 if (VAR_9 == 3) {
     if (VAR_3->ndo_vflag) {
  FUNC_0((VAR_3, "{ USM "));
     }
 } else {
     FUNC_0((VAR_3, "[security model %d]", VAR_9));
            return;
 }

 VAR_4 = VAR_10 + (VAR_4 - VAR_10);
 VAR_5 = VAR_11 - (VAR_4 - VAR_10);


 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6)) < 0)
  return;
 if (VAR_6.type != VAR_2) {
  FUNC_0((VAR_3, "[msgSecurityParameters!=STR]"));
  FUNC_2(VAR_3, &VAR_6);
  return;
 }
 VAR_5 -= VAR_7;
 VAR_4 += VAR_7;

 if (VAR_9 == 3) {
     FUNC_4(VAR_3, VAR_6.data.str, VAR_6.asnlen);
     if (VAR_3->ndo_vflag) {
  FUNC_0((VAR_3, "} "));
     }
 }

 if (VAR_3->ndo_vflag) {
     FUNC_0((VAR_3, "{ ScopedPDU "));
 }

 FUNC_3(VAR_3, VAR_4, VAR_5, 3);

 if (VAR_3->ndo_vflag) {
  FUNC_0((VAR_3, "} "));
 }
}
