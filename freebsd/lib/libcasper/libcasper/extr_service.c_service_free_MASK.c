
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_connection {int dummy; } ;
struct service {scalar_t__ s_magic; struct service* s_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct service*) ;
 struct service_connection* FUNC_2 (struct service*) ;
 int FUNC_3 (struct service*,struct service_connection*) ;

void
FUNC_4(struct service *VAR_1)
{
 struct service_connection *VAR_2;

 FUNC_0(VAR_1->s_magic == VAR_0);

 VAR_1->s_magic = 0;
 while ((VAR_2 = FUNC_2(VAR_1)) != ((void*)0))
  FUNC_3(VAR_1, VAR_2);
 FUNC_1(VAR_1->s_name);
 FUNC_1(VAR_1);
}
