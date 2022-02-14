
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
struct pcap_rmtauth {int dummy; } ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,...) ;
 int FUNC_1 (int ,int *,struct pcap_rmtauth*,char*) ;

__attribute__((used)) static int FUNC_2(SOCKET VAR_2, uint8 *VAR_3, struct pcap_rmtauth *VAR_4, char *VAR_5)
{
 int VAR_6;






 *VAR_3 = VAR_1;
 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 == 0)
 {



  return 0;
 }
 if (VAR_6 == -1)
 {

  return -1;
 }
 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 == 0)
 {



  return 0;
 }
 if (VAR_6 == -1)
 {

  return -1;
 }
 if (VAR_6 == -2)
 {





  FUNC_0(VAR_5, VAR_0, "The server doesn't support any protocol version that we support");
  return -1;
 }
 FUNC_0(VAR_5, VAR_0, "rpcap_sendauth() returned %d", VAR_6);
 return -1;
}
