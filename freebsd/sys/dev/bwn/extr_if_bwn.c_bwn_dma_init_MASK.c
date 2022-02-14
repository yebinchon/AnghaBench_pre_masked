
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwn_dma {int rx; int mcast; int * wme; } ;
struct TYPE_2__ {struct bwn_dma dma; } ;
struct bwn_mac {TYPE_1__ mac_method; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct bwn_mac *VAR_4)
{
 struct bwn_dma *VAR_5 = &VAR_4->mac_method.dma;


 FUNC_0(VAR_5->wme[VAR_1]);
 FUNC_0(VAR_5->wme[VAR_0]);
 FUNC_0(VAR_5->wme[VAR_2]);
 FUNC_0(VAR_5->wme[VAR_3]);
 FUNC_0(VAR_5->mcast);

 FUNC_0(VAR_5->rx);
}
