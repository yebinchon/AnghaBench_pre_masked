
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ops_list {int used; int list; int dev_list; int driver; int reg_mutex; int id; } ;
struct lock_class_key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ops_list* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,struct lock_class_key*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static struct ops_list * FUNC_8(char *VAR_5)
{
 struct ops_list *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return VAR_6;


 FUNC_7(VAR_6->id, VAR_5, sizeof(VAR_6->id));
 FUNC_4(&VAR_6->reg_mutex);




 FUNC_3(&VAR_6->reg_mutex, (struct lock_class_key *)VAR_5);

 VAR_6->driver = VAR_0;
 FUNC_0(&VAR_6->dev_list);

 VAR_6->used = 1;


 FUNC_5(&VAR_3);
 FUNC_2(&VAR_6->list, &VAR_4);
 VAR_2++;
 FUNC_6(&VAR_3);

 return VAR_6;
}
