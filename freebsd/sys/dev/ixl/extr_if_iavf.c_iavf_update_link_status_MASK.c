
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ixl_vsi {scalar_t__ link_active; int ctx; } ;
struct iavf_sc {int link_speed; scalar_t__ link_up; struct ixl_vsi vsi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct iavf_sc*,char*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct iavf_sc *VAR_4)
{
 struct ixl_vsi *VAR_5 = &VAR_4->vsi;
 u64 VAR_6;

 if (VAR_4->link_up){
  if (VAR_5->link_active == VAR_0) {
   VAR_5->link_active = VAR_3;
   VAR_6 = FUNC_2(VAR_4->link_speed);
   FUNC_0(VAR_4, "baudrate: %lu\n", VAR_6);
   FUNC_1(VAR_5->ctx, VAR_2, VAR_6);
  }
 } else {
  if (VAR_5->link_active == VAR_3) {
   VAR_5->link_active = VAR_0;
   FUNC_1(VAR_5->ctx, VAR_1, 0);
  }
 }
}
