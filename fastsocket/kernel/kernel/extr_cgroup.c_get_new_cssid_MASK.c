
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct css_id {int id; int depth; } ;
struct cgroup_subsys {int id_lock; int idr; int use_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct css_id* FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int *,struct css_id*,int,int*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct css_id*) ;
 struct css_id* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct css_id *FUNC_10(struct cgroup_subsys *VAR_4, int VAR_5)
{
 struct css_id *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 FUNC_0(!VAR_4->use_id);

 VAR_9 = sizeof(*VAR_6) + sizeof(unsigned short) * (VAR_5 + 1);
 VAR_6 = FUNC_6(VAR_9, VAR_3);
 if (!VAR_6)
  return FUNC_1(-VAR_1);

 if (FUNC_9(!FUNC_3(&VAR_4->idr, VAR_3))) {
  VAR_8 = -VAR_1;
  goto err_out;
 }
 FUNC_7(&VAR_4->id_lock);

 VAR_8 = FUNC_2(&VAR_4->idr, VAR_6, 1, &VAR_7);
 FUNC_8(&VAR_4->id_lock);


 if (VAR_8) {
  VAR_8 = -VAR_2;
  goto err_out;
 }
 if (VAR_7 > VAR_0)
  goto remove_idr;

 VAR_6->id = VAR_7;
 VAR_6->depth = VAR_5;
 return VAR_6;
remove_idr:
 VAR_8 = -VAR_2;
 FUNC_7(&VAR_4->id_lock);
 FUNC_4(&VAR_4->idr, VAR_7);
 FUNC_8(&VAR_4->id_lock);
err_out:
 FUNC_5(VAR_6);
 return FUNC_1(VAR_8);

}
