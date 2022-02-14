
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct symbol {int dummy; } ;
struct rb_root {int dummy; } ;
struct process_kallsyms_args {TYPE_2__* map; TYPE_1__* dso; } ;
struct TYPE_4__ {size_t type; } ;
struct TYPE_3__ {struct rb_root* symbols; } ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 struct symbol* FUNC_1 (int ,int ,int ,char const*) ;
 int FUNC_2 (char,size_t) ;
 int FUNC_3 (struct rb_root*,struct symbol*) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, const char *VAR_2,
           char VAR_3, u64 VAR_4)
{
 struct symbol *VAR_5;
 struct process_kallsyms_args *VAR_6 = VAR_1;
 struct rb_root *VAR_7 = &VAR_6->dso->symbols[VAR_6->map->type];

 if (!FUNC_2(VAR_3, VAR_6->map->type))
  return 0;






 VAR_5 = FUNC_1(VAR_4, 0, FUNC_0(VAR_3), VAR_2);
 if (VAR_5 == ((void*)0))
  return -VAR_0;




 FUNC_3(VAR_7, VAR_5);

 return 0;
}
