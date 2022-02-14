
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_type_qualifier {int ext_name; int q_container; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct vector_type_qualifier *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(VAR_0->q_container);
 FUNC_1(&VAR_0->ext_name);
}
