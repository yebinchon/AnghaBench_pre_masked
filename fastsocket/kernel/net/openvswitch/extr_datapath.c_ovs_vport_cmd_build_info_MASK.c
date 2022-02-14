
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vport {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct sk_buff* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct vport*,struct sk_buff*,int ,int ,int ,int ) ;

struct sk_buff *FUNC_4(struct vport *VAR_3, u32 VAR_4,
      u32 VAR_5, u8 VAR_6)
{
 struct sk_buff *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_7)
  return FUNC_1(-VAR_0);

 VAR_8 = FUNC_3(VAR_3, VAR_7, VAR_4, VAR_5, 0, VAR_6);
 FUNC_0(VAR_8 < 0);

 return VAR_7;
}
