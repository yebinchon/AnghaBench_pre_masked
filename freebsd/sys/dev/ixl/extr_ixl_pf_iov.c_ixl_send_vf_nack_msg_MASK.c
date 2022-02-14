
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ixl_vf {int vf_num; } ;
struct ixl_pf {int hw; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (struct ixl_pf*,int,char*,int ,int ,int ,int,int ,char const*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct ixl_pf*,struct ixl_vf*,int ,int,int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct ixl_pf *VAR_0, struct ixl_vf *VAR_1, uint16_t VAR_2,
    enum i40e_status_code VAR_3, const char *VAR_4, int VAR_5)
{

 FUNC_0(VAR_0, 1,
     "Sending NACK (op=%s[%d], err=%s[%d]) to VF-%d from %s:%d\n",
     FUNC_3(VAR_2), VAR_2, FUNC_1(&VAR_0->hw, VAR_3),
     VAR_3, VAR_1->vf_num, VAR_4, VAR_5);
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0), 0);
}
