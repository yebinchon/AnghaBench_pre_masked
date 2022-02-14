
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ name; int srclistsize; int srclist; } ;
typedef TYPE_1__ ns_dbt ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(ns_dbt *VAR_0)
{
 FUNC_1(&VAR_0->srclist, VAR_0->srclistsize);
 if (VAR_0->name)
  FUNC_0((void *)VAR_0->name);
}
