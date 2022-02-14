
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filecaps {int fc_nioctls; int fc_fcntls; int * fc_ioctls; int fc_rights; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct filecaps *VAR_1)
{

 FUNC_0(&VAR_1->fc_rights);
 VAR_1->fc_ioctls = ((void*)0);
 VAR_1->fc_nioctls = -1;
 VAR_1->fc_fcntls = VAR_0;
}
