
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct adapter {TYPE_2__ hw; scalar_t__ vf_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct adapter *VAR_5)
{
 u32 VAR_6, VAR_7;

 if (VAR_5->vf_ifp)
  return;

 if (VAR_5->hw.mac.type == VAR_4) {
  VAR_7 = FUNC_0(&VAR_5->hw, VAR_2);
  FUNC_1(&VAR_5->hw, VAR_2,
      VAR_7 | VAR_3);
  return;
 }

 VAR_6 = FUNC_0(&VAR_5->hw, VAR_0);
 FUNC_1(&VAR_5->hw, VAR_0,
     VAR_6 | VAR_1);
}
