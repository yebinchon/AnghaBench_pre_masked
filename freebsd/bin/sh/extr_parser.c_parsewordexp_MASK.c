
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union node* next; } ;
union node {TYPE_1__ narg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 union node* FUNC_0 () ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_6 ;

union node *
FUNC_5(void)
{
 union node *VAR_7, *VAR_8 = ((void*)0), **VAR_9;
 int VAR_10;




 FUNC_1();
 VAR_4 = ((void*)0);

 VAR_6 = 0;
 VAR_2 = 0;
 VAR_3 = 0;
 FUNC_3(0);
 VAR_5 = 0;
 VAR_9 = &VAR_8;
 while ((VAR_10 = FUNC_2()) != VAR_0) {
  if (VAR_10 != VAR_1)
   FUNC_4(VAR_1);
  VAR_7 = FUNC_0();
  *VAR_9 = VAR_7;
  VAR_9 = &VAR_7->narg.next;
 }
 return VAR_8;
}
