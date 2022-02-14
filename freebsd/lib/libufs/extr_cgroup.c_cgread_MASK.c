
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fs_ncg; } ;
struct uufsd {scalar_t__ d_ccg; TYPE_1__ d_fs; } ;


 int FUNC_0 (struct uufsd*,int ) ;

int
FUNC_1(struct uufsd *VAR_0)
{

 if (VAR_0->d_ccg >= VAR_0->d_fs.fs_ncg)
  return (0);
 return (FUNC_0(VAR_0, VAR_0->d_ccg++));
}
