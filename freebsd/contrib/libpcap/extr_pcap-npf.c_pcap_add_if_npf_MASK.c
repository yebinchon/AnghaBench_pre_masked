
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int pcap_if_t ;
typedef int pcap_if_list_t ;
struct TYPE_3__ {int Broadcast; int SubnetMask; int IPAddress; } ;
typedef TYPE_1__ npf_if_addr ;
typedef int bpf_u_int32 ;
typedef size_t LONG ;


 int VAR_0 ;
 int FUNC_0 (void*,TYPE_1__*,size_t*) ;
 int FUNC_1 (int *,struct sockaddr*,int,struct sockaddr*,int,struct sockaddr*,int,int *,int ,char*) ;
 int * FUNC_2 (int *,char*,int ,char const*,char*) ;

__attribute__((used)) static int
FUNC_3(pcap_if_list_t *VAR_1, char *VAR_2, bpf_u_int32 VAR_3,
    const char *VAR_4, char *VAR_5)
{
 pcap_if_t *VAR_6;
 npf_if_addr VAR_7[VAR_0];
 LONG VAR_8;
 int VAR_9 = 0;

 VAR_8 = VAR_0;




 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 == ((void*)0)) {



  return (-1);
 }




 if (!FUNC_0((void *)VAR_2, VAR_7, &VAR_8)) {
  return (0);
 }




 while (VAR_8-- > 0) {




  VAR_9 = FUNC_1(VAR_6,
      (struct sockaddr *)&VAR_7[VAR_8].IPAddress,
      sizeof (struct sockaddr_storage),
      (struct sockaddr *)&VAR_7[VAR_8].SubnetMask,
      sizeof (struct sockaddr_storage),
      (struct sockaddr *)&VAR_7[VAR_8].Broadcast,
      sizeof (struct sockaddr_storage),
      ((void*)0),
      0,
      VAR_5);
  if (VAR_9 == -1) {



   break;
  }
 }

 return (VAR_9);
}
