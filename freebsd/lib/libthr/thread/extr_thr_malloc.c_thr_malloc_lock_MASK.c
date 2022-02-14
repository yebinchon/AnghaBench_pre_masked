
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int locklevel; } ;


 int FUNC_0 (struct pthread*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct pthread *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return;
 VAR_1->locklevel++;
 FUNC_1(&VAR_0, FUNC_0(VAR_1));
}
