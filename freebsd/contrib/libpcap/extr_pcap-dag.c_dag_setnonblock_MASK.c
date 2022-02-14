
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct pcap_dag {int dag_flags; int dag_stream; } ;
struct TYPE_4__ {int errbuf; int fd; struct pcap_dag* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef int dag_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int*,struct timeval*,struct timeval*) ;
 scalar_t__ FUNC_1 (int ,int ,int,struct timeval*,struct timeval*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_4(pcap_t *VAR_3, int VAR_4)
{
 struct pcap_dag *VAR_5 = VAR_3->priv;
 dag_size_t VAR_6;
 struct timeval VAR_7;
 struct timeval VAR_8;







 if (FUNC_3(VAR_3, VAR_4) < 0)
  return (-1);

 if (FUNC_0(VAR_3->fd, VAR_5->dag_stream,
    &VAR_6, &VAR_7, &VAR_8) < 0) {
  FUNC_2(VAR_3->errbuf, VAR_1,
      VAR_2, "dag_get_stream_poll");
  return -1;
 }





 if(VAR_4)
  VAR_6 = 0;
 else
  VAR_6 = 65536;

 if (FUNC_1(VAR_3->fd, VAR_5->dag_stream,
    VAR_6, &VAR_7, &VAR_8) < 0) {
  FUNC_2(VAR_3->errbuf, VAR_1,
      VAR_2, "dag_set_stream_poll");
  return -1;
 }

 if (VAR_4) {
  VAR_5->dag_flags |= VAR_0;
 } else {
  VAR_5->dag_flags &= ~VAR_0;
 }
 return (0);
}
