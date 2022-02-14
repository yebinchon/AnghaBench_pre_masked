
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct views {int dummy; } ;
struct acl_list {int dummy; } ;
struct acl_addr {TYPE_1__* view; } ;
struct TYPE_2__ {int lock; } ;


 struct acl_addr* FUNC_0 (struct acl_list*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*) ;
 TYPE_1__* FUNC_3 (struct views*,char const*,int ) ;

__attribute__((used)) static int
FUNC_4(struct acl_list* VAR_0, const char* VAR_1, const char* VAR_2,
 struct views* VAR_3)
{
 struct acl_addr* VAR_4;
 if(!(VAR_4=FUNC_0(VAR_0, VAR_1)))
  return 0;
 VAR_4->view = FUNC_3(VAR_3, VAR_2, 0 );
 if(!VAR_4->view) {
  FUNC_2("no view with name: %s", VAR_2);
  return 0;
 }
 FUNC_1(&VAR_4->view->lock);
 return 1;
}
