
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags2; int flags; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,char*) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*) ;

__attribute__((used)) static inline void FUNC_2(struct mlx4_dev *VAR_2)
{
 if (!(VAR_2->caps.flags2 & VAR_0))
  return;

 if (FUNC_1(VAR_2)) {
  FUNC_0(VAR_2, "SRIOV mode - Disabling Ignore FCS");
  VAR_2->caps.flags2 &= ~VAR_0;
  return;
 }

 if (!(VAR_2->caps.flags & VAR_1)) {
  FUNC_0(VAR_2,
    "Keep FCS is not supported - Disabling Ignore FCS");
  VAR_2->caps.flags2 &= ~VAR_0;
  return;
 }
}
