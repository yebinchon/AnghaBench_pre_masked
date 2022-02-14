
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct ospf6hdr {int ospf6_version; scalar_t__ ospf6_instanceid; scalar_t__ ospf6_areaid; scalar_t__ ospf6_routerid; scalar_t__ ospf6_len; scalar_t__ ospf6_type; } ;
struct TYPE_7__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__*) ;
 int FUNC_5 (TYPE_1__*,struct ospf6hdr const*,int const*) ;
 int FUNC_6 (TYPE_1__*,struct ospf6hdr const*,int const*,int) ;
 int VAR_0 ;
 char* FUNC_7 (int ,char*,scalar_t__) ;
 int VAR_1 ;

void
FUNC_8(netdissect_options *VAR_2,
            register const u_char *VAR_3, register u_int VAR_4)
{
 register const struct ospf6hdr *VAR_5;
 register const u_char *VAR_6;
 register const char *VAR_7;
 uint16_t VAR_8;

 VAR_5 = (const struct ospf6hdr *)VAR_3;



 FUNC_3(VAR_5->ospf6_type);
 VAR_7 = FUNC_7(VAR_0, "unknown packet type (%u)", VAR_5->ospf6_type);
 FUNC_2((VAR_2, "OSPFv%u, %s, length %d", VAR_5->ospf6_version, VAR_7, VAR_4));
 if (*VAR_7 == 'u') {
  return;
 }

 if(!VAR_2->ndo_vflag) {
  return;
 }


 FUNC_3(VAR_5->ospf6_len);
 VAR_8 = FUNC_0(&VAR_5->ospf6_len);
 if (VAR_8 > VAR_4) {
  FUNC_2((VAR_2, " [len %d]", VAR_8));
  return;
 }
 VAR_6 = VAR_3 + VAR_8;

 FUNC_3(VAR_5->ospf6_routerid);
 FUNC_2((VAR_2, "\n\tRouter-ID %s", FUNC_4(VAR_2, &VAR_5->ospf6_routerid)));

 FUNC_3(VAR_5->ospf6_areaid);
 if (FUNC_1(&VAR_5->ospf6_areaid) != 0)
  FUNC_2((VAR_2, ", Area %s", FUNC_4(VAR_2, &VAR_5->ospf6_areaid)));
 else
  FUNC_2((VAR_2, ", Backbone Area"));
 FUNC_3(VAR_5->ospf6_instanceid);
 if (VAR_5->ospf6_instanceid)
  FUNC_2((VAR_2, ", Instance %u", VAR_5->ospf6_instanceid));


 switch (VAR_5->ospf6_version) {

 case 3:

  if (FUNC_5(VAR_2, VAR_5, VAR_6) ||
      FUNC_6(VAR_2, VAR_5, VAR_6, VAR_4 - VAR_8))
   goto trunc;
  break;
 }

 return;
trunc:
 FUNC_2((VAR_2, "%s", VAR_1));
}
