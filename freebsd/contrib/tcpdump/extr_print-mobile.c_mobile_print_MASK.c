
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_short ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct mobile_ip {int odst; int osrc; int hcheck; int proto; } ;
struct cksum_vec {int len; int const* ptr; } ;
struct TYPE_5__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct mobile_ip const) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct cksum_vec*,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;

void
FUNC_5(netdissect_options *VAR_2, const u_char *VAR_3, u_int VAR_4)
{
 const struct mobile_ip *VAR_5;
 struct cksum_vec VAR_6[1];
 u_short VAR_7,VAR_8;
 u_char VAR_9 =0;

 VAR_5 = (const struct mobile_ip *)VAR_3;

 if (VAR_4 < VAR_0 || !FUNC_2(*VAR_5)) {
  FUNC_1((VAR_2, "[|mobile]"));
  return;
 }
 FUNC_1((VAR_2, "mobile: "));

 VAR_7 = FUNC_0(&VAR_5->proto);
 VAR_8 = FUNC_0(&VAR_5->hcheck);
 if (VAR_7 & VAR_1) {
  VAR_9=1;
 }

 if (VAR_9) {
  FUNC_1((VAR_2, "[S] "));
  if (VAR_2->ndo_vflag)
   FUNC_1((VAR_2, "%s ", FUNC_4(VAR_2, &VAR_5->osrc)));
 } else {
  FUNC_1((VAR_2, "[] "));
 }
 if (VAR_2->ndo_vflag) {
  FUNC_1((VAR_2, "> %s ", FUNC_4(VAR_2, &VAR_5->odst)));
  FUNC_1((VAR_2, "(oproto=%d)", VAR_7>>8));
 }
 VAR_6[0].ptr = (const uint8_t *)(const void *)VAR_5;
 VAR_6[0].len = VAR_9 ? 12 : 8;
 if (FUNC_3(VAR_6, 1)!=0) {
  FUNC_1((VAR_2, " (bad checksum %d)", VAR_8));
 }
}
