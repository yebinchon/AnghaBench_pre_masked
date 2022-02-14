
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int errbuf; int snapshot; int tzoff; } ;
typedef TYPE_1__ pcap_t ;
typedef int pcap_dumper_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,char*,char const*) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int,int ,int ) ;
 int * VAR_3 ;

__attribute__((used)) static pcap_dumper_t *
FUNC_5(pcap_t *VAR_4, int VAR_5, FILE *VAR_6, const char *VAR_7)
{
 if (FUNC_4(VAR_4, VAR_6, VAR_5, VAR_4->tzoff, VAR_4->snapshot) == -1) {
  FUNC_2(VAR_4->errbuf, VAR_0,
      VAR_2, "Can't write to %s", VAR_7);
  if (VAR_6 != VAR_3)
   (void)FUNC_1(VAR_6);
  return (((void*)0));
 }
 return ((pcap_dumper_t *)VAR_6);
}
