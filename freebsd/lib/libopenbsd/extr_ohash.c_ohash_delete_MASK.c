
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; int (* free ) (int *,int ) ;} ;
struct ohash {int * t; TYPE_1__ info; } ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct ohash *VAR_0)
{
 (VAR_0->info.free)(VAR_0->t, VAR_0->info.data);

 VAR_0->t = ((void*)0);

}
