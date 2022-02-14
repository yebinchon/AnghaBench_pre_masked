
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwn_pio {int rx; int mcast; int * wme; } ;
struct TYPE_2__ {struct bwn_pio pio; } ;
struct bwn_mac {TYPE_1__ mac_method; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_2 (struct bwn_mac*,int *,int) ;
 int FUNC_3 (struct bwn_mac*,int *,int ) ;
 int FUNC_4 (struct bwn_mac*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct bwn_mac *VAR_8)
{
 struct bwn_pio *VAR_9 = &VAR_8->mac_method.pio;

 FUNC_1(VAR_8, VAR_0, FUNC_0(VAR_8, VAR_0)
     & ~VAR_1);
 FUNC_4(VAR_8, VAR_2, VAR_3, 0);

 FUNC_2(VAR_8, &VAR_9->wme[VAR_5], 0);
 FUNC_2(VAR_8, &VAR_9->wme[VAR_4], 1);
 FUNC_2(VAR_8, &VAR_9->wme[VAR_6], 2);
 FUNC_2(VAR_8, &VAR_9->wme[VAR_7], 3);
 FUNC_2(VAR_8, &VAR_9->mcast, 4);
 FUNC_3(VAR_8, &VAR_9->rx, 0);
}
