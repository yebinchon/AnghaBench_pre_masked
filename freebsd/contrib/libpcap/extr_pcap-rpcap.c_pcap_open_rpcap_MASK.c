
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct rpcap_openreply {int tzoff; int linktype; } ;
struct rpcap_header {int plen; } ;
struct pcap_rpcap {int rmt_flags; int rmt_clientside; int rmt_sockctrl; int protocol_version; } ;
struct pcap_rmtauth {int dummy; } ;
struct addrinfo {int ai_socktype; int ai_family; } ;
struct activehosts {int protocol_version; int sockctrl; } ;
struct TYPE_6__ {char* device; int timeout; } ;
struct TYPE_7__ {int snapshot; int activated; int cleanup_op; int stats_ex_op; int stats_op; int setnonblock_op; int getnonblock_op; int setfilter_op; int save_current_filter_op; int read_op; void* tzoff; void* linktype; TYPE_1__ opt; struct pcap_rpcap* priv; } ;
typedef TYPE_2__ pcap_t ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (struct addrinfo*,int ,int) ;
 void* FUNC_2 (int ) ;
 int VAR_14 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int ,int ,char*) ;
 int VAR_15 ;
 int FUNC_6 (char*,int*,char*,char*,char*,char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_7 (char*,int ,char*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (struct rpcap_header*,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ,char*) ;
 int FUNC_10 (int ,int *,struct pcap_rmtauth*,char*) ;
 int FUNC_11 (int ,int ,int ,struct rpcap_header*,char*) ;
 int FUNC_12 (int ,char*,int,int *,char*) ;
 struct activehosts* FUNC_13 (char*,int*,char*) ;
 scalar_t__ FUNC_14 (char*,int,char*,int*,int,int ,char*,int ) ;
 int FUNC_15 (int ,int *,int ) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (char*,char*,struct addrinfo*,struct addrinfo**,char*,int ) ;
 int FUNC_18 (struct addrinfo*,int ,int ,char*,int ) ;
 scalar_t__ FUNC_19 (int ,char*,int,char*,int ) ;
 char* FUNC_20 (char const*) ;
 scalar_t__ FUNC_21 (char*) ;

pcap_t *FUNC_22(const char *VAR_22, int VAR_23, int VAR_24, int VAR_25, struct pcap_rmtauth *VAR_26, char *VAR_27)
{
 pcap_t *VAR_28;
 char *VAR_29;
 struct pcap_rpcap *VAR_30;
 char VAR_31[VAR_2], VAR_32[VAR_2], VAR_33[VAR_2];
 struct activehosts *VAR_34;
 int VAR_35;
 SOCKET VAR_36;
 uint8 VAR_37;
 int VAR_38;
 uint32 VAR_39;
 char VAR_40[VAR_8];
 int VAR_41 = 0;
 int VAR_42;


 struct rpcap_header VAR_43;
 struct rpcap_openreply VAR_44;

 VAR_28 = FUNC_4(VAR_27, sizeof (struct pcap_rpcap));
 if (VAR_28 == ((void*)0))
 {
  return ((void*)0);
 }
 VAR_29 = FUNC_20(VAR_22);
 if (VAR_29 == ((void*)0)) {
  FUNC_5(VAR_27, VAR_3,
      VAR_13, "malloc");
  return ((void*)0);
 }
 if (VAR_23 <= 0 || VAR_23 > VAR_1)
  VAR_23 = VAR_1;

 VAR_28->opt.device = VAR_29;
 VAR_28->snapshot = VAR_23;
 VAR_28->opt.timeout = VAR_25;
 VAR_30 = VAR_28->priv;
 VAR_30->rmt_flags = VAR_24;






 if (FUNC_6(VAR_28->opt.device, &VAR_42, VAR_31, VAR_32, VAR_33, VAR_27) == -1)
 {
  FUNC_3(VAR_28);
  return ((void*)0);
 }

 if (VAR_42 != VAR_4)
 {
  FUNC_7(VAR_27, VAR_3, "This function is able to open only remote interfaces");
  FUNC_3(VAR_28);
  return ((void*)0);
 }





 if (FUNC_16(VAR_27, VAR_3) == -1)
 {
  FUNC_3(VAR_28);
  return ((void*)0);
 }


 VAR_34 = FUNC_13(VAR_31, &VAR_35, VAR_27);
 if (VAR_34 != ((void*)0))
 {
  VAR_36 = VAR_34->sockctrl;
  VAR_37 = VAR_34->protocol_version;
  VAR_38 = 1;
 }
 else
 {
  struct addrinfo VAR_45;
  struct addrinfo *VAR_46;

  if (VAR_35)
  {



   FUNC_3(VAR_28);
   return ((void*)0);
  }





  FUNC_1(&VAR_45, 0, sizeof(struct addrinfo));
  VAR_45.ai_family = VAR_5;
  VAR_45.ai_socktype = VAR_12;

  if (VAR_32[0] == 0)
  {

   if (FUNC_17(VAR_31, VAR_6, &VAR_45, &VAR_46, VAR_27, VAR_3) == -1)
   {
    FUNC_3(VAR_28);
    return ((void*)0);
   }
  }
  else
  {
   if (FUNC_17(VAR_31, VAR_32, &VAR_45, &VAR_46, VAR_27, VAR_3) == -1)
   {
    FUNC_3(VAR_28);
    return ((void*)0);
   }
  }

  if ((VAR_36 = FUNC_18(VAR_46, VAR_11, 0, VAR_27, VAR_3)) == VAR_0)
  {
   FUNC_0(VAR_46);
   FUNC_3(VAR_28);
   return ((void*)0);
  }


  FUNC_0(VAR_46);

  if (FUNC_10(VAR_36, &VAR_37, VAR_26, VAR_27) == -1)
  {
   FUNC_15(VAR_36, ((void*)0), 0);
   FUNC_3(VAR_28);
   return ((void*)0);
  }
  VAR_38 = 0;
 }





 if (FUNC_14(((void*)0), sizeof(struct rpcap_header), ((void*)0),
  &VAR_41, VAR_8, VAR_10, VAR_27, VAR_3))
  goto error_nodiscard;

 FUNC_8((struct rpcap_header *) VAR_40, VAR_37,
     VAR_7, 0, (uint32) FUNC_21(VAR_33));

 if (FUNC_14(VAR_33, (int) FUNC_21(VAR_33), VAR_40, &VAR_41,
  VAR_8, VAR_9, VAR_27, VAR_3))
  goto error_nodiscard;

 if (FUNC_19(VAR_36, VAR_40, VAR_41, VAR_27,
     VAR_3) < 0)
  goto error_nodiscard;


 if (FUNC_11(VAR_36, VAR_37,
     VAR_7, &VAR_43, VAR_27) == -1)
  goto error_nodiscard;
 VAR_39 = VAR_43.plen;


 if (FUNC_12(VAR_36, (char *)&VAR_44,
     sizeof(struct rpcap_openreply), &VAR_39, VAR_27) == -1)
  goto error;


 if (FUNC_9(VAR_30->rmt_sockctrl, VAR_39, VAR_27) == -1)
  goto error_nodiscard;


 VAR_28->linktype = FUNC_2(VAR_44.linktype);
 VAR_28->tzoff = FUNC_2(VAR_44.tzoff);
 VAR_30->rmt_sockctrl = VAR_36;
 VAR_30->protocol_version = VAR_37;
 VAR_30->rmt_clientside = 1;


 VAR_28->read_op = VAR_16;
 VAR_28->save_current_filter_op = VAR_17;
 VAR_28->setfilter_op = VAR_18;
 VAR_28->getnonblock_op = VAR_15;
 VAR_28->setnonblock_op = VAR_19;
 VAR_28->stats_op = VAR_21;



 VAR_28->cleanup_op = VAR_14;

 VAR_28->activated = 1;
 return VAR_28;

error:
 (void)FUNC_9(VAR_30->rmt_sockctrl, VAR_39, ((void*)0));

error_nodiscard:
 if (!VAR_38)
  FUNC_15(VAR_36, ((void*)0), 0);

 FUNC_3(VAR_28);
 return ((void*)0);
}
