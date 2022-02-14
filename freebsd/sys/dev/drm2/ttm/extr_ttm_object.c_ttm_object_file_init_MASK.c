
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_object_file {int * ref_hash; int ref_list; int refcount; struct ttm_object_device* tdev; int lock; } ;
struct ttm_object_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ttm_object_file*,int ) ;
 struct ttm_object_file* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*) ;

struct ttm_object_file *FUNC_7(struct ttm_object_device *VAR_3,
          unsigned int VAR_4)
{
 struct ttm_object_file *VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7 = 0;
 int VAR_8;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_0, VAR_1);
 FUNC_6(&VAR_5->lock, "ttmfo");
 VAR_5->tdev = VAR_3;
 FUNC_5(&VAR_5->refcount, 1);
 FUNC_0(&VAR_5->ref_list);

 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
  VAR_8 = FUNC_1(&VAR_5->ref_hash[VAR_6], VAR_4);
  if (VAR_8) {
   VAR_7 = VAR_6;
   goto out_err;
  }
 }

 return VAR_5;
out_err:
 for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
  FUNC_2(&VAR_5->ref_hash[VAR_6]);

 FUNC_3(VAR_5, VAR_0);

 return ((void*)0);
}
