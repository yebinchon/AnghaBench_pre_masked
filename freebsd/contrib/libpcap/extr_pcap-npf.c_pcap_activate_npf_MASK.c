
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef void* u_int ;
struct pcap_win {int rfmon_selfstart; TYPE_6__* adapter; int dag_fcs_bits; } ;
struct TYPE_15__ {scalar_t__ buffer_size; scalar_t__ nocapture_local; int timeout; int device; scalar_t__ immediate; scalar_t__ promisc; scalar_t__ rfmon; } ;
struct TYPE_16__ {int dlt_count; scalar_t__ snapshot; int bufsize; int handle; int (* cleanup_op ) (TYPE_2__*) ;int get_airpcap_handle_op; int live_dump_ended_op; int live_dump_op; int setuserbuffer_op; int sendqueue_transmit_op; int oid_set_request_op; int oid_get_request_op; int getevent_op; int setmintocopy_op; int setmode_op; int setbuff_op; int stats_ex_op; int stats_op; int setnonblock_op; int getnonblock_op; int * set_datalink_op; int inject_op; int * setdirection_op; int setfilter_op; int read_op; int errbuf; TYPE_1__ opt; int * buffer; void* linktype; void** dlt_list; struct pcap_win* priv; } ;
typedef TYPE_2__ pcap_t ;
typedef int keyname ;
struct TYPE_18__ {int Flags; int hFile; int DagFcsLen; } ;
struct TYPE_17__ {int LinkType; } ;
typedef TYPE_3__ NetType ;
typedef int LONG ;
typedef int HKEY ;
typedef int DWORD ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 () ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_6__*,TYPE_3__*) ;
 TYPE_6__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_6__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_6__*,int) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_6__*,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_6__*,scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int ,int ,int *) ;
 int FUNC_13 (int ,char*,int *,int *,char*,int *) ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int FUNC_14 (int ) ;
 int VAR_29 ;
 int * FUNC_15 (int) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (int ,int,int ,char*) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_18 (char*,int,char*,...) ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 () ;
 int FUNC_21 (int ,char*) ;

