
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_data {int data; int (* threadfn ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct thread_data *VAR_1;

 VAR_1 = VAR_0;
 VAR_1->threadfn(VAR_1->data);
}
