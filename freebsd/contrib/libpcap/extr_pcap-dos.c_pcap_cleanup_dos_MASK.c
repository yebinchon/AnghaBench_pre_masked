
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ps_drop; } ;
struct pcap_dos {TYPE_1__ stat; } ;
struct TYPE_6__ {int fd; struct pcap_dos* priv; } ;
typedef TYPE_2__ pcap_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int ** VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_3 (pcap_t *VAR_3)
{
  struct pcap_dos *VAR_4;

  if (!VAR_0)
  {
    VAR_4 = VAR_3->priv;
    if (FUNC_2(VAR_3,((void*)0)) < 0)
       VAR_4->stat.ps_drop = 0;
    if (!FUNC_1(VAR_3->fd))
       return;

    VAR_1 [VAR_3->fd-1] = ((void*)0);
    VAR_3->fd = 0;
    if (VAR_2 > 0)
        VAR_2--;
    if (VAR_2 > 0)
       return;
  }
  FUNC_0();

}
