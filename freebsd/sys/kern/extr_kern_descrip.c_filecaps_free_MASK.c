
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filecaps {int fc_ioctls; } ;


 int VAR_0 ;
 int FUNC_0 (struct filecaps*,int) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct filecaps *VAR_1)
{

 FUNC_1(VAR_1->fc_ioctls, VAR_0);
 FUNC_0(VAR_1, sizeof(*VAR_1));
}
