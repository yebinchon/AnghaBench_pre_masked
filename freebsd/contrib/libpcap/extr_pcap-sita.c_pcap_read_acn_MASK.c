
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef unsigned char u_char ;
struct TYPE_7__ {void* tv_usec; void* tv_sec; } ;
struct pcap_pkthdr {int caplen; void* len; TYPE_2__ ts; } ;
struct TYPE_6__ {int promisc; int timeout; } ;
struct TYPE_8__ {unsigned char* bp; int offset; scalar_t__ buffer; int direction; TYPE_1__ opt; int snapshot; int fd; } ;
typedef TYPE_3__ pcap_t ;
typedef int (* pcap_handler ) (unsigned char*,struct pcap_pkthdr*,unsigned char*) ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(pcap_t *VAR_1, int VAR_2, pcap_handler VAR_3, u_char *VAR_4) {

 unsigned char VAR_5[(4 * 4)];
 struct pcap_pkthdr VAR_6;


 FUNC_1(VAR_1->fd, VAR_1->snapshot, VAR_1->opt.timeout, VAR_1->opt.promisc, VAR_1->direction);


 VAR_1->bp = VAR_5;
 if (FUNC_0(VAR_1, (4 * 4)) == -1) return 0;

 VAR_6.ts.tv_sec = FUNC_2(*(uint32_t *)&VAR_5[0]);
 VAR_6.ts.tv_usec = FUNC_2(*(uint32_t *)&VAR_5[4]);
 VAR_6.caplen = FUNC_2(*(uint32_t *)&VAR_5[8]);
 VAR_6.len = FUNC_2(*(uint32_t *)&VAR_5[12]);

 VAR_1->bp = (u_char *)VAR_1->buffer + VAR_1->offset;
 if (FUNC_0(VAR_1, VAR_6.caplen) == -1) return 0;

 VAR_3(VAR_4, &VAR_6, VAR_1->bp);
 return 1;
}
