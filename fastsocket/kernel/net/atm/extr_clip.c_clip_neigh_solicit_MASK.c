
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct neighbour {int dev; } ;
struct TYPE_4__ {int ip; } ;
struct TYPE_3__ {int number; } ;


 TYPE_2__* FUNC_0 (struct neighbour*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,struct neighbour*,struct sk_buff*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct neighbour *VAR_1, struct sk_buff *VAR_2)
{
 FUNC_2("clip_neigh_solicit (neigh %p, skb %p)\n", VAR_1, VAR_2);
 FUNC_3(VAR_0, FUNC_1(VAR_1->dev)->number, FUNC_0(VAR_1)->ip);
}
