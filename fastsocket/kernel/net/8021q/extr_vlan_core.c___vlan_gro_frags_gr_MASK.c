
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int dummy; } ;
struct sk_buff {int dev; int protocol; } ;
struct napi_struct {int dummy; } ;
typedef int gro_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct napi_struct*,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_2 (struct napi_struct*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct napi_struct*,struct vlan_group*,unsigned int,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct vlan_group*,unsigned int) ;

__attribute__((used)) static inline gro_result_t FUNC_6(struct napi_struct *VAR_2,
            struct vlan_group *VAR_3,
            unsigned int VAR_4)
{
 struct sk_buff *VAR_5 = FUNC_2(VAR_2);

 if (!VAR_5)
  return VAR_0;

 if (FUNC_3(VAR_5)) {
  VAR_5->protocol = FUNC_0(VAR_5, VAR_5->dev);
  return FUNC_5(VAR_5, VAR_3, VAR_4)
   ? VAR_0 : VAR_1;
 }

 return FUNC_1(VAR_2, VAR_5,
     FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5));
}
