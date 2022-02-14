
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_ticket {int tk_refcount; } ;


 int FUNC_0 (struct fuse_ticket*) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct fuse_ticket *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->tk_refcount);
 if (VAR_1)
  FUNC_0(VAR_0);

 return VAR_1;
}
