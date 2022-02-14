
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_binding {struct c_binding* prev; } ;


 struct c_binding* VAR_0 ;
 int FUNC_0 (struct c_binding*,int ,int) ;

__attribute__((used)) static struct c_binding *
FUNC_1 (struct c_binding *VAR_1)
{
  struct c_binding *VAR_2 = VAR_1->prev;

  FUNC_0 (VAR_1, 0, sizeof (struct c_binding));
  VAR_1->prev = VAR_0;
  VAR_0 = VAR_1;

  return VAR_2;
}
