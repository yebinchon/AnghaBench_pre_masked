
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* errbuf; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (int ,char*,char const*,char*) ;
 int VAR_0 ;

void
FUNC_1(pcap_t *VAR_1, const char *VAR_2)
{
 FUNC_0(VAR_0, "%s: %s\n", VAR_2, VAR_1->errbuf);
}
