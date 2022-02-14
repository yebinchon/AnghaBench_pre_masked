
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct query_info {int dummy; } ;
struct TYPE_10__ {size_t curmod; scalar_t__ return_rcode; scalar_t__ need_refetch; int qinfo; int ** minfo; } ;
struct TYPE_9__ {scalar_t__ count; } ;
struct mesh_state {scalar_t__ num_activated; TYPE_4__ s; TYPE_3__ sub_set; } ;
struct TYPE_8__ {size_t num; TYPE_1__** mod; } ;
struct mesh_area {TYPE_2__ mods; } ;
typedef enum module_ext_state { ____Placeholder_module_ext_state } module_ext_state ;
typedef enum module_ev { ____Placeholder_module_ev } module_ev ;
struct TYPE_7__ {int (* clear ) (TYPE_4__*,size_t) ;int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (TYPE_4__*,size_t)) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (struct mesh_state*,struct query_info**,int *) ;
 int FUNC_5 (struct mesh_state*) ;
 int FUNC_6 (struct mesh_area*,struct query_info*,int ,int ,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct mesh_area*,struct mesh_state*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (TYPE_4__*,size_t) ;

__attribute__((used)) static int
FUNC_10(struct mesh_area* VAR_11, struct mesh_state* VAR_12,
 enum module_ext_state VAR_13, enum module_ev* VAR_14)
{
 VAR_12->num_activated++;
 if(VAR_12->num_activated > VAR_2) {

  FUNC_2("internal error: looping module (%s) stopped",
   VAR_11->mods.mod[VAR_12->s.curmod]->name);
  FUNC_3(0, "pass error for qstate",
   &VAR_12->s.qinfo);
  VAR_13 = VAR_4;
 }
 if(VAR_13 == VAR_9 || VAR_13 == VAR_8) {

  VAR_12->s.curmod++;
  if(VAR_11->mods.num == VAR_12->s.curmod) {
   FUNC_2("Cannot pass to next module; at last module");
   FUNC_3(VAR_3, "pass error for qstate",
    &VAR_12->s.qinfo);
   VAR_12->s.curmod--;
   return FUNC_10(VAR_11, VAR_12, VAR_4, VAR_14);
  }
  if(VAR_13 == VAR_8) {
   int VAR_15 = VAR_12->s.curmod;
   for(; VAR_12->s.curmod < VAR_11->mods.num;
    VAR_12->s.curmod++) {
    FUNC_0(FUNC_1(
     VAR_11->mods.mod[VAR_12->s.curmod]->clear));
    (*VAR_11->mods.mod[VAR_12->s.curmod]->clear)
     (&VAR_12->s, VAR_12->s.curmod);
    VAR_12->s.minfo[VAR_12->s.curmod] = ((void*)0);
   }
   VAR_12->s.curmod = VAR_15;
  }
  *VAR_14 = VAR_6;
  return 1;
 }
 if(VAR_13 == VAR_10 && VAR_12->sub_set.count == 0) {
  FUNC_2("module cannot wait for subquery, subquery list empty");
  FUNC_3(VAR_3, "pass error for qstate",
   &VAR_12->s.qinfo);
  VAR_13 = VAR_4;
 }
 if(VAR_13 == VAR_4 && VAR_12->s.return_rcode == VAR_0) {

  VAR_12->s.return_rcode = VAR_1;
 }
 if(VAR_13 == VAR_4) {
  FUNC_5(VAR_12);
  FUNC_8(VAR_11, VAR_12);
  FUNC_7(&VAR_12->s);
  return 0;
 }
 if(VAR_13 == VAR_7) {
  if(VAR_12->s.curmod == 0) {
   struct query_info* VAR_16 = ((void*)0);
   uint16_t VAR_17;

   FUNC_5(VAR_12);
   FUNC_8(VAR_11, VAR_12);





   if(VAR_12->s.need_refetch)
    FUNC_4(VAR_12, &VAR_16, &VAR_17);

   FUNC_7(&VAR_12->s);
   if(VAR_16) {
    FUNC_6(VAR_11, VAR_16, VAR_17,
     0, 1);
   }
   return 0;
  }

  VAR_12->s.curmod --;
  *VAR_14 = VAR_5;
  return 1;
 }
 return 0;
}
