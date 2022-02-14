
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torus_context {scalar_t__ torus; int fabric; } ;


 int FUNC_0 (struct torus_context*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static
void FUNC_3(void *VAR_0)
{
 struct torus_context *VAR_1 = VAR_0;

 FUNC_1(&VAR_1->fabric);
 if (VAR_1->torus)
  FUNC_2(VAR_1->torus);
 FUNC_0(VAR_1);
}
