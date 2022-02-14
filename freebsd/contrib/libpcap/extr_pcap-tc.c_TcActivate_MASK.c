
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* u_int ;
struct pcap_tc {int TcInstance; int * PpiPacket; } ;
struct TYPE_13__ {int timeout; int device; scalar_t__ rfmon; } ;
struct TYPE_14__ {scalar_t__ snapshot; int dlt_count; int selectable_fd; int (* cleanup_op ) (TYPE_5__*) ;int get_airpcap_handle_op; int live_dump_ended_op; int live_dump_op; int setuserbuffer_op; int sendqueue_transmit_op; int oid_set_request_op; int oid_get_request_op; int getevent_op; int setmintocopy_op; int setmode_op; int setbuff_op; int stats_ex_op; int stats_op; int setnonblock_op; int getnonblock_op; int set_datalink_op; int * setdirection_op; int setfilter_op; int read_op; int errbuf; TYPE_4__ opt; int inject_op; void** dlt_list; void* linktype; struct pcap_tc* priv; } ;
typedef TYPE_5__ pcap_t ;
typedef int ULONG ;
struct TYPE_16__ {scalar_t__ (* InstanceOpenByName ) (int ,int *) ;scalar_t__ (* InstanceSetFeature ) (int ,int ,int) ;int (* StatusGetString ) (scalar_t__) ;} ;
struct TYPE_12__ {int PfhLength; int PfhType; } ;
struct TYPE_11__ {int PfhLength; int PfhType; } ;
struct TYPE_10__ {int PphLength; scalar_t__ PphVersion; scalar_t__ PphFlags; void* PphDlt; } ;
struct TYPE_15__ {TYPE_3__ Dot3FieldHeader; TYPE_2__ AggregationFieldHeader; TYPE_1__ PacketHeader; } ;
typedef scalar_t__ TC_STATUS ;
typedef TYPE_6__* PPPI_HEADER ;
typedef int PPI_HEADER ;
typedef int PPI_FIELD_AGGREGATION_EXTENSION ;
typedef int PPI_FIELD_802_3_EXTENSION ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 TYPE_7__ VAR_32 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*,...) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int
FUNC_10(pcap_t *VAR_33)
{
 struct pcap_tc *VAR_34 = VAR_33->priv;
 TC_STATUS VAR_35;
 ULONG VAR_36;
 PPPI_HEADER VAR_37;

 if (VAR_33->opt.rfmon)
 {




  return VAR_6;
 }

 VAR_34->PpiPacket = FUNC_1(sizeof(PPI_HEADER) + VAR_3);

 if (VAR_34->PpiPacket == ((void*)0))
 {
  FUNC_2(VAR_33->errbuf, VAR_4, "Error allocating memory");
  return VAR_5;
 }
 if (VAR_33->snapshot <= 0 || VAR_33->snapshot > VAR_2)
  VAR_33->snapshot = VAR_2;




 VAR_37 = (PPPI_HEADER)VAR_34->PpiPacket;
 VAR_37->PacketHeader.PphDlt = VAR_0;
 VAR_37->PacketHeader.PphLength = sizeof(PPI_HEADER);
 VAR_37->PacketHeader.PphFlags = 0;
 VAR_37->PacketHeader.PphVersion = 0;

 VAR_37->AggregationFieldHeader.PfhLength = sizeof(PPI_FIELD_AGGREGATION_EXTENSION);
 VAR_37->AggregationFieldHeader.PfhType = VAR_8;

 VAR_37->Dot3FieldHeader.PfhLength = sizeof(PPI_FIELD_802_3_EXTENSION);
 VAR_37->Dot3FieldHeader.PfhType = VAR_7;

 VAR_35 = VAR_32.InstanceOpenByName(VAR_33->opt.device, &VAR_34->TcInstance);

 if (VAR_35 != VAR_12)
 {

  FUNC_2(VAR_33->errbuf, VAR_4, "Error opening TurboCap adapter: %s", VAR_32.StatusGetString(VAR_35));
  return VAR_5;
 }

 VAR_33->linktype = VAR_0;
 VAR_33->dlt_list = (u_int *) FUNC_1(sizeof(u_int) * 2);



 if (VAR_33->dlt_list != ((void*)0)) {
  VAR_33->dlt_list[0] = VAR_0;
  VAR_33->dlt_list[1] = VAR_1;
  VAR_33->dlt_count = 2;
 }
 VAR_35 = VAR_32.InstanceSetFeature(VAR_34->TcInstance, VAR_10, 1);

 if (VAR_35 != VAR_12)
 {
  FUNC_2(VAR_33->errbuf, VAR_4,"Error enabling reception on a TurboCap instance: %s", VAR_32.StatusGetString(VAR_35));
  goto bad;
 }




 VAR_35 = VAR_32.InstanceSetFeature(VAR_34->TcInstance, VAR_11, 1);




 VAR_33->inject_op = VAR_16;





 if (VAR_33->opt.timeout == 0)
 {
  VAR_36 = 0xFFFFFFFF;
 }
 else
 if (VAR_33->opt.timeout < 0)
 {



  VAR_36 = 10;
 }
 else
 {
  VAR_36 = VAR_33->opt.timeout;
 }

 VAR_35 = VAR_32.InstanceSetFeature(VAR_34->TcInstance, VAR_9, VAR_36);

 if (VAR_35 != VAR_12)
 {
  FUNC_2(VAR_33->errbuf, VAR_4,"Error setting the read timeout a TurboCap instance: %s", VAR_32.StatusGetString(VAR_35));
  goto bad;
 }

 VAR_33->read_op = VAR_21;
 VAR_33->setfilter_op = VAR_25;
 VAR_33->setdirection_op = ((void*)0);
 VAR_33->set_datalink_op = VAR_24;
 VAR_33->getnonblock_op = VAR_14;
 VAR_33->setnonblock_op = VAR_28;
 VAR_33->stats_op = VAR_30;
 VAR_33->selectable_fd = -1;


 VAR_33->cleanup_op = FUNC_0;

 return 0;
bad:
 FUNC_0(VAR_33);
 return VAR_5;
}
