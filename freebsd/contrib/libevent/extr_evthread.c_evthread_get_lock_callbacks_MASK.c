
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evthread_lock_callbacks {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct evthread_lock_callbacks VAR_1 ;
 struct evthread_lock_callbacks VAR_2 ;

struct evthread_lock_callbacks *FUNC_0()
{
 return VAR_0
     ? &VAR_2 : &VAR_1;
}
