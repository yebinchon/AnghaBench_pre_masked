
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {scalar_t__ done; } ;


 int FUNC_0 (struct completion*) ;
 int FUNC_1 (struct completion*) ;

int
FUNC_2(struct completion *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0);
 VAR_1 = (VAR_0->done != 0);
 FUNC_1(VAR_0);
 return (VAR_1);
}
