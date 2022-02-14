
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kset {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct kset*) ;

int FUNC_3(struct kset *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_0;

 FUNC_2(VAR_2);
 VAR_3 = FUNC_0(&VAR_2->kobj);
 if (VAR_3)
  return VAR_3;
 FUNC_1(&VAR_2->kobj, VAR_1);
 return 0;
}
