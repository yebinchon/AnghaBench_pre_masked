
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_size_t ;
typedef struct vm_object* vm_object_t ;
typedef scalar_t__ uint32_t ;
struct vm_object {int dummy; } ;
struct per_user_data {int user_data_lock; int gref_tree; } ;
struct gntdev_gref {int file_index; TYPE_1__* page; } ;
struct TYPE_2__ {scalar_t__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct gntdev_gref* FUNC_1 (int ,int *,struct gntdev_gref*) ;
 int FUNC_2 (struct vm_object*) ;
 int FUNC_3 (struct vm_object*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct vm_object* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct vm_object*) ;
 int FUNC_8 (TYPE_1__*,struct vm_object*,int ) ;

__attribute__((used)) static int
FUNC_9(struct per_user_data *VAR_4, struct gntdev_gref *VAR_5,
    uint32_t VAR_6, vm_size_t VAR_7, struct vm_object **VAR_8)
{
 vm_object_t VAR_9;
 struct gntdev_gref *VAR_10;

 VAR_9 = FUNC_6(VAR_2, VAR_7);
 if (VAR_9 == ((void*)0))
  return (VAR_1);

 FUNC_4(&VAR_4->user_data_lock);
 FUNC_2(VAR_9);
 for (VAR_10 = VAR_5; VAR_10 != ((void*)0) && VAR_6 > 0; VAR_10 =
     FUNC_1(VAR_3, &VAR_4->gref_tree, VAR_10)) {
  if (VAR_10->page->object)
   break;

  FUNC_8(VAR_10->page, VAR_9,
      FUNC_0(VAR_10->file_index));

  VAR_6--;
 }
 FUNC_3(VAR_9);
 FUNC_5(&VAR_4->user_data_lock);

 if (VAR_6) {
  FUNC_7(VAR_9);
  return (VAR_0);
 }

 *VAR_8 = VAR_9;

 return (0);

}
