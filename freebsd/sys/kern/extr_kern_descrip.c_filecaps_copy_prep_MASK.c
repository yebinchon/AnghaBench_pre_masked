
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct filecaps {int fc_nioctls; int * fc_ioctls; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (size_t,int ,int ) ;

__attribute__((used)) static u_long *
FUNC_3(const struct filecaps *VAR_2)
{
 u_long *VAR_3;
 size_t VAR_4;

 if (FUNC_1(VAR_2->fc_ioctls == ((void*)0)))
  return (((void*)0));

 FUNC_0(VAR_2->fc_nioctls > 0,
     ("fc_ioctls != NULL, but fc_nioctls=%hd", VAR_2->fc_nioctls));

 VAR_4 = sizeof(VAR_2->fc_ioctls[0]) * VAR_2->fc_nioctls;
 VAR_3 = FUNC_2(VAR_4, VAR_0, VAR_1);
 return (VAR_3);
}
