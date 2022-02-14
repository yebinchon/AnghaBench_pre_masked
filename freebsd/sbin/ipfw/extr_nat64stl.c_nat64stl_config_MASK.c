
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int opheader; int ntlv; } ;
typedef TYPE_1__ ipfw_obj_header ;
struct TYPE_4__ {int flags; int ntlv6; int ntlv4; } ;
typedef TYPE_2__ ipfw_nat64stl_cfg ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;






 scalar_t__ FUNC_1 (int ,int *,size_t*) ;
 scalar_t__ FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (char**,int ,int) ;
 int VAR_5 ;
 int FUNC_7 (int *,char const*,int ) ;
 int FUNC_8 (int *,char*,int ,int) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_6, uint8_t VAR_7, int VAR_8, char **VAR_9)
{
 char VAR_10[sizeof(ipfw_obj_header) + sizeof(ipfw_nat64stl_cfg)];
 ipfw_nat64stl_cfg *VAR_11;
 ipfw_obj_header *VAR_12;
 char *VAR_13;
 size_t VAR_14;
 int VAR_15;

 if (VAR_8 == 0)
  FUNC_4(VAR_1, "config options required");
 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_12 = (ipfw_obj_header *)VAR_10;
 VAR_11 = (ipfw_nat64stl_cfg *)(VAR_12 + 1);
 VAR_14 = sizeof(VAR_10);

 FUNC_7(&VAR_12->ntlv, VAR_6, VAR_7);
 if (FUNC_1(VAR_2, &VAR_12->opheader, &VAR_14) != 0)
  FUNC_3(VAR_0, "failed to get config for instance %s", VAR_6);

 while (VAR_8 > 0) {
  VAR_15 = FUNC_5(VAR_5, *VAR_9, "option");
  VAR_13 = *VAR_9;
  VAR_8--; VAR_9++;

  switch (VAR_15) {
  case 133:
   VAR_11->flags |= VAR_4;
   break;
  case 132:
   VAR_11->flags &= ~VAR_4;
   break;
  case 131:
   VAR_11->flags |= VAR_3;
   break;
  case 130:
   VAR_11->flags &= ~VAR_3;
   break;
  default:
   FUNC_4(VAR_1, "Can't change %s option", VAR_13);
  }
 }

 if (FUNC_2(VAR_2, &VAR_12->opheader, sizeof(VAR_10)) != 0)
  FUNC_3(VAR_0, "nat64stl instance configuration failed");
}
