
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puffs_kargs {int pa_fd; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2(struct puffs_kargs *VAR_1)
{

 VAR_1->pa_fd = FUNC_1("/dev/putter", VAR_0);
 if (VAR_1->pa_fd == -1)
  FUNC_0("open putter");
}
