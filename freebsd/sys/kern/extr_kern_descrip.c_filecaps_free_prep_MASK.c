
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct filecaps {int * fc_ioctls; } ;


 int FUNC_0 (struct filecaps*,int) ;

__attribute__((used)) static u_long *
FUNC_1(struct filecaps *VAR_0)
{
 u_long *VAR_1;

 VAR_1 = VAR_0->fc_ioctls;
 FUNC_0(VAR_0, sizeof(*VAR_0));
 return (VAR_1);
}
