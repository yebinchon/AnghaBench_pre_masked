
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_ooffset_t ;
typedef int uint32_t ;
struct vm_object {int dummy; } ;
struct per_user_data {int dummy; } ;
struct gntdev_gref {int dummy; } ;
struct gntdev_gmap {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void**) ;
 struct gntdev_gmap* FUNC_2 (struct per_user_data*,int ,int ) ;
 struct gntdev_gref* FUNC_3 (struct per_user_data*,int ,int ) ;
 int FUNC_4 (struct per_user_data*,struct gntdev_gmap*,int *,int ,struct vm_object**,int) ;
 int FUNC_5 (struct per_user_data*,struct gntdev_gref*,int ,int ,struct vm_object**) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_1, vm_ooffset_t *VAR_2, vm_size_t VAR_3,
    struct vm_object **VAR_4, int VAR_5)
{
 int VAR_6;
 uint32_t VAR_7;
 struct gntdev_gref *VAR_8;
 struct gntdev_gmap *VAR_9;
 struct per_user_data *VAR_10;

 VAR_6 = FUNC_1((void**) &VAR_10);
 if (VAR_6 != 0)
  return (VAR_0);

 VAR_7 = FUNC_0(VAR_3);

 VAR_8 = FUNC_3(VAR_10, *VAR_2, VAR_7);
 if (VAR_8) {
  VAR_6 = FUNC_5(VAR_10, VAR_8, VAR_7, VAR_3, VAR_4);
  return (VAR_6);
 }

 VAR_9 = FUNC_2(VAR_10, *VAR_2, VAR_7);
 if (VAR_9) {
  VAR_6 = FUNC_4(VAR_10, VAR_9, VAR_2, VAR_3, VAR_4,
      VAR_5);
  return (VAR_6);
 }

 return (VAR_0);
}
