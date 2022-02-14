
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int usage_args ;
typedef scalar_t__ uint16_t ;
struct TYPE_9__ {int lid; } ;
struct sa_handle {TYPE_1__ dport; } ;
struct query_params {int reversible; int numb_path; int qos_class; int sl; int proxy_join; int cpi; void* dlid; void* slid; int sa_dgid; scalar_t__ with_grh; scalar_t__ hop_limit; } ;
struct query_cmd {char* name; char* alias; char* usage; scalar_t__ query_type; int (* handler ) (struct query_cmd const*,struct sa_handle*,struct query_params*,int,char**) ;} ;
struct ibdiag_opt {char* member_0; char member_1; int member_2; char* member_3; char* member_4; } ;
struct TYPE_10__ {int member_0; } ;
typedef TYPE_2__ ibmad_gid_t ;
struct TYPE_11__ {int lid; int member_0; } ;
typedef TYPE_3__ ib_portid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;





 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 scalar_t__* VAR_12 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 struct query_cmd* FUNC_5 (char*) ;
 struct query_cmd* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (scalar_t__*) ;
 void* FUNC_9 (struct sa_handle*,scalar_t__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (int,char**,struct query_params*,char*,struct ibdiag_opt const*,int ,char*,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_2__*,int *,int) ;
 int FUNC_13 (TYPE_2__*,int *,int) ;
 int FUNC_14 (struct query_params*,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ) ;
 scalar_t__ VAR_19 ;
 int FUNC_17 (struct sa_handle*,struct query_params*) ;
 int FUNC_18 (struct sa_handle*,struct query_params*) ;
 int FUNC_19 (struct sa_handle*,struct query_params*) ;
 int FUNC_20 (struct sa_handle*,struct query_params*) ;
 int VAR_20 ;
 struct query_cmd* VAR_21 ;
 int FUNC_21 (struct sa_handle*,struct query_params*) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 char* VAR_27 ;
 int FUNC_22 (int ,int ,TYPE_3__*,int*,int ) ;
 int FUNC_23 (struct sa_handle*) ;
 struct sa_handle* FUNC_24 () ;
 int FUNC_25 (struct sa_handle*,int,TYPE_2__*) ;
 int FUNC_26 (struct sa_handle*,TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_27 (char*,int,char*,...) ;
 int FUNC_28 (char*,char*) ;
 scalar_t__* VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_29 (char*,int *,int ) ;
 int FUNC_30 (struct query_cmd const*,struct sa_handle*,struct query_params*,int,char**) ;
 int FUNC_31 () ;
 scalar_t__ FUNC_32 () ;

int FUNC_33(int VAR_30, char **VAR_31)
{
 ib_portid_t VAR_32 = { 0 };
 int VAR_33 = 0;
 int VAR_34 = 0;
 char VAR_35[1024];
 struct sa_handle * VAR_36;
 struct query_params VAR_37;
 const struct query_cmd *VAR_38;
 int VAR_39;
 int VAR_40;

 const struct ibdiag_opt VAR_41[] = {
  {"p", 'p', 0, ((void*)0), "get PathRecord info"},
  {"N", 'N', 0, ((void*)0), "get NodeRecord info"},
  {"L", 'L', 0, ((void*)0), "return the Lids of the name specified"},
  {"l", 'l', 0, ((void*)0),
   "return the unique Lid of the name specified"},
  {"G", 'G', 0, ((void*)0), "return the Guids of the name specified"},
  {"O", 'O', 0, ((void*)0), "return name for the Lid specified"},
  {"U", 'U', 0, ((void*)0), "return name for the Guid specified"},
  {"s", 's', 0, ((void*)0), "return the PortInfoRecords with isSM or"
   " isSMdisabled capability mask bit on"},
  {"g", 'g', 0, ((void*)0), "get multicast group info"},
  {"m", 'm', 0, ((void*)0), "get multicast member info (if multicast"
   " group specified, list member GIDs only for group specified,"
   " for example 'saquery -m 0xC000')"},
  {"x", 'x', 0, ((void*)0), "get LinkRecord info"},
  {"c", 'c', 0, ((void*)0), "get the SA's class port info"},
  {"S", 'S', 0, ((void*)0), "get ServiceRecord info"},
  {"I", 'I', 0, ((void*)0), "get InformInfoRecord (subscription) info"},
  {"list", 'D', 0, ((void*)0), "the node desc of the CA's"},
  {"with-grh", 23, 0, ((void*)0), "add GRH to path record query"},
  {"sa-dgid", 24, 1, "<gid>",
   "Set destination GID (in IPv6 format) in the GRH"},
  {"src-to-dst", 1, 1, "<src:dst>", "get a PathRecord for"
   " <src:dst> where src and dst are either node names or LIDs"},
  {"sgid-to-dgid", 2, 1, "<sgid-dgid>", "get a PathRecord for"
   " <sgid-dgid> where sgid and dgid are addresses in IPv6 format"},
  {"node-name-map", 3, 1, "<file>",
   "specify a node name map file"},
  {"smkey", 4, 1, "<val>",
   "SA SM_Key value for the query."
   " If non-numeric value (like 'x') is specified then"
   " saquery will prompt for a value. "
   " Default (when not specified here or in ibdiag.conf) is to "
   " use SM_Key == 0 (or \"untrusted\")"},
  {"slid", 5, 1, "<lid>", "Source LID (PathRecord)"},
  {"dlid", 6, 1, "<lid>", "Destination LID (PathRecord)"},
  {"mlid", 7, 1, "<lid>", "Multicast LID (MCMemberRecord)"},
  {"sgid", 14, 1, "<gid>",
   "Source GID (IPv6 format) (PathRecord)"},
  {"dgid", 15, 1, "<gid>",
   "Destination GID (IPv6 format) (PathRecord)"},
  {"gid", 16, 1, "<gid>", "Port GID (MCMemberRecord)"},
  {"mgid", 17, 1, "<gid>", "Multicast GID (MCMemberRecord)"},
  {"reversible", 'r', 1, ((void*)0), "Reversible path (PathRecord)"},
  {"numb_path", 'n', 1, ((void*)0), "Number of paths (PathRecord)"},
  {"pkey", 18, 1, ((void*)0), "P_Key (PathRecord, MCMemberRecord)."
   " If non-numeric value (like 'x') is specified then"
   " saquery will prompt for a value"},
  {"qos_class", 'Q', 1, ((void*)0), "QoS Class (PathRecord)"},
  {"sl", 19, 1, ((void*)0),
   "Service level (PathRecord, MCMemberRecord)"},
  {"mtu", 'M', 1, ((void*)0),
   "MTU and selector (PathRecord, MCMemberRecord)"},
  {"rate", 'R', 1, ((void*)0),
   "Rate and selector (PathRecord, MCMemberRecord)"},
  {"pkt_lifetime", 20, 1, ((void*)0),
   "Packet lifetime and selector (PathRecord, MCMemberRecord)"},
  {"qkey", 'q', 1, ((void*)0), "Q_Key (MCMemberRecord)."
   " If non-numeric value (like 'x') is specified then"
   " saquery will prompt for a value"},
  {"tclass", 'T', 1, ((void*)0),
   "Traffic Class (PathRecord, MCMemberRecord)"},
  {"flow_label", 'F', 1, ((void*)0),
   "Flow Label (PathRecord, MCMemberRecord)"},
  {"hop_limit", 'H', 1, ((void*)0),
   "Hop limit (PathRecord, MCMemberRecord)"},
  {"scope", 21, 1, ((void*)0), "Scope (MCMemberRecord)"},
  {"join_state", 'J', 1, ((void*)0), "Join state (MCMemberRecord)"},
  {"proxy_join", 'X', 1, ((void*)0), "Proxy join (MCMemberRecord)"},
  {"service_id", 22, 1, ((void*)0), "ServiceID (PathRecord)"},
  {0}
 };

 FUNC_14(&VAR_37, 0, sizeof VAR_37);
 VAR_37.hop_limit = 0;
 VAR_37.reversible = -1;
 VAR_37.numb_path = -1;
 VAR_37.qos_class = -1;
 VAR_37.sl = -1;
 VAR_37.proxy_join = -1;

 VAR_40 = FUNC_28(VAR_35, "[query-name] [<name> | <lid> | <guid>]\n"
      "\nSupported query names (and aliases):\n");
 for (VAR_38 = VAR_21; VAR_38->name; VAR_38++) {
  VAR_40 += FUNC_27(VAR_35 + VAR_40, sizeof(VAR_35) - VAR_40,
         "  %s (%s) %s\n", VAR_38->name,
         VAR_38->alias ? VAR_38->alias : "",
         VAR_38->usage ? VAR_38->usage : "");
  if (VAR_40 >= sizeof(VAR_35))
   FUNC_4(-1);
 }
 FUNC_27(VAR_35 + VAR_40, sizeof(VAR_35) - VAR_40,
   "\n  Queries node records by default.");

 VAR_38 = ((void*)0);
 VAR_15 = VAR_1;

 FUNC_10(VAR_30, VAR_31, &VAR_37, "DGLsy", VAR_41, VAR_20,
       VAR_35, ((void*)0));

 VAR_30 -= VAR_19;
 VAR_31 += VAR_19;

 if (!VAR_22 && VAR_11 == VAR_9) {
  if (!VAR_30 || !(VAR_38 = FUNC_5(VAR_31[0])))
   VAR_22 = VAR_4;
  else {
   VAR_22 = VAR_38->query_type;
   VAR_30--;
   VAR_31++;
  }
 }

 if (VAR_30) {
  if (VAR_18 == VAR_8) {
   VAR_25 = (uint16_t) FUNC_29(VAR_31[0], ((void*)0), 0);
   VAR_26++;
  } else if (VAR_18 == VAR_7) {
   VAR_23 = FUNC_29(VAR_31[0], ((void*)0), 0);
   VAR_24++;
  } else
   VAR_27 = VAR_31[0];
 }

 if ((VAR_18 == VAR_6 ||
      VAR_18 == VAR_10 ||
      VAR_18 == VAR_3) && !VAR_27) {
  FUNC_7(VAR_29, "ERROR: name not specified\n");
  FUNC_11();
 }

 if (VAR_18 == VAR_8 && !VAR_26) {
  FUNC_7(VAR_29, "ERROR: lid not specified\n");
  FUNC_11();
 }

 if (VAR_18 == VAR_7 && !VAR_24) {
  FUNC_7(VAR_29, "ERROR: guid not specified\n");
  FUNC_11();
 }


 if (VAR_18 == VAR_8 && !VAR_25) {
  FUNC_7(VAR_29, "ERROR: lid invalid\n");
  FUNC_11();
 }

 if (FUNC_32())
  FUNC_0("Failed to initialized umad library");
 VAR_36 = FUNC_24();
 if (!VAR_36)
  FUNC_1("Failed to bind to the SA");

 if (VAR_37.with_grh) {
  ibmad_gid_t VAR_42 = { 0 };




  if (!FUNC_12(&VAR_42, &VAR_37.sa_dgid, sizeof(ibmad_gid_t))) {
   if ((VAR_39 = FUNC_22(VAR_13, VAR_14, &VAR_32,
         &VAR_33, 0)) < 0) {
    FUNC_7(VAR_29, "can't resolve self port %s\n",
     VAR_31[0]);
    goto error;
   }
   if ((VAR_39 = FUNC_26(VAR_36, &VAR_42, VAR_32.lid,
        VAR_36->dport.lid)) > 0) {
    FUNC_7(VAR_29,
     "Failed to query SA:PathRecord\n");
    goto error;
   }
  } else
   FUNC_13(&VAR_42, &VAR_37.sa_dgid, sizeof(ibmad_gid_t));

  if ((VAR_39 = FUNC_25(VAR_36, 1, &VAR_42)) < 0) {
   FUNC_7(VAR_29, "Failed to set GRH\n");
   goto error;
  }
 }

 VAR_16 = FUNC_16(VAR_17);

 if (VAR_28 && *VAR_28)
  VAR_37.slid = FUNC_9(VAR_36, VAR_28);
 if (VAR_12 && *VAR_12)
  VAR_37.dlid = FUNC_9(VAR_36, VAR_12);

 if (VAR_11 == 132 ||
     VAR_22 == VAR_0 ||
     VAR_22 == VAR_5)
  VAR_34 = 1;

 if (VAR_34 && (VAR_39 = FUNC_21(VAR_36, &VAR_37)) != 0) {
  FUNC_7(VAR_29, "Failed to query SA:ClassPortInfo\n");
  goto error;
 }

 switch (VAR_11) {
 case 128:
  VAR_39 = FUNC_20(VAR_36, &VAR_37);
  break;
 case 132:
  FUNC_3(&VAR_37.cpi);
  VAR_39 = 0;
  break;
 case 131:
  VAR_39 = FUNC_17(VAR_36, &VAR_37);
  break;
 case 130:
  VAR_39 = FUNC_18(VAR_36, &VAR_37);
  break;
 case 129:
  VAR_39 = FUNC_19(VAR_36, &VAR_37);
  break;
 default:
  if ((!VAR_38 && !(VAR_38 = FUNC_6(VAR_22)))
      || !VAR_38->handler) {
   FUNC_7(VAR_29, "Unknown query type %d\n",
    FUNC_15(VAR_22));
   VAR_39 = VAR_2;
  } else
   VAR_39 = VAR_38->handler(VAR_38, VAR_36, &VAR_37, VAR_30, VAR_31);
  break;
 }

error:
 if (VAR_28)
  FUNC_8(VAR_28);
 FUNC_23(VAR_36);
 FUNC_31();
 FUNC_2(VAR_16);
 return (VAR_39);
}
