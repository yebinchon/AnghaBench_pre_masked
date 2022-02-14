
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct filecaps {int fc_nioctls; int * fc_ioctls; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,size_t) ;

__attribute__((used)) static void
FUNC_3(const struct filecaps *VAR_0, struct filecaps *VAR_1,
    u_long *VAR_2)
{
 size_t VAR_3;

 *VAR_1 = *VAR_0;
 if (FUNC_1(VAR_0->fc_ioctls == ((void*)0))) {
  FUNC_0(VAR_2 == ((void*)0));
  return;
 }

 VAR_3 = sizeof(VAR_0->fc_ioctls[0]) * VAR_0->fc_nioctls;
 VAR_1->fc_ioctls = VAR_2;
 FUNC_2(VAR_0->fc_ioctls, VAR_1->fc_ioctls, VAR_3);
}
