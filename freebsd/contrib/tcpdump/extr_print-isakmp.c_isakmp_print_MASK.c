
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
struct isakmp {int vers; int r_ck; int i_ck; int msgid; } ;
struct TYPE_8__ {int ndo_vflag; int * ndo_snapend; scalar_t__ ndo_espsecret; int * ndo_sa_list_head; } ;
typedef TYPE_1__ netdissect_options ;
typedef int base ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct isakmp*,struct isakmp const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int const*,int) ;
 int FUNC_4 (TYPE_1__*,int const*,int ,int const*,struct isakmp*) ;
 int FUNC_5 (TYPE_1__*,int const*,int ,int const*,struct isakmp*) ;

void
FUNC_6(netdissect_options *VAR_4,
      const u_char *VAR_5, u_int VAR_6,
      const u_char *VAR_7)
{
 const struct isakmp *VAR_8;
 struct isakmp VAR_9;
 const u_char *VAR_10;
 int VAR_11, VAR_12;
 VAR_8 = (const struct isakmp *)VAR_5;
 VAR_10 = VAR_4->ndo_snapend;

 if ((const struct isakmp *)VAR_10 < VAR_8 + 1) {
  FUNC_0((VAR_4,"[|isakmp]"));
  return;
 }

 FUNC_1(&VAR_9, VAR_8, sizeof(VAR_9));

 FUNC_0((VAR_4,"isakmp"));
 VAR_11 = (VAR_9.vers & VAR_0)
  >> VAR_1;
 VAR_12 = (VAR_9.vers & VAR_2)
  >> VAR_3;

 if (VAR_4->ndo_vflag) {
  FUNC_0((VAR_4," %d.%d", VAR_11, VAR_12));
 }

 if (VAR_4->ndo_vflag) {
  FUNC_0((VAR_4," msgid "));
  FUNC_3(VAR_4, (const uint8_t *)&VAR_9.msgid, sizeof(VAR_9.msgid));
 }

 if (1 < VAR_4->ndo_vflag) {
  FUNC_0((VAR_4," cookie "));
  FUNC_3(VAR_4, (const uint8_t *)&VAR_9.i_ck, sizeof(VAR_9.i_ck));
  FUNC_0((VAR_4,"->"));
  FUNC_3(VAR_4, (const uint8_t *)&VAR_9.r_ck, sizeof(VAR_9.r_ck));
 }
 FUNC_0((VAR_4,":"));

 switch(VAR_11) {
 case 129:
  FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, &VAR_9);
  break;

 case 128:
  FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7, &VAR_9);
  break;
 }
}
