
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
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,char*) ;

int
FUNC_2(pcap_t *VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5->fd, VAR_0, 0);
 if (VAR_7 == -1) {
  FUNC_1(VAR_5->errbuf, VAR_3,
      VAR_4, "F_GETFL");
  return (-1);
 }
 if (VAR_6)
  VAR_7 |= VAR_2;
 else
  VAR_7 &= ~VAR_2;
 if (FUNC_0(VAR_5->fd, VAR_1, VAR_7) == -1) {
  FUNC_1(VAR_5->errbuf, VAR_3,
      VAR_4, "F_SETFL");
  return (-1);
 }
 return (0);
}
