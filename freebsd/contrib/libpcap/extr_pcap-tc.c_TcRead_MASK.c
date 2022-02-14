
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_16__ ;


typedef int u_char ;
struct pcap_tc {TYPE_6__* PpiPacket; int TcAcceptedCount; int * TcPacketsBuffer; int TcInstance; } ;
struct TYPE_22__ {void* tv_usec; void* tv_sec; } ;
struct pcap_pkthdr {scalar_t__ len; scalar_t__ caplen; TYPE_2__ ts; } ;
struct TYPE_21__ {scalar_t__ bf_insns; } ;
struct TYPE_25__ {scalar_t__ linktype; TYPE_1__ fcode; int errbuf; scalar_t__ break_loop; struct pcap_tc* priv; } ;
typedef TYPE_5__ pcap_t ;
typedef int (* pcap_handler ) (int *,struct pcap_pkthdr*,TYPE_6__*) ;
typedef void* bpf_u_int32 ;
typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_27__ {scalar_t__ CapturedLength; int Timestamp; int Flags; scalar_t__ Length; int Errors; } ;
struct TYPE_24__ {scalar_t__ Flags; int Errors; } ;
struct TYPE_23__ {int InterfaceId; } ;
struct TYPE_26__ {TYPE_4__ Dot3Field; TYPE_3__ AggregationField; } ;
struct TYPE_20__ {scalar_t__ (* InstanceReceivePackets ) (int ,int **) ;scalar_t__ (* PacketsBufferQueryNextPacket ) (int *,TYPE_7__*,TYPE_6__**) ;int (* StatusGetString ) (scalar_t__) ;int (* PacketsBufferDestroy ) (int *) ;} ;
typedef scalar_t__ TC_STATUS ;
typedef TYPE_7__ TC_PACKET_HEADER ;
typedef TYPE_6__* PVOID ;
typedef TYPE_6__* PPPI_HEADER ;
typedef int PPI_HEADER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_6__*,scalar_t__,scalar_t__) ;
 TYPE_16__ VAR_8 ;
 int FUNC_2 (TYPE_6__*,TYPE_6__*,scalar_t__) ;
 int FUNC_3 (int ,int ,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int **) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int *,TYPE_7__*,TYPE_6__**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,struct pcap_pkthdr*,TYPE_6__*) ;
 int FUNC_10 (int *,struct pcap_pkthdr*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_11(pcap_t *VAR_9, int VAR_10, pcap_handler VAR_11, u_char *VAR_12)
{
 struct pcap_tc *VAR_13 = VAR_9->priv;
 TC_STATUS VAR_14;
 int VAR_15 = 0;




 if (VAR_9->break_loop)
 {





  VAR_9->break_loop = 0;
  return -2;
 }

 if (VAR_13->TcPacketsBuffer == ((void*)0))
 {
  VAR_14 = VAR_8.InstanceReceivePackets(VAR_13->TcInstance, &VAR_13->TcPacketsBuffer);
  if (VAR_14 != VAR_6)
  {
   FUNC_3(VAR_9->errbuf, VAR_2, "read error, TcInstanceReceivePackets failure: %s (%08x)", VAR_8.StatusGetString(VAR_14), VAR_14);
   return -1;
  }
 }

 while (VAR_7)
 {
  struct pcap_pkthdr VAR_16;
  TC_PACKET_HEADER VAR_17;
  PVOID VAR_18;
  ULONG VAR_19;
  if (VAR_9->break_loop)
  {
   if (VAR_15 == 0)
   {
    VAR_9->break_loop = 0;
    return -2;
   }
   else
   {
    return VAR_15;
   }
  }

  if (VAR_13->TcPacketsBuffer == ((void*)0))
  {
   break;
  }

  VAR_14 = VAR_8.PacketsBufferQueryNextPacket(VAR_13->TcPacketsBuffer, &VAR_17, &VAR_18);

  if (VAR_14 == VAR_4)
  {
   VAR_8.PacketsBufferDestroy(VAR_13->TcPacketsBuffer);
   VAR_13->TcPacketsBuffer = ((void*)0);
   break;
  }

  if (VAR_14 != VAR_6)
  {
   FUNC_3(VAR_9->errbuf, VAR_2, "read error, TcPacketsBufferQueryNextPacket failure: %s (%08x)", VAR_8.StatusGetString(VAR_14), VAR_14);
   return -1;
  }


  if (VAR_9->fcode.bf_insns)
  {
   VAR_19 = FUNC_1(VAR_9->fcode.bf_insns, VAR_18, VAR_17.Length, VAR_17.CapturedLength);

   if (VAR_19 == 0)
   {
    continue;
   }

   if (VAR_19 > VAR_17.CapturedLength)
   {
    VAR_19 = VAR_17.CapturedLength;
   }
  }
  else
  {
   VAR_19 = VAR_17.CapturedLength;
  }

  VAR_13->TcAcceptedCount ++;

  VAR_16.ts.tv_sec = (bpf_u_int32)(VAR_17.Timestamp / (ULONGLONG)(1000 * 1000 * 1000));
  VAR_16.ts.tv_usec = (bpf_u_int32)((VAR_17.Timestamp % (ULONGLONG)(1000 * 1000 * 1000)) / 1000);

  if (VAR_9->linktype == VAR_0)
  {
   VAR_16.caplen = VAR_19;
   VAR_16.len = VAR_17.Length;
   (*VAR_11)(VAR_12, &VAR_16, VAR_18);
  }
  else
  {
   PPPI_HEADER VAR_20 = (PPPI_HEADER)VAR_13->PpiPacket;
   PVOID VAR_21 = VAR_20 + 1;

   VAR_20->AggregationField.InterfaceId = FUNC_0(VAR_17.Flags);
   VAR_20->Dot3Field.Errors = VAR_17.Errors;
   if (VAR_17.Flags & VAR_5)
   {
    VAR_20->Dot3Field.Flags = VAR_3;
   }
   else
   {
    VAR_20->Dot3Field.Flags = 0;
   }

   if (VAR_19 <= VAR_1)
   {
    FUNC_2(VAR_21, VAR_18, VAR_19);
    VAR_16.caplen = sizeof(PPI_HEADER) + VAR_19;
    VAR_16.len = sizeof(PPI_HEADER) + VAR_17.Length;
   }
   else
   {
    FUNC_2(VAR_21, VAR_18, VAR_1);
    VAR_16.caplen = sizeof(PPI_HEADER) + VAR_1;
    VAR_16.len = sizeof(PPI_HEADER) + VAR_17.Length;
   }

   (*VAR_11)(VAR_12, &VAR_16, VAR_13->PpiPacket);

  }

  if (++VAR_15 >= VAR_10 && VAR_10 > 0)
  {
   return VAR_15;
  }
 }

 return VAR_15;
}
