
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int count; int objsize; int size; int opheader; } ;
typedef TYPE_1__ ipfw_obj_lheader ;
struct TYPE_4__ {int plen6; int name; int flags; int prefix6; int ntlv6; int ntlv4; int set; } ;
typedef TYPE_2__ ipfw_nat64stl_cfg ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;







 scalar_t__ FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,char*,int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (char*,int ,int) ;
 int VAR_9 ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (int ,char const*,int) ;
 int FUNC_10 (char*,int *,int) ;
 int FUNC_11 (int *,char*,int ,int) ;

__attribute__((used)) static void
FUNC_12(const char *VAR_10, uint8_t VAR_11, int VAR_12, char *VAR_13[])
{
 char VAR_14[sizeof(ipfw_obj_lheader) + sizeof(ipfw_nat64stl_cfg)];
 ipfw_nat64stl_cfg *VAR_15;
 ipfw_obj_lheader *VAR_16;
 int VAR_17, VAR_18;
 char *VAR_19;

 FUNC_7(VAR_14, 0, sizeof(VAR_14));
 VAR_16 = (ipfw_obj_lheader *)VAR_14;
 VAR_15 = (ipfw_nat64stl_cfg *)(VAR_16 + 1);


 FUNC_5(VAR_0, "64:ff9b::", &VAR_15->prefix6);
 VAR_15->plen6 = 96;
 VAR_15->set = VAR_11;
 VAR_18 = VAR_4;
 while (VAR_12 > 0) {
  VAR_17 = FUNC_4(VAR_9, *VAR_13, "option");
  VAR_12--; VAR_13++;

  switch (VAR_17) {
  case 129:
   FUNC_0("table name required");
   FUNC_11(&VAR_15->ntlv4, *VAR_13, VAR_11, 4);
   VAR_18 |= VAR_5;
   VAR_12--; VAR_13++;
   break;
  case 128:
   FUNC_0("table name required");
   FUNC_11(&VAR_15->ntlv6, *VAR_13, VAR_11, 6);
   VAR_18 |= VAR_6;
   VAR_12--; VAR_13++;
   break;
  case 132:
   FUNC_0("IPv6 prefix6 required");
   if ((VAR_19 = FUNC_8(*VAR_13, '/')) != ((void*)0))
    *VAR_19++ = '\0';
   if (FUNC_5(VAR_0, *VAR_13, &VAR_15->prefix6) != 1)
    FUNC_3(VAR_2,
        "Bad prefix: %s", *VAR_13);
   VAR_15->plen6 = FUNC_10(VAR_19, ((void*)0), 10);
   if (FUNC_6(&VAR_15->prefix6,
       VAR_15->plen6) != 0)
    FUNC_3(VAR_2,
        "Bad prefix length: %s", VAR_19);
   VAR_18 |= VAR_4;
   VAR_12--; VAR_13++;
   break;
  case 134:
   VAR_15->flags |= VAR_8;
   break;
  case 133:
   VAR_15->flags &= ~VAR_8;
   break;
  case 131:
   VAR_15->flags |= VAR_7;
   break;
  case 130:
   VAR_15->flags &= ~VAR_7;
   break;
  }
 }


 if ((VAR_18 & VAR_5) != VAR_5)
  FUNC_3(VAR_2, "table4 required");
 if ((VAR_18 & VAR_6) != VAR_6)
  FUNC_3(VAR_2, "table6 required");
 if ((VAR_18 & VAR_4) != VAR_4)
  FUNC_3(VAR_2, "prefix6 required");

 VAR_16->count = 1;
 VAR_16->objsize = sizeof(*VAR_15);
 VAR_16->size = sizeof(VAR_14);
 FUNC_9(VAR_15->name, VAR_10, sizeof(VAR_15->name));
 if (FUNC_1(VAR_3, &VAR_16->opheader, sizeof(VAR_14)) != 0)
  FUNC_2(VAR_1, "nat64stl instance creation failed");
}
