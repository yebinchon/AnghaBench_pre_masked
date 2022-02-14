
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct pollfd {int revents; int events; int fd; } ;
struct pcap_netmap {int * cb_arg; int cb; struct nm_desc* d; } ;
struct nm_desc {int dummy; } ;
struct TYPE_4__ {int timeout; } ;
struct TYPE_5__ {TYPE_1__ opt; scalar_t__ break_loop; int fd; struct pcap_netmap* priv; } ;
typedef TYPE_2__ pcap_t ;
typedef int pcap_handler ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*,int,void*,void*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct pollfd*,int,int ) ;

__attribute__((used)) static int
FUNC_2(pcap_t *VAR_4, int VAR_5, pcap_handler VAR_6, u_char *VAR_7)
{
 int VAR_8;
 struct pcap_netmap *VAR_9 = VAR_4->priv;
 struct nm_desc *VAR_10 = VAR_9->d;
 struct pollfd VAR_11 = { .fd = VAR_4->fd, .events = VAR_1, .revents = 0 };

 VAR_9->cb = VAR_6;
 VAR_9->cb_arg = VAR_7;

 for (;;) {
  if (VAR_4->break_loop) {
   VAR_4->break_loop = 0;
   return VAR_0;
  }


  VAR_8 = FUNC_0((void *)VAR_10, VAR_5, (void *)VAR_3, (void *)VAR_4);
  if (VAR_8 != 0)
   break;
  VAR_2 = 0;
  VAR_8 = FUNC_1(&VAR_11, 1, VAR_4->opt.timeout);
 }
 return VAR_8;
}
