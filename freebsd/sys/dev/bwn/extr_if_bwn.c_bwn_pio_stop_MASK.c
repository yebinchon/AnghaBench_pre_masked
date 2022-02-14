
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwn_pio {int * wme; int mcast; } ;
struct TYPE_2__ {struct bwn_pio pio; } ;
struct bwn_mac {int mac_flags; TYPE_1__ mac_method; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct bwn_mac *VAR_5)
{
 struct bwn_pio *VAR_6;

 if (VAR_5->mac_flags & VAR_0)
  return;
 VAR_6 = &VAR_5->mac_method.pio;

 FUNC_0(&VAR_6->mcast);
 FUNC_0(&VAR_6->wme[VAR_4]);
 FUNC_0(&VAR_6->wme[VAR_3]);
 FUNC_0(&VAR_6->wme[VAR_1]);
 FUNC_0(&VAR_6->wme[VAR_2]);
}
