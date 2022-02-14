
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int argf; int (* headf ) (struct termp*,int ) ;} ;


 int FUNC_0 (struct termp*,int ) ;

__attribute__((used)) static void
FUNC_1(struct termp *VAR_0)
{

 (*VAR_0->headf)(VAR_0, VAR_0->argf);
}
