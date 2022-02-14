
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct ip_set {scalar_t__ family; int lock; TYPE_2__* variant; TYPE_1__* type; int name; } ;
typedef size_t ip_set_id_t ;
struct TYPE_4__ {int (* kadt ) (struct ip_set*,struct sk_buff const*,int ,scalar_t__,scalar_t__,scalar_t__) ;} ;
struct TYPE_3__ {scalar_t__ dimension; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ip_set** VAR_4 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ip_set*,struct sk_buff const*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct ip_set*,struct sk_buff const*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(ip_set_id_t VAR_5, const struct sk_buff *VAR_6,
     u8 VAR_7, u8 VAR_8, u8 VAR_9)
{
 struct ip_set *VAR_10 = VAR_4[VAR_5];
 int VAR_11 = 0;

 FUNC_0(VAR_10 == ((void*)0));
 FUNC_1("set %s, index %u\n", VAR_10->name, VAR_5);

 if (VAR_8 < VAR_10->type->dimension ||
     !(VAR_7 == VAR_10->family || VAR_10->family == VAR_0))
  return 0;

 FUNC_2(&VAR_10->lock);
 VAR_11 = VAR_10->variant->kadt(VAR_10, VAR_6, VAR_3, VAR_7, VAR_8, VAR_9);
 FUNC_3(&VAR_10->lock);

 if (VAR_11 == -VAR_1) {

  FUNC_1("element must be competed, ADD is triggered\n");
  FUNC_6(&VAR_10->lock);
  VAR_10->variant->kadt(VAR_10, VAR_6, VAR_2, VAR_7, VAR_8, VAR_9);
  FUNC_7(&VAR_10->lock);
  VAR_11 = 1;
 }


 return (VAR_11 < 0 ? 0 : VAR_11);
}
