
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cuse_server {scalar_t__ is_closing; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (void**) ;

__attribute__((used)) static int
FUNC_3(struct cuse_server **VAR_1)
{
 struct cuse_server *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2((void **)&VAR_2);
 if (VAR_3 != 0) {
  *VAR_1 = ((void*)0);
  return (VAR_3);
 }

 FUNC_0();
 if (VAR_2->is_closing) {
  FUNC_1();
  *VAR_1 = ((void*)0);
  return (VAR_0);
 }
 FUNC_1();
 *VAR_1 = VAR_2;
 return (0);
}
