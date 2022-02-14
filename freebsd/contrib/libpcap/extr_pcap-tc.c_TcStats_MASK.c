
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_tc {int TcAcceptedCount; int TcInstance; } ;
struct pcap_stat {int ps_recv; int ps_ifdrop; int ps_drop; int ps_capt; } ;
typedef int s ;
struct TYPE_4__ {int errbuf; struct pcap_tc* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef scalar_t__ ULONGLONG ;
typedef void* ULONG ;
struct TYPE_5__ {scalar_t__ (* InstanceQueryStatistics ) (int ,int *) ;scalar_t__ (* StatisticsQueryValue ) (int ,int ,scalar_t__*) ;int (* StatusGetString ) (scalar_t__) ;} ;
typedef scalar_t__ TC_STATUS ;
typedef int TC_STATISTICS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (struct pcap_stat*,int ,int) ;
 int FUNC_1 (int ,int ,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8(pcap_t *VAR_5, struct pcap_stat *VAR_6)
{
 struct pcap_tc *VAR_7 = VAR_5->priv;
 TC_STATISTICS VAR_8;
 TC_STATUS VAR_9;
 ULONGLONG VAR_10;
 struct pcap_stat VAR_11;

 VAR_9 = VAR_4.InstanceQueryStatistics(VAR_7->TcInstance, &VAR_8);

 if (VAR_9 != VAR_3)
 {
  FUNC_1(VAR_5->errbuf, VAR_0, "TurboCap error in TcInstanceQueryStatistics: %s (%08x)", VAR_4.StatusGetString(VAR_9), VAR_9);
  return -1;
 }

 FUNC_0(&VAR_11, 0, sizeof(VAR_11));

 VAR_9 = VAR_4.StatisticsQueryValue(VAR_8, VAR_2, &VAR_10);
 if (VAR_9 != VAR_3)
 {
  FUNC_1(VAR_5->errbuf, VAR_0, "TurboCap error in TcStatisticsQueryValue: %s (%08x)", VAR_4.StatusGetString(VAR_9), VAR_9);
  return -1;
 }
 if (VAR_10 <= (ULONGLONG)0xFFFFFFFF)
 {
  VAR_11.ps_recv = (ULONG)VAR_10;
 }
 else
 {
  VAR_11.ps_recv = 0xFFFFFFFF;
 }

 VAR_9 = VAR_4.StatisticsQueryValue(VAR_8, VAR_1, &VAR_10);
 if (VAR_9 != VAR_3)
 {
  FUNC_1(VAR_5->errbuf, VAR_0, "TurboCap error in TcStatisticsQueryValue: %s (%08x)", VAR_4.StatusGetString(VAR_9), VAR_9);
  return -1;
 }
 if (VAR_10 <= (ULONGLONG)0xFFFFFFFF)
 {
  VAR_11.ps_ifdrop = (ULONG)VAR_10;
  VAR_11.ps_drop = (ULONG)VAR_10;
 }
 else
 {
  VAR_11.ps_ifdrop = 0xFFFFFFFF;
  VAR_11.ps_drop = 0xFFFFFFFF;
 }




 *VAR_6 = VAR_11;

 return 0;
}
