
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_set {int gc; int timeout; } ;
struct ip_set {struct list_set* data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct list_set*) ;
 int FUNC_2 (struct ip_set*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct ip_set *VAR_0)
{
 struct list_set *VAR_1 = VAR_0->data;

 if (FUNC_3(VAR_1->timeout))
  FUNC_0(&VAR_1->gc);
 FUNC_2(VAR_0);
 FUNC_1(VAR_1);

 VAR_0->data = ((void*)0);
}
