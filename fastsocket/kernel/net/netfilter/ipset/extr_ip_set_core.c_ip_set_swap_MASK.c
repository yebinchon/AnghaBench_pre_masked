
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct ip_set {char* name; int ref; TYPE_1__* type; } ;
typedef size_t ip_set_id_t ;
struct TYPE_2__ {scalar_t__ features; scalar_t__ family; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t FUNC_0 (int ) ;
 struct ip_set** VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct nlattr const* const) ;
 scalar_t__ FUNC_2 (struct nlattr const* const*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct sock *VAR_10, struct sk_buff *VAR_11,
     const struct nlmsghdr *VAR_12,
     const struct nlattr * const VAR_13[])
{
 struct ip_set *VAR_14, *VAR_15;
 ip_set_id_t VAR_16, VAR_17;
 char VAR_18[VAR_7];

 if (FUNC_5(FUNC_2(VAR_13) ||
       VAR_13[VAR_1] == ((void*)0) ||
       VAR_13[VAR_2] == ((void*)0)))
  return -VAR_4;

 VAR_16 = FUNC_0(FUNC_1(VAR_13[VAR_1]));
 if (VAR_16 == VAR_6)
  return -VAR_0;

 VAR_17 = FUNC_0(FUNC_1(VAR_13[VAR_2]));
 if (VAR_17 == VAR_6)
  return -VAR_3;

 VAR_14 = VAR_8[VAR_16];
 VAR_15 = VAR_8[VAR_17];




 if (!(VAR_14->type->features == VAR_15->type->features &&
       VAR_14->type->family == VAR_15->type->family))
  return -VAR_5;

 FUNC_3(VAR_18, VAR_14->name, VAR_7);
 FUNC_3(VAR_14->name, VAR_15->name, VAR_7);
 FUNC_3(VAR_15->name, VAR_18, VAR_7);

 FUNC_6(&VAR_9);
 FUNC_4(VAR_14->ref, VAR_15->ref);
 VAR_8[VAR_16] = VAR_15;
 VAR_8[VAR_17] = VAR_14;
 FUNC_7(&VAR_9);

 return 0;
}
