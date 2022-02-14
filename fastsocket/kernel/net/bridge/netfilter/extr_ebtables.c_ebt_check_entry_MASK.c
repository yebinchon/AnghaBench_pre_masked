
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_tgchk_param {char const* table; unsigned int hook_mask; int targinfo; struct xt_target* target; int family; struct ebt_entry* entryinfo; } ;
struct xt_target {int me; } ;
struct xt_mtchk_param {char const* table; unsigned int hook_mask; int family; struct ebt_entry* entryinfo; } ;
struct ebt_table_info {scalar_t__* hook_entry; } ;
struct ebt_standard_target {int verdict; } ;
struct TYPE_4__ {struct xt_target* target; int name; } ;
struct ebt_entry_target {size_t target_size; int data; TYPE_2__ u; } ;
struct ebt_entry {int bitmask; int invflags; int target_offset; size_t next_offset; int ethproto; } ;
struct TYPE_3__ {scalar_t__ chaininfo; } ;
struct ebt_cl_stack {unsigned int hookmask; TYPE_1__ cs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ebt_entry*,int ,...) ;
 int VAR_4 ;
 int FUNC_2 (struct ebt_entry*,int ,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct xt_target*) ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct xt_target*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct xt_target VAR_15 ;
 int FUNC_5 (int ) ;
 struct xt_target* FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (struct xt_tgchk_param*,size_t,int ,int) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static inline int
FUNC_9(struct ebt_entry *VAR_16, struct ebt_table_info *VAR_17,
   const char *VAR_18, unsigned int *VAR_19,
   struct ebt_cl_stack *VAR_20, unsigned int VAR_21)
{
 struct ebt_entry_target *VAR_22;
 struct xt_target *VAR_23;
 unsigned int VAR_24, VAR_25, VAR_26 = 0, VAR_27 = 0;
 size_t VAR_28;
 int VAR_29;
 struct xt_mtchk_param VAR_30;
 struct xt_tgchk_param VAR_31;


 if (VAR_16->bitmask == 0)
  return 0;

 if (VAR_16->bitmask & ~VAR_1) {
  FUNC_0("Unknown flag for bitmask\n");
  return -VAR_6;
 }
 if (VAR_16->invflags & ~VAR_2) {
  FUNC_0("Unknown flag for inv bitmask\n");
  return -VAR_6;
 }
 if ( (VAR_16->bitmask & VAR_4) && (VAR_16->bitmask & VAR_0) ) {
  FUNC_0("NOPROTO & 802_3 not allowed\n");
  return -VAR_6;
 }

 for (VAR_24 = 0; VAR_24 < VAR_9; VAR_24++) {
  if (!VAR_17->hook_entry[VAR_24])
   continue;
  if ((char *)VAR_17->hook_entry[VAR_24] < (char *)VAR_16)
   VAR_26 = VAR_24;
  else
   break;
 }


 if (VAR_24 < VAR_9)
  VAR_27 = (1 << VAR_26) | (1 << VAR_9);
 else {
  for (VAR_24 = 0; VAR_24 < VAR_21; VAR_24++)
   if ((char *)(VAR_20[VAR_24].cs.chaininfo) > (char *)VAR_16)
    break;
  if (VAR_24 == 0)
   VAR_27 = (1 << VAR_26) | (1 << VAR_9);
  else
   VAR_27 = VAR_20[VAR_24 - 1].hookmask;
 }
 VAR_24 = 0;

 VAR_30.table = VAR_31.table = VAR_18;
 VAR_30.entryinfo = VAR_31.entryinfo = VAR_16;
 VAR_30.hook_mask = VAR_31.hook_mask = VAR_27;
 VAR_30.family = VAR_31.family = VAR_8;
 VAR_29 = FUNC_1(VAR_16, VAR_11, &VAR_30, &VAR_24);
 if (VAR_29 != 0)
  goto cleanup_matches;
 VAR_25 = 0;
 VAR_29 = FUNC_2(VAR_16, VAR_12, &VAR_31, &VAR_25);
 if (VAR_29 != 0)
  goto cleanup_watchers;
 VAR_22 = (struct ebt_entry_target *)(((char *)VAR_16) + VAR_16->target_offset);
 VAR_28 = VAR_16->next_offset - VAR_16->target_offset;

 VAR_23 = FUNC_6(
   FUNC_8(VAR_8, VAR_22->u.name, 0),
   "ebt_%s", VAR_22->u.name);
 if (FUNC_3(VAR_23)) {
  VAR_29 = FUNC_4(VAR_23);
  goto cleanup_watchers;
 } else if (VAR_23 == ((void*)0)) {
  VAR_29 = -VAR_7;
  goto cleanup_watchers;
 }

 VAR_22->u.target = VAR_23;
 if (VAR_22->u.target == &VAR_15) {
  if (VAR_28 < sizeof(struct ebt_standard_target)) {
   FUNC_0("Standard target size too big\n");
   VAR_29 = -VAR_5;
   goto cleanup_watchers;
  }
  if (((struct ebt_standard_target *)VAR_22)->verdict <
     -VAR_10) {
   FUNC_0("Invalid standard target\n");
   VAR_29 = -VAR_5;
   goto cleanup_watchers;
  }
 } else if (VAR_22->target_size > VAR_28 - sizeof(struct ebt_entry_target)) {
  FUNC_5(VAR_22->u.target->me);
  VAR_29 = -VAR_5;
  goto cleanup_watchers;
 }

 VAR_31.target = VAR_23;
 VAR_31.targinfo = VAR_22->data;
 VAR_29 = FUNC_7(&VAR_31, VAR_22->target_size,
       VAR_16->ethproto, VAR_16->invflags & VAR_3);
 if (VAR_29 < 0) {
  FUNC_5(VAR_23->me);
  goto cleanup_watchers;
 }
 (*VAR_19)++;
 return 0;
cleanup_watchers:
 FUNC_2(VAR_16, VAR_14, &VAR_25);
cleanup_matches:
 FUNC_1(VAR_16, VAR_13, &VAR_24);
 return VAR_29;
}
