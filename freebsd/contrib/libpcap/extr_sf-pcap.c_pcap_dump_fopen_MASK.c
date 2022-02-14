
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int linktype_ext; int linktype; int errbuf; } ;
typedef TYPE_1__ pcap_t ;
typedef int pcap_dumper_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*,int,int *,char*) ;
 int FUNC_2 (int ,int ,char*,int ) ;

pcap_dumper_t *
FUNC_3(pcap_t *VAR_1, FILE *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->linktype);
 if (VAR_3 == -1) {
  FUNC_2(VAR_1->errbuf, VAR_0,
      "stream: link-layer type %d isn't supported in savefiles",
      VAR_1->linktype);
  return (((void*)0));
 }
 VAR_3 |= VAR_1->linktype_ext;

 return (FUNC_1(VAR_1, VAR_3, VAR_2, "stream"));
}
