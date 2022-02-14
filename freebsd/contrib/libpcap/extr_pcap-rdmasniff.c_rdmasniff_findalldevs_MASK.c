
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_device {int name; } ;
typedef int pcap_if_list_t ;


 int FUNC_0 (int *,int ,int ,char*,char*) ;
 int FUNC_1 (struct ibv_device**) ;
 struct ibv_device** FUNC_2 (int*) ;

int
FUNC_3(pcap_if_list_t *VAR_0, char *VAR_1)
{
 struct ibv_device **VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5 = 0;

 VAR_2 = FUNC_2(&VAR_3);
 if (!VAR_2 || !VAR_3) {
  return 0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {




  if (!FUNC_0(VAR_0, VAR_2[VAR_4]->name, 0, "RDMA sniffer", VAR_1)) {
   VAR_5 = -1;
   goto out;
  }
 }

out:
 FUNC_1(VAR_2);
 return VAR_5;
}
