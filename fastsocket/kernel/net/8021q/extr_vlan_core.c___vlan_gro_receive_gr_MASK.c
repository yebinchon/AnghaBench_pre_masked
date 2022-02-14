
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int dummy; } ;
struct sk_buff {int dummy; } ;
struct napi_struct {int dummy; } ;
typedef int gro_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct napi_struct*,struct vlan_group*,unsigned int,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct vlan_group*,unsigned int) ;

__attribute__((used)) static inline gro_result_t FUNC_5(struct napi_struct *VAR_2,
                     struct vlan_group *VAR_3,
                     unsigned int VAR_4,
       struct sk_buff *VAR_5)
{
 if (FUNC_1(VAR_5))
  return FUNC_4(VAR_5, VAR_3, VAR_4)
   ? VAR_0 : VAR_1;

 FUNC_2(VAR_5);

 return FUNC_0(FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5), VAR_5);
}
