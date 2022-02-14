
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* buffer; int bufsize; int errbuf; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*,...) ;

__attribute__((used)) static int
FUNC_3(pcap_t *VAR_1, int VAR_2)
{
 unsigned char *VAR_3;

 if (VAR_2<=0) {

  FUNC_2(VAR_1->errbuf, VAR_0,
      "Error: invalid size %d",VAR_2);
  return (-1);
 }


 VAR_3=(unsigned char*)FUNC_1(sizeof(char)*VAR_2);

 if (!VAR_3) {
  FUNC_2(VAR_1->errbuf, VAR_0,
      "Error: not enough memory");
  return (-1);
 }

 FUNC_0(VAR_1->buffer);

 VAR_1->buffer=VAR_3;
 VAR_1->bufsize=VAR_2;

 return (0);
}
