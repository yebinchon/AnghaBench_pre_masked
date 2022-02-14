
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cuse_client {TYPE_1__* server; } ;
struct TYPE_2__ {scalar_t__ is_closing; } ;


 scalar_t__ FUNC_0 (struct cuse_client*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (void**) ;

__attribute__((used)) static int
FUNC_4(struct cuse_client **VAR_1)
{
 struct cuse_client *VAR_2;
 int VAR_3;


 VAR_3 = FUNC_3((void **)&VAR_2);
 if (VAR_3 != 0) {
  *VAR_1 = ((void*)0);
  return (VAR_3);
 }

 FUNC_1();
 if (FUNC_0(VAR_2) || VAR_2->server->is_closing) {
  FUNC_2();
  *VAR_1 = ((void*)0);
  return (VAR_0);
 }
 FUNC_2();
 *VAR_1 = VAR_2;
 return (0);
}
