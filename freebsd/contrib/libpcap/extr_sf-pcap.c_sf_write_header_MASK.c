
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_file_header {int thiszone; int snaplen; int linktype; scalar_t__ sigfigs; int version_minor; int version_major; int magic; } ;
struct TYPE_4__ {scalar_t__ tstamp_precision; } ;
struct TYPE_5__ {TYPE_1__ opt; } ;
typedef TYPE_2__ pcap_t ;
typedef int hdr ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int,int *) ;

__attribute__((used)) static int
FUNC_1(pcap_t *VAR_5, FILE *VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 struct pcap_file_header VAR_10;

 VAR_10.magic = VAR_5->opt.tstamp_precision == VAR_1 ? VAR_0 : VAR_4;
 VAR_10.version_major = VAR_2;
 VAR_10.version_minor = VAR_3;

 VAR_10.thiszone = VAR_8;
 VAR_10.snaplen = VAR_9;
 VAR_10.sigfigs = 0;
 VAR_10.linktype = VAR_7;

 if (FUNC_0((char *)&VAR_10, sizeof(VAR_10), 1, VAR_6) != 1)
  return (-1);

 return (0);
}
