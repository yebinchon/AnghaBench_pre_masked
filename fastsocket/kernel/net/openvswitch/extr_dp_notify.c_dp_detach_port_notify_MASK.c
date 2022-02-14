
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vport {struct datapath* dp; } ;
struct sk_buff {int dummy; } ;
struct datapath {int dummy; } ;
struct TYPE_5__ {int genl_sock; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (TYPE_2__*,struct sk_buff*,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct vport*) ;
 TYPE_2__* FUNC_5 (struct datapath*) ;
 TYPE_1__ VAR_2 ;
 struct sk_buff* FUNC_6 (struct vport*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct vport *VAR_3)
{
 struct sk_buff *VAR_4;
 struct datapath *VAR_5;

 VAR_5 = VAR_3->dp;
 VAR_4 = FUNC_6(VAR_3, 0, 0,
       VAR_1);
 FUNC_4(VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_3(FUNC_5(VAR_5)->genl_sock, 0,
    VAR_2.id,
    FUNC_1(VAR_4));
  return;
 }

 FUNC_2(FUNC_5(VAR_5), VAR_4, 0,
    VAR_2.id,
    VAR_0);
}
