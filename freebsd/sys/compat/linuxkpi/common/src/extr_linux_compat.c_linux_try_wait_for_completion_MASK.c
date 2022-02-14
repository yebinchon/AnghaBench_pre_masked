
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {scalar_t__ done; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct completion*) ;
 int FUNC_1 (struct completion*) ;

int
FUNC_2(struct completion *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1);
 VAR_2 = (VAR_1->done != 0);
 if (VAR_1->done != 0 && VAR_1->done != VAR_0)
  VAR_1->done--;
 FUNC_1(VAR_1);
 return (VAR_2);
}
