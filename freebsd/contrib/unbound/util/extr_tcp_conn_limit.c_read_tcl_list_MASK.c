
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcl_list {int dummy; } ;
struct config_str2list {scalar_t__ str2; scalar_t__ str; struct config_str2list* next; } ;
struct config_file {struct config_str2list* tcp_connection_limits; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tcl_list*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_2(struct tcl_list* VAR_0, struct config_file* VAR_1)
{
 struct config_str2list* VAR_2;
 for(VAR_2 = VAR_1->tcp_connection_limits; VAR_2; VAR_2 = VAR_2->next) {
  FUNC_0(VAR_2->str && VAR_2->str2);
  if(!FUNC_1(VAR_0, VAR_2->str, VAR_2->str2, 1))
   return 0;
 }
 return 1;
}
