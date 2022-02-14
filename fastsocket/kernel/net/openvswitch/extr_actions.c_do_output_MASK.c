
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {int dummy; } ;
struct sk_buff {int dummy; } ;
struct datapath {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct vport* FUNC_1 (struct datapath*,int) ;
 int FUNC_2 (struct vport*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct datapath *VAR_2, struct sk_buff *VAR_3, int VAR_4)
{
 struct vport *VAR_5;

 if (FUNC_3(!VAR_3))
  return -VAR_1;

 VAR_5 = FUNC_1(VAR_2, VAR_4);
 if (FUNC_3(!VAR_5)) {
  FUNC_0(VAR_3);
  return -VAR_0;
 }

 FUNC_2(VAR_5, VAR_3);
 return 0;
}
