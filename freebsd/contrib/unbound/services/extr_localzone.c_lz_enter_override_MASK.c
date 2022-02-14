
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct rbtree_type {int dummy; } ;
struct local_zones {int lock; } ;
struct local_zone_override {int type; } ;
struct local_zone {int lock; struct rbtree_type* override_tree; int region; } ;
struct addr_tree_node {int dummy; } ;
typedef int socklen_t ;
typedef enum localzone_type { ____Placeholder_localzone_type } localzone_type ;
typedef int dname ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rbtree_type*) ;
 int FUNC_1 (struct rbtree_type*,struct addr_tree_node*,struct sockaddr_storage*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int*) ;
 struct local_zone* FUNC_4 (struct local_zones*,int *,size_t,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,int ,struct sockaddr_storage*,int *,int*) ;
 scalar_t__ FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (char*,int *,size_t*) ;

__attribute__((used)) static int
FUNC_12(struct local_zones* VAR_2, char* VAR_3, char* VAR_4,
 char* VAR_5, uint16_t VAR_6)
{
 uint8_t VAR_7[VAR_0+1];
 size_t VAR_8 = sizeof(VAR_7);
 int VAR_9;
 struct sockaddr_storage VAR_10;
 int VAR_11;
 socklen_t VAR_12;
 struct local_zone* VAR_13;
 enum localzone_type VAR_14;


 if(FUNC_11(VAR_3, VAR_7, &VAR_8) != 0) {
  FUNC_8("cannot parse zone name in local-zone-override: %s %s",
   VAR_3, VAR_4);
  return 0;
 }
 VAR_9 = FUNC_2(VAR_7);


 if(!FUNC_9(VAR_4, VAR_1, &VAR_10, &VAR_12,
  &VAR_11)) {
  FUNC_8("cannot parse netblock in local-zone-override: %s %s",
   VAR_3, VAR_4);
  return 0;
 }


 if(!FUNC_3(VAR_5, &VAR_14)) {
  FUNC_8("cannot parse type in local-zone-override: %s %s %s",
   VAR_3, VAR_4, VAR_5);
  return 0;
 }


 FUNC_5(&VAR_2->lock);
 VAR_13 = FUNC_4(VAR_2, VAR_7, VAR_8, VAR_9, VAR_6);
 if(!VAR_13) {
  FUNC_6(&VAR_2->lock);
  FUNC_8("no local-zone for local-zone-override %s", VAR_3);
  return 0;
 }
 FUNC_7(&VAR_13->lock);
 FUNC_6(&VAR_2->lock);


 if(!VAR_13->override_tree) {
  VAR_13->override_tree = (struct rbtree_type*)FUNC_10(
   VAR_13->region, sizeof(*VAR_13->override_tree));
  if(!VAR_13->override_tree) {
   FUNC_6(&VAR_13->lock);
   FUNC_8("out of memory");
   return 0;
  }
  FUNC_0(VAR_13->override_tree);
 }

 if(VAR_13->override_tree) {
  struct local_zone_override* VAR_15;
  VAR_15 = (struct local_zone_override*)FUNC_10(
   VAR_13->region, sizeof(*VAR_15));
  if(!VAR_15) {
   FUNC_6(&VAR_13->lock);
   FUNC_8("out of memory");
   return 0;
  }
  VAR_15->type = VAR_14;
  if(!FUNC_1(VAR_13->override_tree,
   (struct addr_tree_node*)VAR_15, &VAR_10, VAR_12, VAR_11)) {
   FUNC_6(&VAR_13->lock);
   FUNC_8("duplicate local-zone-override %s %s",
    VAR_3, VAR_4);
   return 1;
  }
 }

 FUNC_6(&VAR_13->lock);
 return 1;
}
