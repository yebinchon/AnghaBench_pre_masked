
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pcap_stat {void* ps_ifdrop; void* ps_drop; void* ps_recv; } ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ pcap_t ;
typedef int buf ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,unsigned char*) ;
 int FUNC_2 (int ,int,unsigned char*) ;

__attribute__((used)) static int FUNC_3(pcap_t *VAR_0, struct pcap_stat *VAR_1) {
 unsigned char VAR_2[12];

 FUNC_2(VAR_0->fd, 1, (unsigned char *)"S");

 if (FUNC_1(VAR_0->fd, sizeof(VAR_2), VAR_2) == -1) return -1;

 VAR_1->ps_recv = FUNC_0(*(uint32_t *)&VAR_2[0]);
 VAR_1->ps_drop = FUNC_0(*(uint32_t *)&VAR_2[4]);
 VAR_1->ps_ifdrop = FUNC_0(*(uint32_t *)&VAR_2[8]);

 return 0;
}
