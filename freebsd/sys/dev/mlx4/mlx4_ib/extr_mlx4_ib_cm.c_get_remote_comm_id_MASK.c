
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ attr_id; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct cm_sidr_generic_msg {int request_id; } ;
struct cm_generic_msg {int remote_comm_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static u32 FUNC_2(struct ib_mad *VAR_2)
{
 if (VAR_2->mad_hdr.attr_id == VAR_0) {
  struct cm_sidr_generic_msg *VAR_3 =
   (struct cm_sidr_generic_msg *)VAR_2;
  return FUNC_0(VAR_3->request_id);
 } else if (VAR_2->mad_hdr.attr_id == VAR_1) {
  FUNC_1("trying to set remote_comm_id in SIDR_REQ\n");
  return -1;
 } else {
  struct cm_generic_msg *VAR_4 = (struct cm_generic_msg *)VAR_2;
  return FUNC_0(VAR_4->remote_comm_id);
 }
}
