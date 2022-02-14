
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct per_user_data {int user_data_lock; int gmap_tree; } ;
struct gntdev_gmap {scalar_t__ count; int file_index; } ;


 struct gntdev_gmap* FUNC_0 (int ,int *,struct gntdev_gmap*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct gntdev_gmap*
FUNC_3(struct per_user_data *VAR_1,
 uint64_t VAR_2, uint32_t VAR_3)
{
 struct gntdev_gmap VAR_4, *VAR_5;

 VAR_4.file_index = VAR_2;

 FUNC_1(&VAR_1->user_data_lock);
 VAR_5 = FUNC_0(VAR_0, &VAR_1->gmap_tree, &VAR_4);
 FUNC_2(&VAR_1->user_data_lock);

 if (VAR_5 != ((void*)0) && VAR_5->count == VAR_3)
  return (VAR_5);
 return (((void*)0));
}
