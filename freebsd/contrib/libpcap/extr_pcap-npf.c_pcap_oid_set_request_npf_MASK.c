
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pcap_win {int adapter; } ;
struct TYPE_7__ {int errbuf; struct pcap_win* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef int bpf_u_int32 ;
typedef size_t ULONG ;
struct TYPE_8__ {size_t Length; int Data; int Oid; } ;
typedef TYPE_2__ PACKET_OID_DATA ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (int ,void const*,size_t) ;
 int FUNC_5 (int ,int ,char*,...) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(pcap_t *VAR_3, bpf_u_int32 VAR_4, const void *VAR_5,
    size_t *VAR_6)
{
 struct pcap_win *VAR_7 = VAR_3->priv;
 PACKET_OID_DATA *VAR_8;
 char VAR_9[VAR_0+1];
 VAR_8 = FUNC_3(sizeof (PACKET_OID_DATA) + *VAR_6);
 if (VAR_8 == ((void*)0)) {
  FUNC_5(VAR_3->errbuf, VAR_0,
      "Couldn't allocate argument buffer for PacketRequest");
  return (VAR_1);
 }

 VAR_8->Oid = VAR_4;
 VAR_8->Length = (ULONG)(*VAR_6);
 FUNC_4(VAR_8->Data, VAR_5, *VAR_6);
 if (!FUNC_1(VAR_7->adapter, VAR_2, VAR_8)) {
  FUNC_6(FUNC_0(), VAR_9);
  FUNC_5(VAR_3->errbuf, VAR_0,
      "Error calling PacketRequest: %s", VAR_9);
  FUNC_2(VAR_8);
  return (VAR_1);
 }




 *VAR_6 = VAR_8->Length;




 FUNC_2(VAR_8);
 return (0);
}
