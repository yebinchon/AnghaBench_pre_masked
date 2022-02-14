
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int * pending_chdir; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ,char*,int *) ;

void
FUNC_3(struct bsdtar *VAR_0)
{
 if (VAR_0->pending_chdir == ((void*)0))
  return;

 if (FUNC_0(VAR_0->pending_chdir) != 0) {
  FUNC_2(1, 0, "could not chdir to '%s'\n",
      VAR_0->pending_chdir);
 }
 FUNC_1(VAR_0->pending_chdir);
 VAR_0->pending_chdir = ((void*)0);
}
