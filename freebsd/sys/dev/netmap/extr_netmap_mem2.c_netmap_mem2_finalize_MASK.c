
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_mem_d {int flags; int lasterr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct netmap_mem_d*) ;

__attribute__((used)) static int
FUNC_1(struct netmap_mem_d *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  goto out;

 if (FUNC_0(VAR_1))
  goto out;

 VAR_1->lasterr = 0;

out:
 return VAR_1->lasterr;
}