__attribute__((used)) static int
FUNC_22(pcap_t *VAR_50)
{
 struct pcap_win *VAR_51 = VAR_50->priv;
 NetType VAR_52;
 int VAR_53;
 char VAR_54[VAR_24+1];

 if (VAR_50->opt.rfmon) {



  if (FUNC_1(VAR_50->opt.device) == 1)
  {
   VAR_51->rfmon_selfstart = 0;
  }
  else
  {
   if ((VAR_53 = FUNC_8(VAR_50->opt.device, 1)) != 1)
   {
    VAR_51->rfmon_selfstart = 0;

    if (VAR_53 == 0)
    {
     return VAR_26;
    }
    else
    {
     return VAR_25;
    }
   }
   else
   {
    VAR_51->rfmon_selfstart = 1;
   }
  }
 }


 FUNC_20();

 VAR_51->adapter = FUNC_3(VAR_50->opt.device);

 if (VAR_51->adapter == ((void*)0))
 {

  FUNC_19(FUNC_0(), VAR_54);
  if (VAR_51->rfmon_selfstart)
  {
   FUNC_8(VAR_50->opt.device, 0);
  }
  FUNC_18(VAR_50->errbuf, VAR_24,
      "Error opening adapter: %s", VAR_54);
  return (VAR_25);
 }


 if(FUNC_2 (VAR_51->adapter,&VAR_52) == VAR_13)
 {
  FUNC_19(FUNC_0(), VAR_54);
  FUNC_18(VAR_50->errbuf, VAR_24,
      "Cannot determine the network type: %s", VAR_54);
  goto bad;
 }


 switch (VAR_52.LinkType)
 {
 case 128:
  VAR_50->linktype = VAR_4;
  break;

 case 140:
  VAR_50->linktype = VAR_4;
  VAR_50->dlt_list = (u_int *) FUNC_15(sizeof(u_int) * 2);



  if (VAR_50->dlt_list != ((void*)0)) {
   VAR_50->dlt_list[0] = VAR_4;
   VAR_50->dlt_list[1] = VAR_3;
   VAR_50->dlt_count = 2;
  }
  break;

 case 133:
  VAR_50->linktype = VAR_5;
  break;

 case 139:
  VAR_50->linktype = VAR_6;
  break;

 case 137:
  VAR_50->linktype = VAR_0;
  break;

 case 138:
  VAR_50->linktype = VAR_0;
  break;

 case 136:
  VAR_50->linktype = VAR_1;
  break;

 case 134:
  VAR_50->linktype = VAR_2;
  break;

 case 131:
  VAR_50->linktype = VAR_11;
  break;

 case 132:
  VAR_50->linktype = VAR_9;
  break;

 case 135:
  VAR_50->linktype = VAR_7;
  break;

 case 129:
  VAR_50->linktype = VAR_8;
  break;

 case 130:
  VAR_50->linktype = VAR_10;
  break;

 default:
  VAR_50->linktype = VAR_4;
  break;
 }
 if (VAR_50->snapshot <= 0 || VAR_50->snapshot > VAR_17)
  VAR_50->snapshot = VAR_17;


 if (VAR_50->opt.promisc)
 {

  if (FUNC_5(VAR_51->adapter,VAR_22) == VAR_13)
  {
   FUNC_18(VAR_50->errbuf, VAR_24, "failed to set hardware filter to promiscuous mode");
   goto bad;
  }
 }
 else
 {






  if (FUNC_5(VAR_51->adapter,
   VAR_18 |
   VAR_20 |
   VAR_19 |
   VAR_21) == VAR_13)
  {
   FUNC_18(VAR_50->errbuf, VAR_24, "failed to set hardware filter to non-promiscuous mode");
   goto bad;
  }
 }


 VAR_50->bufsize = VAR_28;

 if(!(VAR_51->adapter->Flags & VAR_15))
 {







   if (VAR_50->opt.buffer_size == 0)
    VAR_50->opt.buffer_size = VAR_27;

  if(FUNC_4(VAR_51->adapter,VAR_50->opt.buffer_size)==VAR_13)
  {
   FUNC_18(VAR_50->errbuf, VAR_24, "driver error: not enough memory to allocate the kernel buffer");
   goto bad;
  }

  VAR_50->buffer = FUNC_15(VAR_50->bufsize);
  if (VAR_50->buffer == ((void*)0))
  {
   FUNC_17(VAR_50->errbuf, VAR_24,
       VAR_29, "malloc");
   goto bad;
  }

  if (VAR_50->opt.immediate)
  {

   if(FUNC_7(VAR_51->adapter,0)==VAR_13)
   {
    FUNC_19(FUNC_0(), VAR_54);
    FUNC_18(VAR_50->errbuf, VAR_24,
        "Error calling PacketSetMinToCopy: %s",
        VAR_54);
    goto bad;
   }
  }
  else
  {

   if(FUNC_7(VAR_51->adapter,16000)==VAR_13)
   {
    FUNC_19(FUNC_0(), VAR_54);
    FUNC_18(VAR_50->errbuf, VAR_24,
        "Error calling PacketSetMinToCopy: %s",
        VAR_54);
    goto bad;
   }
  }
 } else {
  goto bad;

 }

 FUNC_9(VAR_51->adapter, VAR_50->opt.timeout);


 if (VAR_50->opt.nocapture_local)
 {
  if (!FUNC_6(VAR_51->adapter, VAR_23))
  {
   FUNC_18(VAR_50->errbuf, VAR_24,
       "Unable to disable the capture of loopback packets.");
   goto bad;
  }
 }
  VAR_50->read_op = VAR_38;
  VAR_50->setfilter_op = VAR_42;



 VAR_50->setdirection_op = ((void*)0);

 VAR_50->inject_op = VAR_33;
 VAR_50->set_datalink_op = ((void*)0);
 VAR_50->getnonblock_op = VAR_32;
 VAR_50->setnonblock_op = VAR_46;
 VAR_50->stats_op = VAR_49;
 VAR_50->stats_ex_op = VAR_48;
 VAR_50->setbuff_op = VAR_41;
 VAR_50->setmode_op = VAR_45;
 VAR_50->setmintocopy_op = VAR_44;
 VAR_50->getevent_op = VAR_31;
 VAR_50->oid_get_request_op = VAR_36;
 VAR_50->oid_set_request_op = VAR_37;
 VAR_50->sendqueue_transmit_op = VAR_40;
 VAR_50->setuserbuffer_op = VAR_47;
 VAR_50->live_dump_op = VAR_35;
 VAR_50->live_dump_ended_op = VAR_34;
 VAR_50->get_airpcap_handle_op = VAR_30;
 VAR_50->cleanup_op = FUNC_16;
 VAR_50->handle = VAR_51->adapter->hFile;

 return (0);
bad:
 FUNC_16(VAR_50);
 return (VAR_25);
}
