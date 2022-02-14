
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_rdmasniff {unsigned int port_num; struct ibv_device* rdma_device; } ;
struct ibv_device {char const* name; } ;
struct TYPE_4__ {struct pcap_rdmasniff* priv; int activate_op; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (struct ibv_device**) ;
 struct ibv_device** FUNC_1 (int*) ;
 TYPE_1__* FUNC_2 (char*,int) ;
 int VAR_0 ;
 char* FUNC_3 (char const*,char) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char const*,size_t) ;
 unsigned int FUNC_6 (char const*,int *,int) ;

pcap_t *
FUNC_7(const char *VAR_1, char *VAR_2, int *VAR_3)
{
 struct pcap_rdmasniff *VAR_4;
 struct ibv_device **VAR_5;
 int VAR_6;
 size_t VAR_7;
 const char *VAR_8;
 unsigned VAR_9;
 int VAR_10;
 pcap_t *VAR_11 = ((void*)0);

 *VAR_3 = 0;

 VAR_5 = FUNC_1(&VAR_6);
 if (!VAR_5 || !VAR_6) {
  return ((void*)0);
 }

 VAR_7 = FUNC_4(VAR_1);

 VAR_8 = FUNC_3(VAR_1, ':');
 if (VAR_8) {
  VAR_9 = FUNC_6(VAR_8 + 1, ((void*)0), 10);
  if (VAR_9 > 0) {
   VAR_7 = VAR_8 - VAR_1;
  } else {
   VAR_9 = 1;
  }
 } else {
  VAR_9 = 1;
 }

 for (VAR_10 = 0; VAR_10 < VAR_6; ++VAR_10) {
  if (FUNC_4(VAR_5[VAR_10]->name) == VAR_7 &&
      !FUNC_5(VAR_1, VAR_5[VAR_10]->name, VAR_7)) {
   *VAR_3 = 1;

   VAR_11 = FUNC_2(VAR_2, sizeof (struct pcap_rdmasniff));
   if (VAR_11) {
    VAR_11->activate_op = VAR_0;
    VAR_4 = VAR_11->priv;
    VAR_4->rdma_device = VAR_5[VAR_10];
    VAR_4->port_num = VAR_9;
   }
   break;
  }
 }

 FUNC_0(VAR_5);
 return VAR_11;
}
