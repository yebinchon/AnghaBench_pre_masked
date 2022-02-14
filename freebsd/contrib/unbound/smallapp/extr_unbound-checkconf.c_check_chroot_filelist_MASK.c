
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_strlist {int str; struct config_strlist* next; } ;
struct config_file {int dummy; } ;


 int FUNC_0 (char const*,int *,char const*,struct config_file*) ;

__attribute__((used)) static void
FUNC_1(const char* VAR_0, struct config_strlist* VAR_1,
 const char* VAR_2, struct config_file* VAR_3)
{
 struct config_strlist* VAR_4;
 for(VAR_4=VAR_1; VAR_4; VAR_4=VAR_4->next) {
  FUNC_0(VAR_0, &VAR_4->str, VAR_2, VAR_3);
 }
}
