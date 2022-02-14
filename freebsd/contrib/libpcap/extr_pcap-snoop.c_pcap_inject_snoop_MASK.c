
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int errbuf; int fd; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,void const*,size_t) ;

__attribute__((used)) static int
FUNC_2(pcap_t *VAR_2, const void *VAR_3, size_t VAR_4)
{
 int VAR_5;





 VAR_5 = FUNC_1(VAR_2->fd, VAR_3, VAR_4);
 if (VAR_5 == -1) {
  FUNC_0(VAR_2->errbuf, VAR_0,
      VAR_1, "send");
  return (-1);
 }
 return (VAR_5);
}
