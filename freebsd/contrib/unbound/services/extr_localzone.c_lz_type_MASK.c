
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rbtree_type {int dummy; } ;
struct local_zone_override {int type; } ;
struct comm_reply {int addrlen; int addr; } ;
typedef enum localzone_type { ____Placeholder_localzone_type } localzone_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rbtree_type*,int *,int ) ;
 int FUNC_1 (int *,size_t,int *,size_t,int *,size_t,int,int*,char**,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static enum localzone_type
FUNC_4(uint8_t *VAR_1, size_t VAR_2, uint8_t *VAR_3, size_t VAR_4,
 uint8_t *VAR_5, size_t VAR_6, enum localzone_type VAR_7,
 struct comm_reply* VAR_8, struct rbtree_type* VAR_9,
 int* VAR_10, char** VAR_11, int VAR_12)
{
 struct local_zone_override* VAR_13;
 if(VAR_8 && VAR_9) {
  VAR_13 = (struct local_zone_override*)FUNC_0(
   VAR_9, &VAR_8->addr, VAR_8->addrlen);
  if(VAR_13 && VAR_13->type) {
   FUNC_3(VAR_0, "local zone override to type %s",
    FUNC_2(VAR_13->type));
   return VAR_13->type;
  }
 }
 if(!VAR_1 || !VAR_3)
  return VAR_7;
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
  VAR_5, VAR_6, VAR_7, VAR_10, VAR_11, VAR_12);
}
