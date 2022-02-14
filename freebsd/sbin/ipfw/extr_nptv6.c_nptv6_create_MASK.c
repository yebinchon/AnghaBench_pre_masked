
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct in6_addr {int dummy; } ;
struct TYPE_3__ {int count; int objsize; int size; int opheader; } ;
typedef TYPE_1__ ipfw_obj_lheader ;
struct TYPE_4__ {int flags; int plen; int name; int external; int internal; int if_name; int set; } ;
typedef TYPE_2__ ipfw_nptv6_cfg ;
typedef int buf ;


 int FUNC_0 (int *,struct in6_addr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 scalar_t__ FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (struct in6_addr*,int) ;
 int FUNC_9 (char*,int *,int*) ;
 int VAR_7 ;
 int FUNC_10 (int ,char const*,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (char*,char**,int) ;
 int FUNC_14 (char*,int,int,int) ;

__attribute__((used)) static void
FUNC_15(const char *VAR_8, uint8_t VAR_9, int VAR_10, char *VAR_11[])
{
 char VAR_12[sizeof(ipfw_obj_lheader) + sizeof(ipfw_nptv6_cfg)];
 struct in6_addr VAR_13;
 ipfw_nptv6_cfg *VAR_14;
 ipfw_obj_lheader *VAR_15;
 int VAR_16, VAR_17, VAR_18;
 char *VAR_19 = "\0";

 VAR_18 = 0;
 FUNC_7(VAR_12, 0, sizeof(VAR_12));
 VAR_15 = (ipfw_obj_lheader *)VAR_12;
 VAR_14 = (ipfw_nptv6_cfg *)(VAR_15 + 1);
 VAR_14->set = VAR_9;
 VAR_17 = 0;
 while (VAR_10 > 0) {
  VAR_16 = FUNC_6(VAR_7, *VAR_11, "option");
  VAR_10--; VAR_11++;

  switch (VAR_16) {
  case 129:
   FUNC_2("IPv6 prefix required");
   FUNC_9(*VAR_11, &VAR_14->internal, &VAR_18);
   VAR_17 |= VAR_5;
   if (VAR_18 > 0)
    goto check_prefix;
   VAR_10--; VAR_11++;
   break;
  case 130:
   if (VAR_17 & VAR_4)
    FUNC_5(VAR_1,
        "Only one ext_prefix or ext_if allowed");
   FUNC_2("IPv6 prefix required");
   FUNC_9(*VAR_11, &VAR_14->external, &VAR_18);
   VAR_17 |= VAR_4;
   if (VAR_18 > 0)
    goto check_prefix;
   VAR_10--; VAR_11++;
   break;
  case 131:
   if (VAR_17 & VAR_4)
    FUNC_5(VAR_1,
        "Only one ext_prefix or ext_if allowed");
   FUNC_2("Interface name required");
   if (FUNC_11(*VAR_11) >= sizeof(VAR_14->if_name))
    FUNC_5(VAR_1, "Invalid interface name");
   VAR_17 |= VAR_4;
   VAR_14->flags |= VAR_3;
   FUNC_12(VAR_14->if_name, *VAR_11, sizeof(VAR_14->if_name));
   VAR_10--; VAR_11++;
   break;
  case 128:
   FUNC_2("IPv6 prefix length required");
   VAR_18 = FUNC_13(*VAR_11, &VAR_19, 10);
check_prefix:
   if (*VAR_19 != '\0' || VAR_18 < 8 || VAR_18 > 64)
    FUNC_5(VAR_1, "wrong prefix length: %s", *VAR_11);

   if (VAR_14->plen > 0 && VAR_14->plen != VAR_18) {
    FUNC_14("Prefix length mismatch (%d vs %d).  "
        "It was extended up to %d",
        VAR_14->plen, VAR_18, FUNC_1(VAR_18, VAR_14->plen));
    VAR_18 = FUNC_1(VAR_18, VAR_14->plen);
   }
   VAR_14->plen = VAR_18;
   VAR_17 |= VAR_6;
   VAR_10--; VAR_11++;
   break;
  }
 }


 if ((VAR_17 & VAR_5) != VAR_5)
  FUNC_5(VAR_1, "int_prefix required");
 if ((VAR_17 & VAR_4) != VAR_4)
  FUNC_5(VAR_1, "ext_prefix or ext_if required");
 if ((VAR_17 & VAR_6) != VAR_6)
  FUNC_5(VAR_1, "prefixlen required");

 FUNC_8(&VAR_13, VAR_14->plen);
 FUNC_0(&VAR_14->internal, &VAR_13);
 if ((VAR_14->flags & VAR_3) == 0)
  FUNC_0(&VAR_14->external, &VAR_13);

 VAR_15->count = 1;
 VAR_15->objsize = sizeof(*VAR_14);
 VAR_15->size = sizeof(VAR_12);
 FUNC_10(VAR_14->name, VAR_8, sizeof(VAR_14->name));
 if (FUNC_3(VAR_2, &VAR_15->opheader, sizeof(VAR_12)) != 0)
  FUNC_4(VAR_0, "nptv6 instance creation failed");
}
