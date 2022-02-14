
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
 struct ip_set** VAR_2 ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (struct ip_set*,struct sk_buff const*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(ip_set_id_t VAR_3, const struct sk_buff *VAR_4,
    u8 VAR_5, u8 VAR_6, u8 VAR_7)
{
 struct ip_set *VAR_8 = VAR_2[VAR_3];
 int VAR_9 = 0;

 FUNC_0(VAR_8 == ((void*)0));
 FUNC_1("set %s, index %u\n", VAR_8->name, VAR_3);

 if (VAR_6 < VAR_8->type->dimension ||
     !(VAR_5 == VAR_8->family || VAR_8->family == VAR_0))
  return 0;

 FUNC_3(&VAR_8->lock);
 VAR_9 = VAR_8->variant->kadt(VAR_8, VAR_4, VAR_1, VAR_5, VAR_6, VAR_7);
 FUNC_4(&VAR_8->lock);

 return VAR_9;
}
