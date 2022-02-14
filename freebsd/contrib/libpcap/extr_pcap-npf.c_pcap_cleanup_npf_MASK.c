
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pcap_win {scalar_t__ rfmon_selfstart; int * adapter; } ;
struct TYPE_5__ {int device; } ;
struct TYPE_6__ {TYPE_1__ opt; struct pcap_win* priv; } ;
typedef TYPE_2__ pcap_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(pcap_t *VAR_0)
{
 struct pcap_win *VAR_1 = VAR_0->priv;

 if (VAR_1->adapter != ((void*)0)) {
  FUNC_0(VAR_1->adapter);
  VAR_1->adapter = ((void*)0);
 }
 if (VAR_1->rfmon_selfstart)
 {
  FUNC_1(VAR_0->opt.device, 0);
 }
 FUNC_2(VAR_0);
}
