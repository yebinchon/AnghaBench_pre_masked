
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int errbuf; int fd; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;

int
FUNC_2(pcap_t *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->fd, VAR_0, 0);
 if (VAR_5 == -1) {
  FUNC_1(VAR_4->errbuf, VAR_2,
      VAR_3, "F_GETFL");
  return (-1);
 }
 if (VAR_5 & VAR_1)
  return (1);
 else
  return (0);
}
