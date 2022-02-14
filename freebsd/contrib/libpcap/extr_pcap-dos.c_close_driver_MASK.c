
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int (* close ) (struct device*) ;} ;


 int FUNC_0 () ;
 struct device* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * VAR_1 ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4 (void)
{

  struct device *VAR_2 = VAR_0;

  if (VAR_2 && VAR_2->close)
  {
    (*VAR_2->close) (VAR_2);
    FUNC_0();
  }

  VAR_0 = ((void*)0);
}
