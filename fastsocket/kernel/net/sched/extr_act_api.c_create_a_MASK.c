
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_action {int order; } ;


 int VAR_0 ;
 struct tc_action* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static struct tc_action *FUNC_2(int VAR_1)
{
 struct tc_action *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (VAR_2 == ((void*)0)) {
  FUNC_1("create_a: failed to alloc!\n");
  return ((void*)0);
 }
 VAR_2->order = VAR_1;
 return VAR_2;
}
