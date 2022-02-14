
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_2__ {int size; scalar_t__ context; int result; int flags; int type; } ;
struct hpt_iop_request_set_config {TYPE_1__ header; } ;
struct hpt_iop_hba {int bar0h; int bar0t; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,scalar_t__,scalar_t__*,int) ;
 scalar_t__ FUNC_4 (struct hpt_iop_hba*,scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct hpt_iop_hba *VAR_6,
    struct hpt_iop_request_set_config *VAR_7)
{
 u_int32_t VAR_8;

 VAR_8 = FUNC_0(VAR_4);

 if (VAR_8 == VAR_0)
  return -1;

 VAR_7->header.size = sizeof(struct hpt_iop_request_set_config);
 VAR_7->header.type = VAR_2;
 VAR_7->header.flags = VAR_1;
 VAR_7->header.result = VAR_3;
 VAR_7->header.context = 0;

 FUNC_3(VAR_6->bar0t, VAR_6->bar0h, VAR_8,
  (u_int32_t *)VAR_7,
  sizeof(struct hpt_iop_request_set_config) >> 2);

 if (FUNC_4(VAR_6, VAR_8, 20000)) {
  FUNC_2(("hptiop: set config send cmd failed"));
  return -1;
 }

 FUNC_1(VAR_5, VAR_8);

 return 0;
}
