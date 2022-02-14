
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int errbuf; int * buffer; scalar_t__ offset; scalar_t__ bufsize; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*) ;

int
FUNC_2(pcap_t *VAR_3)
{
 VAR_3->bufsize = VAR_1;
 VAR_3->buffer = FUNC_0(VAR_3->bufsize + VAR_3->offset);
 if (VAR_3->buffer == ((void*)0)) {
  FUNC_1(VAR_3->errbuf, VAR_0,
      VAR_2, "malloc");
  return (-1);
 }

 return (0);
}
