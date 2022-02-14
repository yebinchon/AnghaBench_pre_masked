
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_long ;
struct pcap_netmap {struct nm_desc* d; } ;
struct TYPE_4__ {int nr_name; } ;
struct nm_desc {int fd; TYPE_1__ req; } ;
struct ifreq {int ifr_flags; int ifr_flagshigh; int ifr_name; } ;
struct TYPE_5__ {struct pcap_netmap* priv; } ;
typedef TYPE_2__ pcap_t ;
typedef int ifr ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct ifreq*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,int ,struct ifreq*) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(pcap_t *VAR_3, u_long VAR_4, uint32_t *VAR_5)
{
 struct pcap_netmap *VAR_6 = VAR_3->priv;
 struct nm_desc *VAR_7 = VAR_6->d;
 struct ifreq VAR_8;
 int VAR_9, VAR_10 = VAR_7->fd;


 VAR_10 = FUNC_4(VAR_0, VAR_1, 0);
 if (VAR_10 < 0) {
  FUNC_2(VAR_2, "Error: cannot get device control socket.\n");
  return -1;
 }

 FUNC_0(&VAR_8, sizeof(VAR_8));
 FUNC_5(VAR_8.ifr_name, VAR_7->req.nr_name, sizeof(VAR_8.ifr_name));
 switch (VAR_4) {
 case 128:
  VAR_8.ifr_flags = *VAR_5 & 0xffff;
  break;
 }
 VAR_9 = FUNC_3(VAR_10, VAR_4, &VAR_8);
 if (!VAR_9) {
  switch (VAR_4) {
  case 129:
   *VAR_5 = VAR_8.ifr_flags & 0xffff;
  }
 }

 FUNC_1(VAR_10);

 return VAR_9 ? -1 : 0;
}
