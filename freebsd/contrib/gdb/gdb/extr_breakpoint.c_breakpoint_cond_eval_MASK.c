
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct expression {int dummy; } ;


 int FUNC_0 (struct expression*) ;
 int FUNC_1 (struct value*) ;
 struct value* FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4 (void *VAR_0)
{
  struct value *VAR_1 = FUNC_2 ();
  int VAR_2 = !FUNC_3 (FUNC_0 ((struct expression *) VAR_0));
  FUNC_1 (VAR_1);
  return VAR_2;
}
