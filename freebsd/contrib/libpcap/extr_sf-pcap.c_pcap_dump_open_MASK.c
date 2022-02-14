
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int linktype_ext; int errbuf; int linktype; int activated; } ;
typedef TYPE_1__ pcap_t ;
typedef int pcap_dumper_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,int ,int ,char*,char const*) ;
 int * FUNC_3 (TYPE_1__*,int,int *,char const*) ;
 int FUNC_4 (int ,int ,char*,...) ;
 int * VAR_2 ;

pcap_dumper_t *
FUNC_5(pcap_t *VAR_3, const char *VAR_4)
{
 FILE *VAR_5;
 int VAR_6;





 if (!VAR_3->activated) {
  FUNC_4(VAR_3->errbuf, VAR_0,
      "%s: not-yet-activated pcap_t passed to pcap_dump_open",
      VAR_4);
  return (((void*)0));
 }
 VAR_6 = FUNC_0(VAR_3->linktype);
 if (VAR_6 == -1) {
  FUNC_4(VAR_3->errbuf, VAR_0,
      "%s: link-layer type %d isn't supported in savefiles",
      VAR_4, VAR_3->linktype);
  return (((void*)0));
 }
 VAR_6 |= VAR_3->linktype_ext;

 if (VAR_4 == ((void*)0)) {
  FUNC_4(VAR_3->errbuf, VAR_0,
      "A null pointer was supplied as the file name");
  return ((void*)0);
 }
 if (VAR_4[0] == '-' && VAR_4[1] == '\0') {
  VAR_5 = VAR_2;
  VAR_4 = "standard output";
 } else {






  VAR_5 = FUNC_1(VAR_4, "wb");
  if (VAR_5 == ((void*)0)) {
   FUNC_2(VAR_3->errbuf, VAR_0,
       VAR_1, "%s", VAR_4);
   return (((void*)0));
  }
 }
 return (FUNC_3(VAR_3, VAR_6, VAR_5, VAR_4));
}
