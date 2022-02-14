
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int data; int (* function ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct timer_list *VAR_2;

 FUNC_0(VAR_0);

 VAR_2 = VAR_1;
 VAR_2->function(VAR_2->data);
}
