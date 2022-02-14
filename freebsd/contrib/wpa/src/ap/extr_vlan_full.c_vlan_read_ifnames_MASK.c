
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtattr {scalar_t__ rta_type; int rta_len; } ;
struct nlmsghdr {int nlmsg_len; } ;
struct ifinfomsg {int ifi_flags; int ifi_family; int ifi_index; } ;
struct hostapd_data {int dummy; } ;
typedef int ifname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 struct ifinfomsg* FUNC_1 (struct nlmsghdr*) ;
 int FUNC_2 (int) ;
 struct rtattr* FUNC_3 (struct rtattr*,int) ;
 scalar_t__ FUNC_4 (struct rtattr*,int) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (char*,struct hostapd_data*) ;
 int FUNC_9 (char*,struct hostapd_data*) ;
 int FUNC_10 (int ,char*,char*,int ,char*,int ,int,char*,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_11(struct nlmsghdr *VAR_7, size_t VAR_8, int VAR_9,
    struct hostapd_data *VAR_10)
{
 struct ifinfomsg *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 struct rtattr *VAR_15;
 char VAR_16[VAR_5 + 1];

 if (VAR_8 < sizeof(*VAR_11))
  return;

 VAR_11 = FUNC_1(VAR_7);

 VAR_13 = FUNC_0(sizeof(struct ifinfomsg));

 VAR_12 = VAR_7->nlmsg_len - VAR_13;
 if (VAR_12 < 0)
  return;

 VAR_15 = (struct rtattr *) (((char *) VAR_11) + VAR_13);

 FUNC_7(VAR_16, 0, sizeof(VAR_16));
 VAR_14 = FUNC_2(sizeof(struct rtattr));
 while (FUNC_4(VAR_15, VAR_12)) {
  if (VAR_15->rta_type == VAR_4) {
   int VAR_17 = VAR_15->rta_len - VAR_14;
   if (VAR_17 < 0)
    break;

   if ((size_t) VAR_17 >= sizeof(VAR_16))
    VAR_17 = sizeof(VAR_16) - 1;
   FUNC_6(VAR_16, ((char *) VAR_15) + VAR_14, VAR_17);

  }

  VAR_15 = FUNC_3(VAR_15, VAR_12);
 }

 if (!VAR_16[0])
  return;
 if (VAR_9 && FUNC_5(VAR_16)) {


  return;
 }

 FUNC_10(VAR_6,
     "VLAN: RTM_%sLINK: ifi_index=%d ifname=%s ifi_family=%d ifi_flags=0x%x (%s%s%s%s)",
     VAR_9 ? "DEL" : "NEW",
     VAR_11->ifi_index, VAR_16, VAR_11->ifi_family, VAR_11->ifi_flags,
     (VAR_11->ifi_flags & VAR_3) ? "[UP]" : "",
     (VAR_11->ifi_flags & VAR_2) ? "[RUNNING]" : "",
     (VAR_11->ifi_flags & VAR_1) ? "[LOWER_UP]" : "",
     (VAR_11->ifi_flags & VAR_0) ? "[DORMANT]" : "");

 if (VAR_9)
  FUNC_8(VAR_16, VAR_10);
 else
  FUNC_9(VAR_16, VAR_10);
}
