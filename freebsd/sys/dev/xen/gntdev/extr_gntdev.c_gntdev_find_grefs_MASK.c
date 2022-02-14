
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct per_user_data {int user_data_lock; int gref_tree; } ;
struct gntdev_gref {scalar_t__ file_index; } ;


 scalar_t__ VAR_0 ;
 struct gntdev_gref* FUNC_0 (int ,int *,struct gntdev_gref*) ;
 struct gntdev_gref* FUNC_1 (int ,int *,struct gntdev_gref*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct gntdev_gref*
FUNC_4(struct per_user_data *VAR_2,
 uint64_t VAR_3, uint32_t VAR_4)
{
 struct gntdev_gref VAR_5, *VAR_6, *VAR_7 = ((void*)0);

 VAR_5.file_index = VAR_3;

 FUNC_2(&VAR_2->user_data_lock);
 VAR_7 = FUNC_0(VAR_1, &VAR_2->gref_tree, &VAR_5);
 for (VAR_6 = VAR_7; VAR_6 != ((void*)0) && VAR_4 > 0; VAR_6 =
     FUNC_1(VAR_1, &VAR_2->gref_tree, VAR_6)) {
  if (VAR_3 != VAR_6->file_index)
   break;
  VAR_3 += VAR_0;
  VAR_4--;
 }
 FUNC_3(&VAR_2->user_data_lock);

 if (VAR_4)
  return (((void*)0));
 return (VAR_7);
}
