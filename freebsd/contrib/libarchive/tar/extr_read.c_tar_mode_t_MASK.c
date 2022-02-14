
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int return_value; int matching; } ;


 int FUNC_0 (struct bsdtar*,char,int *) ;
 scalar_t__ FUNC_1 (int ,char*) ;

void
FUNC_2(struct bsdtar *VAR_0)
{
 FUNC_0(VAR_0, 't', ((void*)0));
 if (FUNC_1(VAR_0->matching,
     "Not found in archive") != 0)
  VAR_0->return_value = 1;
}
