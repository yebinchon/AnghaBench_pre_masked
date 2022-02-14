
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct fuzz {scalar_t__ strategies; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct fuzz*) ;

int
FUNC_2(struct fuzz *VAR_0)
{
 FUNC_0(("fuzz = %p, strategies = 0x%lx", VAR_0,
     (u_long)VAR_0->strategies));

 return FUNC_1(VAR_0) && VAR_0->strategies == 0;
}
