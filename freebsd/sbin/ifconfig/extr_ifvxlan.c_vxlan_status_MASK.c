
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; int sa_len; } ;
struct TYPE_5__ {struct sockaddr sa; } ;
struct TYPE_4__ {struct sockaddr sa; } ;
struct ifvxlancfg {int vxlc_vni; int vxlc_port_min; int vxlc_port_max; int vxlc_ttl; int vxlc_ftable_cnt; int vxlc_ftable_max; int vxlc_ftable_timeout; scalar_t__ vxlc_learn; TYPE_2__ vxlc_remote_sa; TYPE_1__ vxlc_local_sa; } ;
typedef int srcport ;
typedef int src ;
typedef int dstport ;
typedef int dst ;
typedef int cfg ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ifvxlancfg*,int) ;
 scalar_t__ FUNC_3 (int,int ,struct ifvxlancfg*,int,int ) ;
 scalar_t__ FUNC_4 (struct sockaddr*,int ,char*,int,char*,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_8(int VAR_8)
{
 struct ifvxlancfg VAR_9;
 char VAR_10[VAR_1], VAR_11[VAR_1];
 char VAR_12[VAR_2], VAR_13[VAR_2];
 struct sockaddr *VAR_14, *VAR_15;
 int VAR_16, VAR_17, VAR_18;

 FUNC_2(&VAR_9, sizeof(VAR_9));

 if (FUNC_3(VAR_8, VAR_5, &VAR_9, sizeof(VAR_9), 0) < 0)
  return;

 VAR_16 = VAR_9.vxlc_vni;
 VAR_14 = &VAR_9.vxlc_local_sa.sa;
 VAR_15 = &VAR_9.vxlc_remote_sa.sa;
 VAR_18 = VAR_15->sa_family == VAR_0;


 if (VAR_16 >= VAR_6)
  return;

 if (FUNC_4(VAR_14, VAR_14->sa_len, VAR_10, sizeof(VAR_10),
     VAR_12, sizeof(VAR_12), VAR_3 | VAR_4) != 0)
  VAR_10[0] = VAR_12[0] = '\0';
 if (FUNC_4(VAR_15, VAR_15->sa_len, VAR_11, sizeof(VAR_11),
     VAR_13, sizeof(VAR_13), VAR_3 | VAR_4) != 0)
  VAR_11[0] = VAR_13[0] = '\0';

 if (!VAR_18) {
  struct sockaddr_in *VAR_19 = (struct sockaddr_in *)VAR_15;
  VAR_17 = FUNC_1(FUNC_5(VAR_19->sin_addr.s_addr));
 } else {
  struct sockaddr_in6 *VAR_20 = (struct sockaddr_in6 *)VAR_15;
  VAR_17 = FUNC_0(&VAR_20->sin6_addr);
 }

 FUNC_6("\tvxlan vni %d", VAR_16);
 FUNC_6(" local %s%s%s:%s", VAR_18 ? "[" : "", VAR_10, VAR_18 ? "]" : "",
     VAR_12);
 FUNC_6(" %s %s%s%s:%s", VAR_17 ? "group" : "remote", VAR_18 ? "[" : "",
     VAR_11, VAR_18 ? "]" : "", VAR_13);

 if (VAR_7) {
  FUNC_6("\n\t\tconfig: ");
  FUNC_6("%slearning portrange %d-%d ttl %d",
      VAR_9.vxlc_learn ? "" : "no", VAR_9.vxlc_port_min,
      VAR_9.vxlc_port_max, VAR_9.vxlc_ttl);
  FUNC_6("\n\t\tftable: ");
  FUNC_6("cnt %d max %d timeout %d",
      VAR_9.vxlc_ftable_cnt, VAR_9.vxlc_ftable_max,
      VAR_9.vxlc_ftable_timeout);
 }

 FUNC_7('\n');
}
