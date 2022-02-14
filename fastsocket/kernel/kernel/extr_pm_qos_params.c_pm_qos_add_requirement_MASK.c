
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct requirement_list {int list; int name; scalar_t__ value; } ;
typedef scalar_t__ s32 ;
struct TYPE_3__ {int list; } ;
struct TYPE_4__ {TYPE_1__ requirements; scalar_t__ default_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct requirement_list*) ;
 int FUNC_1 (char*,int ) ;
 struct requirement_list* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 TYPE_2__** VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int) ;

int FUNC_7(int VAR_5, char *VAR_6, s32 VAR_7)
{
 struct requirement_list *VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_2(sizeof(struct requirement_list), VAR_1);
 if (VAR_8) {
  if (VAR_7 == VAR_2)
   VAR_8->value = VAR_3[VAR_5]->default_value;
  else
   VAR_8->value = VAR_7;
  VAR_8->name = FUNC_1(VAR_6, VAR_1);
  if (!VAR_8->name)
   goto cleanup;

  FUNC_4(&VAR_4, VAR_9);
  FUNC_3(&VAR_8->list,
   &VAR_3[VAR_5]->requirements.list);
  FUNC_5(&VAR_4, VAR_9);
  FUNC_6(VAR_5);

  return 0;
 }

cleanup:
 FUNC_0(VAR_8);
 return -VAR_0;
}
