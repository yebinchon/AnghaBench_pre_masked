
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct local_zones {int ztree; } ;
struct local_zone {int lock; int parent; int node; } ;
typedef enum localzone_type { ____Placeholder_localzone_type } localzone_type ;


 int FUNC_0 (int *) ;
 struct local_zone* FUNC_1 (int *,size_t,int,int,int ) ;
 int FUNC_2 (struct local_zone*) ;
 int FUNC_3 (struct local_zones*,int *,size_t,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct local_zone*,int ,struct local_zone*) ;

struct local_zone* FUNC_9(struct local_zones* VAR_0,
 uint8_t* VAR_1, size_t VAR_2, int VAR_3, uint16_t VAR_4,
 enum localzone_type VAR_5)
{

 struct local_zone* VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5, VAR_4);
 if(!VAR_6) {
  FUNC_0(VAR_1);
  return ((void*)0);
 }
 FUNC_5(&VAR_6->lock);


 VAR_6->parent = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);


 if(!FUNC_7(&VAR_0->ztree, &VAR_6->node)) {

  FUNC_4(&VAR_6->lock);
  FUNC_2(VAR_6);
  FUNC_6("internal: duplicate entry in local_zones_add_zone");
  return ((void*)0);
 }


 FUNC_8(VAR_6, VAR_6->parent, VAR_6);

 FUNC_4(&VAR_6->lock);
 return VAR_6;
}
