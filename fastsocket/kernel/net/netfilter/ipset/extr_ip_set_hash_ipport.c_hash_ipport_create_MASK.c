
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;
struct ip_set_hash {TYPE_1__* table; scalar_t__ maxelem; int timeout; int initval; } ;
struct ip_set {scalar_t__ family; struct ip_set_hash* data; int name; int * variant; } ;
struct TYPE_3__ {int htable_bits; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct ip_set*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct ip_set*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr**,size_t) ;
 int FUNC_8 (struct nlattr*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ip_set_hash*) ;
 struct ip_set_hash* FUNC_11 (int,int ) ;
 int FUNC_12 (char*,int ,int ,int ,scalar_t__,struct ip_set_hash*,TYPE_1__*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int
FUNC_14(struct ip_set *VAR_17, struct nlattr *VAR_18[], u32 VAR_19)
{
 struct ip_set_hash *VAR_20;
 u32 VAR_21 = VAR_7, VAR_22 = VAR_8;
 u8 VAR_23;
 size_t VAR_24;

 if (!(VAR_17->family == VAR_0 || VAR_17->family == VAR_1))
  return -VAR_9;

 if (FUNC_13(!FUNC_7(VAR_18, VAR_4) ||
       !FUNC_7(VAR_18, VAR_5) ||
       !FUNC_7(VAR_18, VAR_6)))
  return -VAR_10;

 if (VAR_18[VAR_4]) {
  VAR_21 = FUNC_6(VAR_18[VAR_4]);
  if (VAR_21 < VAR_11)
   VAR_21 = VAR_11;
 }

 if (VAR_18[VAR_5])
  VAR_22 = FUNC_6(VAR_18[VAR_5]);

 VAR_20 = FUNC_11(sizeof(*VAR_20), VAR_3);
 if (!VAR_20)
  return -VAR_2;

 VAR_20->maxelem = VAR_22;
 FUNC_0(&VAR_20->initval, sizeof(VAR_20->initval));
 VAR_20->timeout = VAR_12;

 VAR_23 = FUNC_3(VAR_21);
 VAR_24 = FUNC_4(VAR_23);
 if (VAR_24 == 0) {
  FUNC_10(VAR_20);
  return -VAR_2;
 }
 VAR_20->table = FUNC_5(VAR_24);
 if (!VAR_20->table) {
  FUNC_10(VAR_20);
  return -VAR_2;
 }
 VAR_20->table->htable_bits = VAR_23;

 VAR_17->data = VAR_20;

 if (VAR_18[VAR_6]) {
  VAR_20->timeout = FUNC_8(VAR_18[VAR_6]);

  VAR_17->variant = VAR_17->family == VAR_0
   ? &VAR_13 : &VAR_15;

  if (VAR_17->family == VAR_0)
   FUNC_1(VAR_17);
  else
   FUNC_2(VAR_17);
 } else {
  VAR_17->variant = VAR_17->family == VAR_0
   ? &VAR_14 : &VAR_16;
 }

 FUNC_12("create %s hashsize %u (%u) maxelem %u: %p(%p)\n",
   VAR_17->name, FUNC_9(VAR_20->table->htable_bits),
   VAR_20->table->htable_bits, VAR_20->maxelem, VAR_17->data, VAR_20->table);

 return 0;
}
