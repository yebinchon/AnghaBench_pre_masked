
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_strlist {int dummy; } ;
struct config_file {int dummy; } ;
struct TYPE_2__ {struct config_strlist* first; } ;
struct config_collate_arg {TYPE_1__ list; scalar_t__ status; } ;
typedef int m ;


 int VAR_0 ;
 int FUNC_0 (struct config_strlist*) ;
 int FUNC_1 (struct config_file*,char const*,int ,struct config_collate_arg*) ;
 int FUNC_2 (struct config_collate_arg*,int ,int) ;

int FUNC_3(struct config_file* VAR_1, const char* VAR_2,
 struct config_strlist** VAR_3)
{
 struct config_collate_arg VAR_4;
 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 *VAR_3 = ((void*)0);
 if(!FUNC_1(VAR_1, VAR_2, VAR_0, &VAR_4))
  return 1;
 if(VAR_4.status) {
  FUNC_0(VAR_4.list.first);
  return 2;
 }
 *VAR_3 = VAR_4.list.first;
 return 0;
}
