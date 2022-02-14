
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_once {int arg; int (* cb ) (int,short,int ) ;} ;


 int FUNC_0 (struct event_once*) ;
 int FUNC_1 (int,short,int ) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, short VAR_1, void *VAR_2)
{
 struct event_once *VAR_3 = VAR_2;

 (*VAR_3->cb)(VAR_0, VAR_1, VAR_3->arg);
 FUNC_0(VAR_3);
}
