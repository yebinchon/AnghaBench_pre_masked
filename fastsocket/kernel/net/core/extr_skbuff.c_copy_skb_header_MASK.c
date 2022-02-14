
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct sk_buff {unsigned long data; unsigned long transport_header; unsigned long network_header; unsigned long mac_header; } const sk_buff ;
struct TYPE_2__ {int gso_type; int gso_segs; int gso_size; } ;


 int FUNC_0 (struct sk_buff const*,struct sk_buff const*) ;
 scalar_t__ FUNC_1 (struct sk_buff const*) ;
 TYPE_1__* FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0, const struct sk_buff *VAR_1)
{




 unsigned long VAR_2 = VAR_0->data - VAR_1->data;


 FUNC_0(VAR_0, VAR_1);



 VAR_0->transport_header += VAR_2;
 VAR_0->network_header += VAR_2;
 if (FUNC_1(VAR_0))
  VAR_0->mac_header += VAR_2;

 FUNC_2(VAR_0)->gso_size = FUNC_2(VAR_1)->gso_size;
 FUNC_2(VAR_0)->gso_segs = FUNC_2(VAR_1)->gso_segs;
 FUNC_2(VAR_0)->gso_type = FUNC_2(VAR_1)->gso_type;
}
