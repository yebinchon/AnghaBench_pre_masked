
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpu_kern_ctx {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct fpu_kern_ctx*,int ) ;

void
FUNC_2(struct fpu_kern_ctx *VAR_2)
{

 FUNC_0((VAR_2->flags & VAR_0) == 0, ("free'ing inuse ctx"));

 FUNC_1(VAR_2, VAR_1);
}
