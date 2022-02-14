
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vxlan_port {TYPE_2__* vs; } ;
struct vport {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef int __be16 ;
struct TYPE_6__ {int sport; } ;
struct TYPE_5__ {TYPE_1__* sock; } ;
struct TYPE_4__ {int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (int ) ;
 struct vxlan_port* FUNC_3 (struct vport const*) ;

__attribute__((used)) static int FUNC_4(const struct vport *VAR_2, struct sk_buff *VAR_3)
{
 struct vxlan_port *VAR_4 = FUNC_3(VAR_2);
 __be16 VAR_5 = FUNC_0(VAR_4->vs->sock->sk)->sport;

 if (FUNC_1(VAR_3, VAR_1, FUNC_2(VAR_5)))
  return -VAR_0;
 return 0;
}
