
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;
struct ip_set_hash {int netmask; TYPE_1__* table; scalar_t__ maxelem; int timeout; int initval; } ;
struct ip_set {scalar_t__ family; struct ip_set_hash* data; int name; int * variant; } ;
struct TYPE_2__ {int htable_bits; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct ip_set*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct ip_set*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr**,size_t) ;
 int FUNC_8 (struct nlattr*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct ip_set_hash*) ;
 struct ip_set_hash* FUNC_11 (int,int ) ;
 int FUNC_12 (struct nlattr*) ;
 int FUNC_13 (char*,int ,char*,...) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int
FUNC_15(struct ip_set *VAR_19, struct nlattr *VAR_20[], u32 VAR_21)
{
 u32 VAR_22 = VAR_8, VAR_23 = VAR_9;
 u8 VAR_24, VAR_25;
 size_t VAR_26;
 struct ip_set_hash *VAR_27;

 if (!(VAR_19->family == VAR_0 || VAR_19->family == VAR_1))
  return -VAR_10;
 VAR_24 = VAR_19->family == VAR_0 ? 32 : 128;
 FUNC_13("Create set %s with family %s\n",
   VAR_19->name, VAR_19->family == VAR_0 ? "inet" : "inet6");

 if (FUNC_14(!FUNC_7(VAR_20, VAR_4) ||
       !FUNC_7(VAR_20, VAR_5) ||
       !FUNC_7(VAR_20, VAR_7)))
  return -VAR_12;

 if (VAR_20[VAR_4]) {
  VAR_22 = FUNC_6(VAR_20[VAR_4]);
  if (VAR_22 < VAR_13)
   VAR_22 = VAR_13;
 }

 if (VAR_20[VAR_5])
  VAR_23 = FUNC_6(VAR_20[VAR_5]);

 if (VAR_20[VAR_6]) {
  VAR_24 = FUNC_12(VAR_20[VAR_6]);

  if ((VAR_19->family == VAR_0 && VAR_24 > 32) ||
      (VAR_19->family == VAR_1 && VAR_24 > 128) ||
      VAR_24 == 0)
   return -VAR_11;
 }

 VAR_27 = FUNC_11(sizeof(*VAR_27), VAR_3);
 if (!VAR_27)
  return -VAR_2;

 VAR_27->maxelem = VAR_23;
 VAR_27->netmask = VAR_24;
 FUNC_0(&VAR_27->initval, sizeof(VAR_27->initval));
 VAR_27->timeout = VAR_14;

 VAR_25 = FUNC_3(VAR_22);
 VAR_26 = FUNC_4(VAR_25);
 if (VAR_26 == 0) {
  FUNC_10(VAR_27);
  return -VAR_2;
 }
 VAR_27->table = FUNC_5(VAR_26);
 if (!VAR_27->table) {
  FUNC_10(VAR_27);
  return -VAR_2;
 }
 VAR_27->table->htable_bits = VAR_25;

 VAR_19->data = VAR_27;

 if (VAR_20[VAR_7]) {
  VAR_27->timeout = FUNC_8(VAR_20[VAR_7]);

  VAR_19->variant = VAR_19->family == VAR_0
   ? &VAR_15 : &VAR_17;

  if (VAR_19->family == VAR_0)
   FUNC_1(VAR_19);
  else
   FUNC_2(VAR_19);
 } else {
  VAR_19->variant = VAR_19->family == VAR_0
   ? &VAR_16 : &VAR_18;
 }

 FUNC_13("create %s hashsize %u (%u) maxelem %u: %p(%p)\n",
   VAR_19->name, FUNC_9(VAR_27->table->htable_bits),
   VAR_27->table->htable_bits, VAR_27->maxelem, VAR_19->data, VAR_27->table);

 return 0;
}
